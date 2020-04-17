// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// Bisection
double Bisection(arma::vec egvalues, double q, double xmin, double xmax);
RcppExport SEXP _STAAR_Bisection(SEXP egvaluesSEXP, SEXP qSEXP, SEXP xminSEXP, SEXP xmaxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type egvalues(egvaluesSEXP);
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type xmin(xminSEXP);
    Rcpp::traits::input_parameter< double >::type xmax(xmaxSEXP);
    rcpp_result_gen = Rcpp::wrap(Bisection(egvalues, q, xmin, xmax));
    return rcpp_result_gen;
END_RCPP
}
// CCT_pval
double CCT_pval(arma::vec x, arma::vec weights);
RcppExport SEXP _STAAR_CCT_pval(SEXP xSEXP, SEXP weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type weights(weightsSEXP);
    rcpp_result_gen = Rcpp::wrap(CCT_pval(x, weights));
    return rcpp_result_gen;
END_RCPP
}
// Indiv_Score_Test
List Indiv_Score_Test(arma::sp_mat G, arma::mat X, arma::vec working, double sigma, int fam, arma::vec residuals);
RcppExport SEXP _STAAR_Indiv_Score_Test(SEXP GSEXP, SEXP XSEXP, SEXP workingSEXP, SEXP sigmaSEXP, SEXP famSEXP, SEXP residualsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::sp_mat >::type G(GSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type working(workingSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< int >::type fam(famSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type residuals(residualsSEXP);
    rcpp_result_gen = Rcpp::wrap(Indiv_Score_Test(G, X, working, sigma, fam, residuals));
    return rcpp_result_gen;
END_RCPP
}
// Indiv_Score_Test_SMMAT
List Indiv_Score_Test_SMMAT(arma::sp_mat G, arma::mat P, arma::vec residuals);
RcppExport SEXP _STAAR_Indiv_Score_Test_SMMAT(SEXP GSEXP, SEXP PSEXP, SEXP residualsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::sp_mat >::type G(GSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type P(PSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type residuals(residualsSEXP);
    rcpp_result_gen = Rcpp::wrap(Indiv_Score_Test_SMMAT(G, P, residuals));
    return rcpp_result_gen;
END_RCPP
}
// Indiv_Score_Test_SMMAT_sparse
List Indiv_Score_Test_SMMAT_sparse(arma::sp_mat G, arma::sp_mat Sigma_i, arma::mat Sigma_iX, arma::mat cov, arma::vec residuals);
RcppExport SEXP _STAAR_Indiv_Score_Test_SMMAT_sparse(SEXP GSEXP, SEXP Sigma_iSEXP, SEXP Sigma_iXSEXP, SEXP covSEXP, SEXP residualsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::sp_mat >::type G(GSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type Sigma_i(Sigma_iSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sigma_iX(Sigma_iXSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type cov(covSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type residuals(residualsSEXP);
    rcpp_result_gen = Rcpp::wrap(Indiv_Score_Test_SMMAT_sparse(G, Sigma_i, Sigma_iX, cov, residuals));
    return rcpp_result_gen;
END_RCPP
}
// Indiv_Score_Test_SMMAT_sparse_cond
List Indiv_Score_Test_SMMAT_sparse_cond(arma::sp_mat G, arma::sp_mat Sigma_i, arma::mat Sigma_iX, arma::mat cov, arma::mat X_adj, arma::vec residuals);
RcppExport SEXP _STAAR_Indiv_Score_Test_SMMAT_sparse_cond(SEXP GSEXP, SEXP Sigma_iSEXP, SEXP Sigma_iXSEXP, SEXP covSEXP, SEXP X_adjSEXP, SEXP residualsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::sp_mat >::type G(GSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type Sigma_i(Sigma_iSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sigma_iX(Sigma_iXSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type cov(covSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X_adj(X_adjSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type residuals(residualsSEXP);
    rcpp_result_gen = Rcpp::wrap(Indiv_Score_Test_SMMAT_sparse_cond(G, Sigma_i, Sigma_iX, cov, X_adj, residuals));
    return rcpp_result_gen;
END_RCPP
}
// K
double K(double x, arma::vec egvalues);
RcppExport SEXP _STAAR_K(SEXP xSEXP, SEXP egvaluesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type egvalues(egvaluesSEXP);
    rcpp_result_gen = Rcpp::wrap(K(x, egvalues));
    return rcpp_result_gen;
END_RCPP
}
// K1
double K1(double x, arma::vec egvalues, double q);
RcppExport SEXP _STAAR_K1(SEXP xSEXP, SEXP egvaluesSEXP, SEXP qSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type egvalues(egvaluesSEXP);
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    rcpp_result_gen = Rcpp::wrap(K1(x, egvalues, q));
    return rcpp_result_gen;
END_RCPP
}
// K2
double K2(double x, arma::vec egvalues);
RcppExport SEXP _STAAR_K2(SEXP xSEXP, SEXP egvaluesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type egvalues(egvaluesSEXP);
    rcpp_result_gen = Rcpp::wrap(K2(x, egvalues));
    return rcpp_result_gen;
END_RCPP
}
// STAAR_O
arma::vec STAAR_O(arma::sp_mat G, arma::mat X, arma::vec working, double sigma, int fam, arma::vec residuals, arma::mat weights_B, arma::mat weights_S, arma::mat weights_A, arma::vec mac, int mac_thres);
RcppExport SEXP _STAAR_STAAR_O(SEXP GSEXP, SEXP XSEXP, SEXP workingSEXP, SEXP sigmaSEXP, SEXP famSEXP, SEXP residualsSEXP, SEXP weights_BSEXP, SEXP weights_SSEXP, SEXP weights_ASEXP, SEXP macSEXP, SEXP mac_thresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::sp_mat >::type G(GSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type working(workingSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< int >::type fam(famSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type residuals(residualsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type weights_B(weights_BSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type weights_S(weights_SSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type weights_A(weights_ASEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mac(macSEXP);
    Rcpp::traits::input_parameter< int >::type mac_thres(mac_thresSEXP);
    rcpp_result_gen = Rcpp::wrap(STAAR_O(G, X, working, sigma, fam, residuals, weights_B, weights_S, weights_A, mac, mac_thres));
    return rcpp_result_gen;
END_RCPP
}
// STAAR_O_SMMAT
arma::vec STAAR_O_SMMAT(arma::sp_mat G, arma::mat P, arma::vec residuals, arma::mat weights_B, arma::mat weights_S, arma::mat weights_A, arma::vec mac, int mac_thres);
RcppExport SEXP _STAAR_STAAR_O_SMMAT(SEXP GSEXP, SEXP PSEXP, SEXP residualsSEXP, SEXP weights_BSEXP, SEXP weights_SSEXP, SEXP weights_ASEXP, SEXP macSEXP, SEXP mac_thresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::sp_mat >::type G(GSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type P(PSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type residuals(residualsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type weights_B(weights_BSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type weights_S(weights_SSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type weights_A(weights_ASEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mac(macSEXP);
    Rcpp::traits::input_parameter< int >::type mac_thres(mac_thresSEXP);
    rcpp_result_gen = Rcpp::wrap(STAAR_O_SMMAT(G, P, residuals, weights_B, weights_S, weights_A, mac, mac_thres));
    return rcpp_result_gen;
END_RCPP
}
// STAAR_O_SMMAT_sparse
arma::vec STAAR_O_SMMAT_sparse(arma::sp_mat G, arma::sp_mat Sigma_i, arma::mat Sigma_iX, arma::mat cov, arma::vec residuals, arma::mat weights_B, arma::mat weights_S, arma::mat weights_A, arma::vec mac, int mac_thres);
RcppExport SEXP _STAAR_STAAR_O_SMMAT_sparse(SEXP GSEXP, SEXP Sigma_iSEXP, SEXP Sigma_iXSEXP, SEXP covSEXP, SEXP residualsSEXP, SEXP weights_BSEXP, SEXP weights_SSEXP, SEXP weights_ASEXP, SEXP macSEXP, SEXP mac_thresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::sp_mat >::type G(GSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type Sigma_i(Sigma_iSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sigma_iX(Sigma_iXSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type cov(covSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type residuals(residualsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type weights_B(weights_BSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type weights_S(weights_SSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type weights_A(weights_ASEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mac(macSEXP);
    Rcpp::traits::input_parameter< int >::type mac_thres(mac_thresSEXP);
    rcpp_result_gen = Rcpp::wrap(STAAR_O_SMMAT_sparse(G, Sigma_i, Sigma_iX, cov, residuals, weights_B, weights_S, weights_A, mac, mac_thres));
    return rcpp_result_gen;
END_RCPP
}
// STAAR_O_SMMAT_sparse_cond
arma::vec STAAR_O_SMMAT_sparse_cond(arma::sp_mat G, arma::sp_mat Sigma_i, arma::mat Sigma_iX, arma::mat cov, arma::mat X_adj, arma::vec residuals, arma::mat weights_B, arma::mat weights_S, arma::mat weights_A, arma::vec mac, int mac_thres);
RcppExport SEXP _STAAR_STAAR_O_SMMAT_sparse_cond(SEXP GSEXP, SEXP Sigma_iSEXP, SEXP Sigma_iXSEXP, SEXP covSEXP, SEXP X_adjSEXP, SEXP residualsSEXP, SEXP weights_BSEXP, SEXP weights_SSEXP, SEXP weights_ASEXP, SEXP macSEXP, SEXP mac_thresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::sp_mat >::type G(GSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type Sigma_i(Sigma_iSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sigma_iX(Sigma_iXSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type cov(covSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X_adj(X_adjSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type residuals(residualsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type weights_B(weights_BSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type weights_S(weights_SSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type weights_A(weights_ASEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mac(macSEXP);
    Rcpp::traits::input_parameter< int >::type mac_thres(mac_thresSEXP);
    rcpp_result_gen = Rcpp::wrap(STAAR_O_SMMAT_sparse_cond(G, Sigma_i, Sigma_iX, cov, X_adj, residuals, weights_B, weights_S, weights_A, mac, mac_thres));
    return rcpp_result_gen;
END_RCPP
}
// Saddle
double Saddle(double q, arma::vec egvalues);
RcppExport SEXP _STAAR_Saddle(SEXP qSEXP, SEXP egvaluesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type egvalues(egvaluesSEXP);
    rcpp_result_gen = Rcpp::wrap(Saddle(q, egvalues));
    return rcpp_result_gen;
END_RCPP
}
// matrix_flip
List matrix_flip(arma::mat G);
RcppExport SEXP _STAAR_matrix_flip(SEXP GSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type G(GSEXP);
    rcpp_result_gen = Rcpp::wrap(matrix_flip(G));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_STAAR_Bisection", (DL_FUNC) &_STAAR_Bisection, 4},
    {"_STAAR_CCT_pval", (DL_FUNC) &_STAAR_CCT_pval, 2},
    {"_STAAR_Indiv_Score_Test", (DL_FUNC) &_STAAR_Indiv_Score_Test, 6},
    {"_STAAR_Indiv_Score_Test_SMMAT", (DL_FUNC) &_STAAR_Indiv_Score_Test_SMMAT, 3},
    {"_STAAR_Indiv_Score_Test_SMMAT_sparse", (DL_FUNC) &_STAAR_Indiv_Score_Test_SMMAT_sparse, 5},
    {"_STAAR_Indiv_Score_Test_SMMAT_sparse_cond", (DL_FUNC) &_STAAR_Indiv_Score_Test_SMMAT_sparse_cond, 6},
    {"_STAAR_K", (DL_FUNC) &_STAAR_K, 2},
    {"_STAAR_K1", (DL_FUNC) &_STAAR_K1, 3},
    {"_STAAR_K2", (DL_FUNC) &_STAAR_K2, 2},
    {"_STAAR_STAAR_O", (DL_FUNC) &_STAAR_STAAR_O, 11},
    {"_STAAR_STAAR_O_SMMAT", (DL_FUNC) &_STAAR_STAAR_O_SMMAT, 8},
    {"_STAAR_STAAR_O_SMMAT_sparse", (DL_FUNC) &_STAAR_STAAR_O_SMMAT_sparse, 10},
    {"_STAAR_STAAR_O_SMMAT_sparse_cond", (DL_FUNC) &_STAAR_STAAR_O_SMMAT_sparse_cond, 11},
    {"_STAAR_Saddle", (DL_FUNC) &_STAAR_Saddle, 2},
    {"_STAAR_matrix_flip", (DL_FUNC) &_STAAR_matrix_flip, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_STAAR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
