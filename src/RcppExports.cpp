// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "torch_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// create_torch_tensor
void create_torch_tensor();
RcppExport SEXP _torch_create_torch_tensor() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    create_torch_tensor();
    return R_NilValue;
END_RCPP
}
// create_tensor
Rcpp::XPtr<torch::Tensor> create_tensor();
RcppExport SEXP _torch_create_tensor() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(create_tensor());
    return rcpp_result_gen;
END_RCPP
}
// print_tensor
void print_tensor(Rcpp::XPtr<torch::Tensor> x);
RcppExport SEXP _torch_print_tensor(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    print_tensor(x);
    return R_NilValue;
END_RCPP
}
// tensor_from_r
Rcpp::XPtr<torch::Tensor> tensor_from_r(Rcpp::NumericVector x, bool clone);
RcppExport SEXP _torch_tensor_from_r(SEXP xSEXP, SEXP cloneSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type clone(cloneSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_from_r(x, clone));
    return rcpp_result_gen;
END_RCPP
}
// tensor_impl
Rcpp::XPtr<torch::Tensor> tensor_impl(SEXP x, bool clone);
RcppExport SEXP _torch_tensor_impl(SEXP xSEXP, SEXP cloneSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type clone(cloneSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_impl(x, clone));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_torch_create_torch_tensor", (DL_FUNC) &_torch_create_torch_tensor, 0},
    {"_torch_create_tensor", (DL_FUNC) &_torch_create_tensor, 0},
    {"_torch_print_tensor", (DL_FUNC) &_torch_print_tensor, 1},
    {"_torch_tensor_from_r", (DL_FUNC) &_torch_tensor_from_r, 2},
    {"_torch_tensor_impl", (DL_FUNC) &_torch_tensor_impl, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_torch(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
