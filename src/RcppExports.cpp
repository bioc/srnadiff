// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_buildHmm
List rcpp_buildHmm(ListOf < ListOf < IntegerVector > >& lengths, ListOf < ListOf < IntegerVector > >& values, IntegerVector& chromosomeSizes);
RcppExport SEXP srnadiff_rcpp_buildHmm(SEXP lengthsSEXP, SEXP valuesSEXP, SEXP chromosomeSizesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< ListOf < ListOf < IntegerVector > >& >::type lengths(lengthsSEXP);
    Rcpp::traits::input_parameter< ListOf < ListOf < IntegerVector > >& >::type values(valuesSEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type chromosomeSizes(chromosomeSizesSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_buildHmm(lengths, values, chromosomeSizes));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_viterbi
DataFrame rcpp_viterbi(IntegerVector& chromosomeSizes, NumericMatrix& transitions, NumericMatrix& emissions, NumericVector& starts, IntegerVector& counts, NumericVector& pvalues, ListOf < ListOf < IntegerVector > >& lengths, ListOf < ListOf < IntegerVector > >& values);
RcppExport SEXP srnadiff_rcpp_viterbi(SEXP chromosomeSizesSEXP, SEXP transitionsSEXP, SEXP emissionsSEXP, SEXP startsSEXP, SEXP countsSEXP, SEXP pvaluesSEXP, SEXP lengthsSEXP, SEXP valuesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector& >::type chromosomeSizes(chromosomeSizesSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type transitions(transitionsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type emissions(emissionsSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type starts(startsSEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type counts(countsSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type pvalues(pvaluesSEXP);
    Rcpp::traits::input_parameter< ListOf < ListOf < IntegerVector > >& >::type lengths(lengthsSEXP);
    Rcpp::traits::input_parameter< ListOf < ListOf < IntegerVector > >& >::type values(valuesSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_viterbi(chromosomeSizes, transitions, emissions, starts, counts, pvalues, lengths, values));
    return rcpp_result_gen;
END_RCPP
}
