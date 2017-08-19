// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// hello_world
arma::mat hello_world();
RcppExport SEXP _rNodal_oilwells_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(hello_world());
    return rcpp_result_gen;
END_RCPP
}
// outerproduct_cpp
arma::mat outerproduct_cpp(const arma::colvec& x);
RcppExport SEXP _rNodal_oilwells_outerproduct_cpp(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(outerproduct_cpp(x));
    return rcpp_result_gen;
END_RCPP
}
// bothproducts
Rcpp::List bothproducts(const arma::colvec& x);
RcppExport SEXP _rNodal_oilwells_bothproducts(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(bothproducts(x));
    return rcpp_result_gen;
END_RCPP
}