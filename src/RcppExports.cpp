// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// outputadjGFast
Rcpp::List outputadjGFast(arma::vec GVec, Rcpp::List objP);
RcppExport SEXP _POLMM_outputadjGFast(SEXP GVecSEXP, SEXP objPSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type GVec(GVecSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type objP(objPSEXP);
    rcpp_result_gen = Rcpp::wrap(outputadjGFast(GVec, objP));
    return rcpp_result_gen;
END_RCPP
}
// fitNullcpp
Rcpp::List fitNullcpp(std::string Plink, arma::vec posSampleInPlink, arma::mat CovaR, arma::Col<int> yVecR, arma::vec betaR, arma::vec bVecR, arma::vec epsR, double tauR, arma::mat GMatRatioR, Rcpp::List controlListR);
RcppExport SEXP _POLMM_fitNullcpp(SEXP PlinkSEXP, SEXP posSampleInPlinkSEXP, SEXP CovaRSEXP, SEXP yVecRSEXP, SEXP betaRSEXP, SEXP bVecRSEXP, SEXP epsRSEXP, SEXP tauRSEXP, SEXP GMatRatioRSEXP, SEXP controlListRSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type Plink(PlinkSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type posSampleInPlink(posSampleInPlinkSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type CovaR(CovaRSEXP);
    Rcpp::traits::input_parameter< arma::Col<int> >::type yVecR(yVecRSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type betaR(betaRSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type bVecR(bVecRSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type epsR(epsRSEXP);
    Rcpp::traits::input_parameter< double >::type tauR(tauRSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type GMatRatioR(GMatRatioRSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type controlListR(controlListRSEXP);
    rcpp_result_gen = Rcpp::wrap(fitNullcpp(Plink, posSampleInPlink, CovaR, yVecR, betaR, bVecR, epsR, tauR, GMatRatioR, controlListR));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_POLMM_outputadjGFast", (DL_FUNC) &_POLMM_outputadjGFast, 2},
    {"_POLMM_fitNullcpp", (DL_FUNC) &_POLMM_fitNullcpp, 10},
    {NULL, NULL, 0}
};

RcppExport void R_init_POLMM(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
