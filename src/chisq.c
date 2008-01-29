/*  ===== actuar: An R Package for Actuarial Science =====
 *
 *  Functions to calculate raw and limited moments for the Chi-square
 *  distribution. See ../R/ChisqSupp.R for details.
 *
 *  AUTHORS: Christophe Dutang and Vincent Goulet <vincent.goulet@act.ulaval.ca>
 */

#include <R.h>
#include <Rmath.h>
#include "locale.h"
#include "dpq.h"

double mchisq(double order, double df, double ncp, int give_log)
{
    if (!R_FINITE(df)    ||
        !R_FINITE(ncp)   ||
        !R_FINITE(order) ||
        df <= 0.0 ||
        ncp < 0.0 ||
        order <= -df/2)
        return R_NaN;

    /* Trivial case */
    if (order == 0.0)
        return 1.0;

    /* Centered chi-square distribution */
    if (ncp == 0.0)
        return R_pow(2, order) * gammafn(order + df/2) / gammafn(df/2);

    /* Non centered chi-square distribution */
    if (order >= 1.0 && (int) order == order)
    {
        int i, j = 0, n = order;
        double *res;

        /* Array with 1, E[X], E[X^2], ..., E[X^n] */
        res = (double *) R_alloc(n + 1, sizeof(double));
        res[0] = 1.0;
        res[1] = df + ncp;      /* E[X] */
        for (i = 2; i <= n; i++)
        {
            res[i] = R_pow_di(2, i - 1) * (df + i * ncp);
            for (j = 1; j < i; j++)
                res[i] += R_pow_di(2, j - 1) * (df + j * ncp) * res[i - j] / gammafn(i - j + 1);
            res[i] *= gammafn(i);
        }
        return res[n];
    }
    else
        return R_NaN;
}

double levchisq(double limit, double df, double ncp, double order, int give_log)
{
    if (!R_FINITE(df)    ||
        !R_FINITE(ncp)   ||
        !R_FINITE(order) ||
        df <= 0.0 ||
        ncp < 0.0 ||
        order <= -df/2)
        return R_NaN;

    if (limit <= 0.0)
        return 0;

    if (ncp == 0.0)
    {
        double u, tmp;

        tmp = order + df/2;
        u = exp(log(limit) - log(2));

        return R_pow(2, order) * gammafn(tmp) *
            pgamma(u, tmp, 1.0, 1, 0) / gammafn(df/2) +
            R_VG__0(limit, order) * pgamma(u, df/2, 1.0, 0, 0);
    }
    else
        return R_NaN;
}

double mgfchisq(double x, double df, double ncp, int give_log)
{
    if (!R_FINITE(df)  ||
        !R_FINITE(ncp) ||
        df <= 0.0 ||
        ncp < 0.0 ||
        2 * x > 1.0)
        return R_NaN;

    if (x == 0.0)
        return R_D_exp(0.0);

    return R_D_exp(ncp * x / (1 - 2 * x) - df/2 * log1p(-2 * x));
}
