// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// rcpp_buildHmm
IntegerMatrix rcpp_buildHmm(List& coverages, int minDepth);
RcppExport SEXP _srnadiff_rcpp_buildHmm(SEXP coveragesSEXP, SEXP minDepthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type coverages(coveragesSEXP);
    Rcpp::traits::input_parameter< int >::type minDepth(minDepthSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_buildHmm(coverages, minDepth));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_viterbi
DataFrame rcpp_viterbi(List& coverages, NumericMatrix& transitions, NumericMatrix& emissions, float emissionThreshold, NumericVector& starts, IntegerVector& counts, NumericVector& pvalues, int minDepth, int minSize, int maxSize);
RcppExport SEXP _srnadiff_rcpp_viterbi(SEXP coveragesSEXP, SEXP transitionsSEXP, SEXP emissionsSEXP, SEXP emissionThresholdSEXP, SEXP startsSEXP, SEXP countsSEXP, SEXP pvaluesSEXP, SEXP minDepthSEXP, SEXP minSizeSEXP, SEXP maxSizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type coverages(coveragesSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type transitions(transitionsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type emissions(emissionsSEXP);
    Rcpp::traits::input_parameter< float >::type emissionThreshold(emissionThresholdSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type starts(startsSEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type counts(countsSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type pvalues(pvaluesSEXP);
    Rcpp::traits::input_parameter< int >::type minDepth(minDepthSEXP);
    Rcpp::traits::input_parameter< int >::type minSize(minSizeSEXP);
    Rcpp::traits::input_parameter< int >::type maxSize(maxSizeSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_viterbi(coverages, transitions, emissions, emissionThreshold, starts, counts, pvalues, minDepth, minSize, maxSize));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_ir
List rcpp_ir(S4& logFoldChanges, int minLength, int maxLength, double minLFC);
RcppExport SEXP _srnadiff_rcpp_ir(SEXP logFoldChangesSEXP, SEXP minLengthSEXP, SEXP maxLengthSEXP, SEXP minLFCSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4& >::type logFoldChanges(logFoldChangesSEXP);
    Rcpp::traits::input_parameter< int >::type minLength(minLengthSEXP);
    Rcpp::traits::input_parameter< int >::type maxLength(maxLengthSEXP);
    Rcpp::traits::input_parameter< double >::type minLFC(minLFCSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_ir(logFoldChanges, minLength, maxLength, minLFC));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_normalization
NumericVector rcpp_normalization(List& coverages, NumericVector& librarySizes);
RcppExport SEXP _srnadiff_rcpp_normalization(SEXP coveragesSEXP, SEXP librarySizesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type coverages(coveragesSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type librarySizes(librarySizesSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_normalization(coverages, librarySizes));
    return rcpp_result_gen;
END_RCPP
}
