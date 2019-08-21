// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// generate_Xm
arma::field <arma::mat> generate_Xm(arma::field <arma::mat>& Xm);
RcppExport SEXP _higlasso2_generate_Xm(SEXP XmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::field <arma::mat>& >::type Xm(XmSEXP);
    rcpp_result_gen = Rcpp::wrap(generate_Xm(Xm));
    return rcpp_result_gen;
END_RCPP
}
// generate_Xi
arma::field <arma::mat> generate_Xi(arma::field <arma::mat> Xm);
RcppExport SEXP _higlasso2_generate_Xi(SEXP XmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::field <arma::mat> >::type Xm(XmSEXP);
    rcpp_result_gen = Rcpp::wrap(generate_Xi(Xm));
    return rcpp_result_gen;
END_RCPP
}
// initalize_eta
arma::field <arma::vec> initalize_eta(arma::field <arma::vec> eta_init, arma::uword s);
RcppExport SEXP _higlasso2_initalize_eta(SEXP eta_initSEXP, SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::field <arma::vec> >::type eta_init(eta_initSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type s(sSEXP);
    rcpp_result_gen = Rcpp::wrap(initalize_eta(eta_init, s));
    return rcpp_result_gen;
END_RCPP
}
// higlasso
Rcpp::List higlasso(arma::vec Y, arma::field <arma::mat> Xm, arma::mat Z, arma::field <arma::vec> beta, arma::field <arma::vec> eta_init, double l1, double l2, double sigma, int maxit);
RcppExport SEXP _higlasso2_higlasso(SEXP YSEXP, SEXP XmSEXP, SEXP ZSEXP, SEXP betaSEXP, SEXP eta_initSEXP, SEXP l1SEXP, SEXP l2SEXP, SEXP sigmaSEXP, SEXP maxitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::field <arma::mat> >::type Xm(XmSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< arma::field <arma::vec> >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::field <arma::vec> >::type eta_init(eta_initSEXP);
    Rcpp::traits::input_parameter< double >::type l1(l1SEXP);
    Rcpp::traits::input_parameter< double >::type l2(l2SEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< int >::type maxit(maxitSEXP);
    rcpp_result_gen = Rcpp::wrap(higlasso(Y, Xm, Z, beta, eta_init, l1, l2, sigma, maxit));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_higlasso2_generate_Xm", (DL_FUNC) &_higlasso2_generate_Xm, 1},
    {"_higlasso2_generate_Xi", (DL_FUNC) &_higlasso2_generate_Xi, 1},
    {"_higlasso2_initalize_eta", (DL_FUNC) &_higlasso2_initalize_eta, 2},
    {"_higlasso2_higlasso", (DL_FUNC) &_higlasso2_higlasso, 9},
    {NULL, NULL, 0}
};

RcppExport void R_init_higlasso2(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
