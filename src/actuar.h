/*Error messages */
#define R_MSG_NA	_("NaNs produced")

/* Functions accessed from .External() */
SEXP do_dpq(SEXP args);
SEXP do_dpq1(int code, SEXP args);
SEXP do_dpq2(int code, SEXP args);
SEXP do_dpq3(int code, SEXP args);
SEXP do_dpq4(int code, SEXP args);
SEXP do_dpq5(int code, SEXP args);

SEXP do_random(SEXP args);
SEXP do_random1(int code, SEXP args);
SEXP do_random2(int code, SEXP args);
SEXP do_random3(int code, SEXP args);
SEXP do_random4(int code, SEXP args);

/* Utility functions */
/*   One parameter distributions */
double mexp(double order, double scale, int give_log);
double levexp(double limit, double scale, double order, int give_log);

double dinvexp(double x, double scale, int give_log);
double pinvexp(double q, double scale, int lower_tail, int log_p);
double qinvexp(double p, double scale, int lower_tail, int log_p);
double rinvexp(double scale);
double minvexp(double order, double scale, int give_log);
double levinvexp(double limit, double scale, double order, int give_log);

/*   Two parameter distributions */
double mbeta(double order, double shape1, double shape2, int give_log);
double levbeta(double limit, double shape1, double shape2, double order, int give_log);

double mgamma(double order, double shape, double scale, int give_log);
double levgamma(double limit, double shape, double scale, double order, int give_log);

double dinvgamma(double x, double scale, double shape, int give_log);
double pinvgamma(double q, double scale, double shape, int lower_tail, int log_p);
double qinvgamma(double p, double scale, double shape, int lower_tail, int log_p);
double rinvgamma(double scale, double shape);
double minvgamma(double order, double scale, double shape, int give_log);
double levinvgamma(double limit, double scale, double shape, double order, int give_log);

double dinvparalogis(double x, double shape, double scale, int give_log);
double pinvparalogis(double q, double shape, double scale, int lower_tail, int log_p);
double qinvparalogis(double p, double shape, double scale, int lower_tail, int log_p);
double rinvparalogis(double shape, double scale);
double minvparalogis(double order, double shape, double scale, int give_log);
double levinvparalogis(double limit, double shape, double scale, double order, int give_log);

double dinvpareto(double x, double shape, double scale, int give_log);
double pinvpareto(double q, double shape, double scale, int lower_tail, int log_p);
double qinvpareto(double p, double shape, double scale, int lower_tail, int log_p);
double rinvpareto(double shape, double scale);
double minvpareto(double order, double shape, double scale, int give_log);
double levinvpareto(double limit, double shape, double scale, double order, int log_p);

double dinvweibull(double x, double scale, double shape, int give_log);
double pinvweibull(double q, double scale, double shape, int lower_tail, int log_p);
double qinvweibull(double p, double scale, double shape, int lower_tail, int log_p);
double rinvweibull(double scale, double shape);
double minvweibull(double order, double scale, double shape, int give_log);
double levinvweibull(double limit, double scale, double shape, double order, int give_log);

double dlgamma(double x, double shapelog, double ratelog, int give_log);
double plgamma(double q, double shapelog, double ratelog, int lower_tail, int log_p);
double qlgamma(double p, double shapelog, double ratelog, int lower_tail, int log_p);
double rlgamma(double ratelog, double shapelog);
double mlgamma(double order, double shapelog, double ratelog, int give_log);
double levlgamma(double limit, double shapelog, double ratelog, double order, int give_log);

double dllogis(double x, double shape, double scale, int give_log);
double pllogis(double q, double shape, double scale, int lower_tail, int log_p);
double qllogis(double p, double shape, double scale, int lower_tail, int log_p);
double rllogis(double shape, double scale);
double mllogis(double order, double shape, double scale, int give_log);
double levllogis(double limit, double shape, double scale, double order, int give_log);

double mlnorm(double order, double logmean, double logsd, int give_log);
double levlnorm(double limit, double logmean, double logsd, double order, int give_log);

double dparalogis(double x, double shape, double scale, int give_log);
double pparalogis(double q, double shape, double scale, int lower_tail, int log_p);
double qparalogis(double p, double shape, double scale, int lower_tail, int log_p);
double rparalogis(double shape, double scale);
double mparalogis(double order, double shape, double scale, int give_log);
double levparalogis(double limit, double shape, double scale, double order, int give_log);

