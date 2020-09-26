// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// makeSeqMat
arma::umat makeSeqMat(int t_n, int t_J);
RcppExport SEXP _POLMM_makeSeqMat(SEXP t_nSEXP, SEXP t_JSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type t_n(t_nSEXP);
    Rcpp::traits::input_parameter< int >::type t_J(t_JSEXP);
    rcpp_result_gen = Rcpp::wrap(makeSeqMat(t_n, t_J));
    return rcpp_result_gen;
END_RCPP
}
// updateSeqMat
arma::umat updateSeqMat(arma::umat t_SeqMat, int t_n1, int t_J);
RcppExport SEXP _POLMM_updateSeqMat(SEXP t_SeqMatSEXP, SEXP t_n1SEXP, SEXP t_JSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::umat >::type t_SeqMat(t_SeqMatSEXP);
    Rcpp::traits::input_parameter< int >::type t_n1(t_n1SEXP);
    Rcpp::traits::input_parameter< int >::type t_J(t_JSEXP);
    rcpp_result_gen = Rcpp::wrap(updateSeqMat(t_SeqMat, t_n1, t_J));
    return rcpp_result_gen;
END_RCPP
}
// getStatVec
arma::vec getStatVec(arma::umat t_SeqMat, arma::vec t_GVec, arma::mat t_muMat, arma::mat t_iRMat);
RcppExport SEXP _POLMM_getStatVec(SEXP t_SeqMatSEXP, SEXP t_GVecSEXP, SEXP t_muMatSEXP, SEXP t_iRMatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::umat >::type t_SeqMat(t_SeqMatSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type t_GVec(t_GVecSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type t_muMat(t_muMatSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type t_iRMat(t_iRMatSEXP);
    rcpp_result_gen = Rcpp::wrap(getStatVec(t_SeqMat, t_GVec, t_muMat, t_iRMat));
    return rcpp_result_gen;
END_RCPP
}
// getProb
double getProb(arma::umat t_SeqMat, arma::mat t_muMat);
RcppExport SEXP _POLMM_getProb(SEXP t_SeqMatSEXP, SEXP t_muMatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::umat >::type t_SeqMat(t_SeqMatSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type t_muMat(t_muMatSEXP);
    rcpp_result_gen = Rcpp::wrap(getProb(t_SeqMat, t_muMat));
    return rcpp_result_gen;
END_RCPP
}
// fitPOLMMcpp
Rcpp::List fitPOLMMcpp(bool t_flagSparseGRM, bool t_flagGMatRatio, std::string t_bimfile, std::string t_famfile, std::string t_bedfile, arma::ivec t_posSampleInPlink, arma::mat t_Cova, arma::Col<int> t_yVec, arma::vec t_beta, arma::vec t_bVec, arma::vec t_eps, double t_tau, arma::mat t_GMatRatio, Rcpp::List t_SparseGRM, Rcpp::List t_controlList);
RcppExport SEXP _POLMM_fitPOLMMcpp(SEXP t_flagSparseGRMSEXP, SEXP t_flagGMatRatioSEXP, SEXP t_bimfileSEXP, SEXP t_famfileSEXP, SEXP t_bedfileSEXP, SEXP t_posSampleInPlinkSEXP, SEXP t_CovaSEXP, SEXP t_yVecSEXP, SEXP t_betaSEXP, SEXP t_bVecSEXP, SEXP t_epsSEXP, SEXP t_tauSEXP, SEXP t_GMatRatioSEXP, SEXP t_SparseGRMSEXP, SEXP t_controlListSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type t_flagSparseGRM(t_flagSparseGRMSEXP);
    Rcpp::traits::input_parameter< bool >::type t_flagGMatRatio(t_flagGMatRatioSEXP);
    Rcpp::traits::input_parameter< std::string >::type t_bimfile(t_bimfileSEXP);
    Rcpp::traits::input_parameter< std::string >::type t_famfile(t_famfileSEXP);
    Rcpp::traits::input_parameter< std::string >::type t_bedfile(t_bedfileSEXP);
    Rcpp::traits::input_parameter< arma::ivec >::type t_posSampleInPlink(t_posSampleInPlinkSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type t_Cova(t_CovaSEXP);
    Rcpp::traits::input_parameter< arma::Col<int> >::type t_yVec(t_yVecSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type t_beta(t_betaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type t_bVec(t_bVecSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type t_eps(t_epsSEXP);
    Rcpp::traits::input_parameter< double >::type t_tau(t_tauSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type t_GMatRatio(t_GMatRatioSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type t_SparseGRM(t_SparseGRMSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type t_controlList(t_controlListSEXP);
    rcpp_result_gen = Rcpp::wrap(fitPOLMMcpp(t_flagSparseGRM, t_flagGMatRatio, t_bimfile, t_famfile, t_bedfile, t_posSampleInPlink, t_Cova, t_yVec, t_beta, t_bVec, t_eps, t_tau, t_GMatRatio, t_SparseGRM, t_controlList));
    return rcpp_result_gen;
END_RCPP
}
// setPOLMMGENEobj
void setPOLMMGENEobj(int t_maxiterPCG, double t_tolPCG, arma::mat t_Cova, arma::uvec t_yVec, double t_tau, Rcpp::List t_SparseGRM, Rcpp::List t_LOCOList, arma::vec t_eta, int t_nMaxNonZero);
RcppExport SEXP _POLMM_setPOLMMGENEobj(SEXP t_maxiterPCGSEXP, SEXP t_tolPCGSEXP, SEXP t_CovaSEXP, SEXP t_yVecSEXP, SEXP t_tauSEXP, SEXP t_SparseGRMSEXP, SEXP t_LOCOListSEXP, SEXP t_etaSEXP, SEXP t_nMaxNonZeroSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type t_maxiterPCG(t_maxiterPCGSEXP);
    Rcpp::traits::input_parameter< double >::type t_tolPCG(t_tolPCGSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type t_Cova(t_CovaSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type t_yVec(t_yVecSEXP);
    Rcpp::traits::input_parameter< double >::type t_tau(t_tauSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type t_SparseGRM(t_SparseGRMSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type t_LOCOList(t_LOCOListSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type t_eta(t_etaSEXP);
    Rcpp::traits::input_parameter< int >::type t_nMaxNonZero(t_nMaxNonZeroSEXP);
    setPOLMMGENEobj(t_maxiterPCG, t_tolPCG, t_Cova, t_yVec, t_tau, t_SparseGRM, t_LOCOList, t_eta, t_nMaxNonZero);
    return R_NilValue;
END_RCPP
}
// closePOLMMGENEobj
void closePOLMMGENEobj();
RcppExport SEXP _POLMM_closePOLMMGENEobj() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    closePOLMMGENEobj();
    return R_NilValue;
END_RCPP
}
// setPOLMMGENEchr
void setPOLMMGENEchr(Rcpp::List t_LOCOList, std::string t_excludechr);
RcppExport SEXP _POLMM_setPOLMMGENEchr(SEXP t_LOCOListSEXP, SEXP t_excludechrSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type t_LOCOList(t_LOCOListSEXP);
    Rcpp::traits::input_parameter< std::string >::type t_excludechr(t_excludechrSEXP);
    setPOLMMGENEchr(t_LOCOList, t_excludechr);
    return R_NilValue;
END_RCPP
}
// getStatVarS
Rcpp::List getStatVarS(arma::mat t_GMat, double t_NonZero_cutoff, double t_StdStat_cutoff);
RcppExport SEXP _POLMM_getStatVarS(SEXP t_GMatSEXP, SEXP t_NonZero_cutoffSEXP, SEXP t_StdStat_cutoffSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type t_GMat(t_GMatSEXP);
    Rcpp::traits::input_parameter< double >::type t_NonZero_cutoff(t_NonZero_cutoffSEXP);
    Rcpp::traits::input_parameter< double >::type t_StdStat_cutoff(t_StdStat_cutoffSEXP);
    rcpp_result_gen = Rcpp::wrap(getStatVarS(t_GMat, t_NonZero_cutoff, t_StdStat_cutoff));
    return rcpp_result_gen;
END_RCPP
}
// getPvalERtoR
double getPvalERtoR(arma::vec t_GVec);
RcppExport SEXP _POLMM_getPvalERtoR(SEXP t_GVecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type t_GVec(t_GVecSEXP);
    rcpp_result_gen = Rcpp::wrap(getPvalERtoR(t_GVec));
    return rcpp_result_gen;
END_RCPP
}
// getobjP
Rcpp::List getobjP(arma::mat t_Cova, arma::mat t_yMat, arma::mat t_muMat, arma::mat t_iRMat);
RcppExport SEXP _POLMM_getobjP(SEXP t_CovaSEXP, SEXP t_yMatSEXP, SEXP t_muMatSEXP, SEXP t_iRMatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type t_Cova(t_CovaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type t_yMat(t_yMatSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type t_muMat(t_muMatSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type t_iRMat(t_iRMatSEXP);
    rcpp_result_gen = Rcpp::wrap(getobjP(t_Cova, t_yMat, t_muMat, t_iRMat));
    return rcpp_result_gen;
END_RCPP
}
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
// getyMatR
arma::mat getyMatR(arma::mat yVec, int n, int J);
RcppExport SEXP _POLMM_getyMatR(SEXP yVecSEXP, SEXP nSEXP, SEXP JSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type yVec(yVecSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type J(JSEXP);
    rcpp_result_gen = Rcpp::wrap(getyMatR(yVec, n, J));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_POLMM_makeSeqMat", (DL_FUNC) &_POLMM_makeSeqMat, 2},
    {"_POLMM_updateSeqMat", (DL_FUNC) &_POLMM_updateSeqMat, 3},
    {"_POLMM_getStatVec", (DL_FUNC) &_POLMM_getStatVec, 4},
    {"_POLMM_getProb", (DL_FUNC) &_POLMM_getProb, 2},
    {"_POLMM_fitPOLMMcpp", (DL_FUNC) &_POLMM_fitPOLMMcpp, 15},
    {"_POLMM_setPOLMMGENEobj", (DL_FUNC) &_POLMM_setPOLMMGENEobj, 9},
    {"_POLMM_closePOLMMGENEobj", (DL_FUNC) &_POLMM_closePOLMMGENEobj, 0},
    {"_POLMM_setPOLMMGENEchr", (DL_FUNC) &_POLMM_setPOLMMGENEchr, 2},
    {"_POLMM_getStatVarS", (DL_FUNC) &_POLMM_getStatVarS, 3},
    {"_POLMM_getPvalERtoR", (DL_FUNC) &_POLMM_getPvalERtoR, 1},
    {"_POLMM_getobjP", (DL_FUNC) &_POLMM_getobjP, 4},
    {"_POLMM_outputadjGFast", (DL_FUNC) &_POLMM_outputadjGFast, 2},
    {"_POLMM_getyMatR", (DL_FUNC) &_POLMM_getyMatR, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_POLMM(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
