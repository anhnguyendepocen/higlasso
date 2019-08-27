// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// generate_Xi
arma::field <arma::mat> generate_Xi(arma::field <arma::mat> Xm);
RcppExport SEXP _higlasso_generate_Xi(SEXP XmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::field <arma::mat> >::type Xm(XmSEXP);
    rcpp_result_gen = Rcpp::wrap(generate_Xi(Xm));
    return rcpp_result_gen;
END_RCPP
}
// higlasso_internal
Rcpp::List higlasso_internal(arma::vec Y, arma::field <arma::mat> Xm, arma::field <arma::mat> Xi2, arma::mat Z, arma::field <arma::vec> beta, arma::field                                  <arma::vec> eta_init, double l1, double l2, double sigma, int maxit, int halfmax, double delta);
RcppExport SEXP _higlasso_higlasso_internal(SEXP YSEXP, SEXP XmSEXP, SEXP Xi2SEXP, SEXP ZSEXP, SEXP betaSEXP, SEXP eta_initSEXP, SEXP l1SEXP, SEXP l2SEXP, SEXP sigmaSEXP, SEXP maxitSEXP, SEXP halfmaxSEXP, SEXP deltaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::field <arma::mat> >::type Xm(XmSEXP);
    Rcpp::traits::input_parameter< arma::field <arma::mat> >::type Xi2(Xi2SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< arma::field <arma::vec> >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::field                                  <arma::vec> >::type eta_init(eta_initSEXP);
    Rcpp::traits::input_parameter< double >::type l1(l1SEXP);
    Rcpp::traits::input_parameter< double >::type l2(l2SEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< int >::type maxit(maxitSEXP);
    Rcpp::traits::input_parameter< int >::type halfmax(halfmaxSEXP);
    Rcpp::traits::input_parameter< double >::type delta(deltaSEXP);
    rcpp_result_gen = Rcpp::wrap(higlasso_internal(Y, Xm, Xi2, Z, beta, eta_init, l1, l2, sigma, maxit, halfmax, delta));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_higlasso_generate_Xi", (DL_FUNC) &_higlasso_generate_Xi, 1},
    {"_higlasso_higlasso_internal", (DL_FUNC) &_higlasso_higlasso_internal, 12},
    {NULL, NULL, 0}
};

RcppExport void R_init_higlasso(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
