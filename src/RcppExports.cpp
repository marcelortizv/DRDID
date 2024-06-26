// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// checkTreatmentUniqueness
void checkTreatmentUniqueness(DataFrame dta, String idname, String treatName);
RcppExport SEXP _DRDID_checkTreatmentUniqueness(SEXP dtaSEXP, SEXP idnameSEXP, SEXP treatNameSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type dta(dtaSEXP);
    Rcpp::traits::input_parameter< String >::type idname(idnameSEXP);
    Rcpp::traits::input_parameter< String >::type treatName(treatNameSEXP);
    checkTreatmentUniqueness(dta, idname, treatName);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_DRDID_checkTreatmentUniqueness", (DL_FUNC) &_DRDID_checkTreatmentUniqueness, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_DRDID(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
