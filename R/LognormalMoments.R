### ===== actuar: an R package for Actuarial Science =====
###
### Definition of the {m,lev}lnorm functions.
###
### See Appendix A of Klugman, Panjer & Willmot, Loss Models, Second
### Edition, Wiley, 2004.
###
### AUTHORS:  Mathieu Pigeon, Vincent Goulet <vincent.goulet@act.ulaval.ca>

mlnorm <- function(order, meanlog = 0, sdlog = 1)
    .External("do_dpq", "mlnorm", order, meanlog, sdlog, FALSE)

levlnorm <- function(limit, meanlog = 0, sdlog = 1, order = 1)
    .External("do_dpq", "levlnorm", limit, meanlog, sdlog, order, FALSE)