double dpareto(double x, double shape, double scale, int give_log);
double ppareto(double q, double shape, double scale, int lower_tail, int log_p);
double qpareto(double p, double shape, double scale, int lower_tail, int log_p);
double rpareto(double shape, double scale);
double mpareto(double order, double shape, double scale, int give_log);
double levpareto(double limit, double shape, double scale, double order, int give_log);

double dpareto1(double x, double shape, double scale, int give_log);
double ppareto1(double q, double shape, double scale, int lower_tail, int log_p);
double qpareto1(double p, double shape, double scale, int lower_tail, int log_p);
double rpareto1(double shape, double scale);
double mpareto1(double order, double shape, double scale, int give_log);
double levpareto1(double limit, double shape, double scale, double order, int give_log);

double mweibull(double order, double scale, double shape, int give_log);
double levweibull(double limit, double scale, double shape, double order, int give_log);

/*   Three parameter distributions */
double dburr(double x, double shape1, double shape2, double scale, int give_log);
double pburr(double q, double shape1, double shape2, double scale, int lower_tail, int log_p);
double qburr(double p, double shape1, double shape2, double scale, int lower_tail, int log_p);
double rburr(double shape1, double shape2, double scale);
double mburr(double order, double shape1, double shape2, double scale, int give_log);
double levburr(double limit, double shape1, double shape2, double scale, double order, int give_log);

double dgenpareto(double x, double shape1, double shape2, double scale, int give_log);
double pgenpareto(double q, double shape1, double shape2, double scale, int lower_tail, int log_p);
double qgenpareto(double p, double shape1, double shape2, double scale, int lower_tail, int log_p);
double rgenpareto(double shape1, double shape2, double scale);
double mgenpareto(double order, double shape1, double shape2, double scale, int give_log);
double levgenpareto(double limit, double shape1, double shape2, double scale, double order, int give_log);

double dinvburr(double x, double shape1, double shape2, double scale, int give_log);
double pinvburr(double q, double shape1, double shape2, double scale, int lower_tail, int log_p);
double qinvburr(double p, double shape1, double shape2, double scale, int lower_tail, int log_p);
double rinvburr(double shape1, double shape2, double scale);
double minvburr(double order, double shape1, double shape2, double scale, int give_log);
double levinvburr(double limit, double shape1, double shape2, double scale, double order, int give_log);

double dinvtrgamma(double x, double shape1, double shape2, double scale, int give_log);
double pinvtrgamma(double q, double shape1, double shape2, double scale, int lower_tail, int log_p);
double qinvtrgamma(double p, double shape1, double shape2, double scale, int lower_tail, int log_p);
double rinvtrgamma(double shape1, double shape2, double scale);
double minvtrgamma(double order, double shape1, double shape2, double scale, int give_log);
double levinvtrgamma(double limit, double shape1, double shape2, double scale, double order, int give_log);

double dtrgamma(double x, double shape1, double shape2, double scale, int give_log);
double ptrgamma(double q, double shape1, double shape2, double scale, int lower_tail, int log_p);
double qtrgamma(double p, double shape1, double shape2, double scale, int lower_tail, int log_p);
double rtrgamma(double shape1, double shape2, double scale);
double mtrgamma(double order, double shape1, double shape2, double scale, int give_log);
double levtrgamma(double limit, double shape1, double shape2, double scale, double order, int give_log);

/*   Four parameter distributions */
double dgenbeta(double x, double shape1, double shape2, double shape3, double scale, int give_log);
double pgenbeta(double q, double shape1, double shape2, double shape3, double scale, int lower_tail, int log_p);
double qgenbeta(double p, double shape1, double shape2, double shape3, double scale, int lower_tail, int log_p);
double rgenbeta(double shape1, double shape2, double shape3, double scale);
double mgenbeta(double order, double shape1, double shape2, double shape3, double scale, int give_log);
double levgenbeta(double limit, double shape1, double shape2, double shape3, double scale, double order, int give_log);

double dtrbeta(double x, double shape1, double shape2, double shape3, double scale, int give_log);
double ptrbeta(double q, double shape1, double shape2, double shape3, double scale, int lower_tail, int log_p);
double qtrbeta(double p, double shape1, double shape2, double shape3, double scale, int lower_tail, int log_p);
double rtrbeta(double shape1, double shape2, double shape3, double scale);
double mtrbeta(double order, double shape1, double shape2, double shape3, double scale, int give_log);
double levtrbeta(double limit, double shape1, double shape2, double shape3, double scale, double order, int give_log);


/* Definitions for the table linking the first group of functions to
 * the second one. Table found in names.c */
typedef struct {
    char *name;
    SEXP (*cfun)(int, SEXP);
    int code;
} FUNTAB;
extern FUNTAB fun_tab[];
