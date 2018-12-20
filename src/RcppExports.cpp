// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "torch_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// tensor_from_r_
Rcpp::XPtr<torch::Tensor> tensor_from_r_(SEXP x, std::vector<int64_t> dim);
RcppExport SEXP _torch_tensor_from_r_(SEXP xSEXP, SEXP dimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::vector<int64_t> >::type dim(dimSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_from_r_(x, dim));
    return rcpp_result_gen;
END_RCPP
}
// tensor_
Rcpp::XPtr<torch::Tensor> tensor_(Rcpp::XPtr<torch::Tensor> x, Rcpp::Nullable<Rcpp::CharacterVector> dtype, Rcpp::Nullable<Rcpp::CharacterVector> device, bool requires_grad);
RcppExport SEXP _torch_tensor_(SEXP xSEXP, SEXP dtypeSEXP, SEXP deviceSEXP, SEXP requires_gradSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::CharacterVector> >::type dtype(dtypeSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::CharacterVector> >::type device(deviceSEXP);
    Rcpp::traits::input_parameter< bool >::type requires_grad(requires_gradSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_(x, dtype, device, requires_grad));
    return rcpp_result_gen;
END_RCPP
}
// tensor_print_
void tensor_print_(Rcpp::XPtr<torch::Tensor> x);
RcppExport SEXP _torch_tensor_print_(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    tensor_print_(x);
    return R_NilValue;
END_RCPP
}
// as_array_tensor_
Rcpp::List as_array_tensor_(Rcpp::XPtr<torch::Tensor> x);
RcppExport SEXP _torch_as_array_tensor_(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(as_array_tensor_(x));
    return rcpp_result_gen;
END_RCPP
}
// tensor_abs_
Rcpp::XPtr<torch::Tensor> tensor_abs_(Rcpp::XPtr<torch::Tensor> x);
RcppExport SEXP _torch_tensor_abs_(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_abs_(x));
    return rcpp_result_gen;
END_RCPP
}
// tensor_acos_
Rcpp::XPtr<torch::Tensor> tensor_acos_(Rcpp::XPtr<torch::Tensor> x);
RcppExport SEXP _torch_tensor_acos_(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_acos_(x));
    return rcpp_result_gen;
END_RCPP
}
// tensor_add_
Rcpp::XPtr<torch::Tensor> tensor_add_(Rcpp::XPtr<torch::Tensor> x, Rcpp::XPtr<torch::Tensor> y);
RcppExport SEXP _torch_tensor_add_(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_add_(x, y));
    return rcpp_result_gen;
END_RCPP
}
// tensor_addbmm_
Rcpp::XPtr<torch::Tensor> tensor_addbmm_(Rcpp::XPtr<torch::Tensor> x, Rcpp::XPtr<torch::Tensor> batch1, Rcpp::XPtr<torch::Tensor> batch2, double beta, double alpha);
RcppExport SEXP _torch_tensor_addbmm_(SEXP xSEXP, SEXP batch1SEXP, SEXP batch2SEXP, SEXP betaSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type batch1(batch1SEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type batch2(batch2SEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_addbmm_(x, batch1, batch2, beta, alpha));
    return rcpp_result_gen;
END_RCPP
}
// tensor_addcdiv_
Rcpp::XPtr<torch::Tensor> tensor_addcdiv_(Rcpp::XPtr<torch::Tensor> x, Rcpp::XPtr<torch::Tensor> tensor1, Rcpp::XPtr<torch::Tensor> tensor2, double value);
RcppExport SEXP _torch_tensor_addcdiv_(SEXP xSEXP, SEXP tensor1SEXP, SEXP tensor2SEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type tensor1(tensor1SEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type tensor2(tensor2SEXP);
    Rcpp::traits::input_parameter< double >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_addcdiv_(x, tensor1, tensor2, value));
    return rcpp_result_gen;
END_RCPP
}
// tensor_addcmul_
Rcpp::XPtr<torch::Tensor> tensor_addcmul_(Rcpp::XPtr<torch::Tensor> x, Rcpp::XPtr<torch::Tensor> tensor1, Rcpp::XPtr<torch::Tensor> tensor2, double value);
RcppExport SEXP _torch_tensor_addcmul_(SEXP xSEXP, SEXP tensor1SEXP, SEXP tensor2SEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type tensor1(tensor1SEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type tensor2(tensor2SEXP);
    Rcpp::traits::input_parameter< double >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_addcmul_(x, tensor1, tensor2, value));
    return rcpp_result_gen;
END_RCPP
}
// tensor_addmm_
Rcpp::XPtr<torch::Tensor> tensor_addmm_(Rcpp::XPtr<torch::Tensor> x, Rcpp::XPtr<torch::Tensor> mat1, Rcpp::XPtr<torch::Tensor> mat2, double beta, double alpha);
RcppExport SEXP _torch_tensor_addmm_(SEXP xSEXP, SEXP mat1SEXP, SEXP mat2SEXP, SEXP betaSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type mat1(mat1SEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type mat2(mat2SEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_addmm_(x, mat1, mat2, beta, alpha));
    return rcpp_result_gen;
END_RCPP
}
// tensor_addmv_
Rcpp::XPtr<torch::Tensor> tensor_addmv_(Rcpp::XPtr<torch::Tensor> x, Rcpp::XPtr<torch::Tensor> mat, Rcpp::XPtr<torch::Tensor> vec, double beta, double alpha);
RcppExport SEXP _torch_tensor_addmv_(SEXP xSEXP, SEXP matSEXP, SEXP vecSEXP, SEXP betaSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type mat(matSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type vec(vecSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_addmv_(x, mat, vec, beta, alpha));
    return rcpp_result_gen;
END_RCPP
}
// tensor_addr_
Rcpp::XPtr<torch::Tensor> tensor_addr_(Rcpp::XPtr<torch::Tensor> x, Rcpp::XPtr<torch::Tensor> vec1, Rcpp::XPtr<torch::Tensor> vec2, double beta, double alpha);
RcppExport SEXP _torch_tensor_addr_(SEXP xSEXP, SEXP vec1SEXP, SEXP vec2SEXP, SEXP betaSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type vec1(vec1SEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type vec2(vec2SEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_addr_(x, vec1, vec2, beta, alpha));
    return rcpp_result_gen;
END_RCPP
}
// tensor_all_
Rcpp::XPtr<torch::Tensor> tensor_all_(Rcpp::XPtr<torch::Tensor> x, Rcpp::Nullable<Rcpp::IntegerVector> dim, bool keepdim);
RcppExport SEXP _torch_tensor_all_(SEXP xSEXP, SEXP dimSEXP, SEXP keepdimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::IntegerVector> >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< bool >::type keepdim(keepdimSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_all_(x, dim, keepdim));
    return rcpp_result_gen;
END_RCPP
}
// tensor_allclose_
bool tensor_allclose_(Rcpp::XPtr<torch::Tensor> x, Rcpp::XPtr<torch::Tensor> other, double rtol, double atol, bool equal_nan);
RcppExport SEXP _torch_tensor_allclose_(SEXP xSEXP, SEXP otherSEXP, SEXP rtolSEXP, SEXP atolSEXP, SEXP equal_nanSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type other(otherSEXP);
    Rcpp::traits::input_parameter< double >::type rtol(rtolSEXP);
    Rcpp::traits::input_parameter< double >::type atol(atolSEXP);
    Rcpp::traits::input_parameter< bool >::type equal_nan(equal_nanSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_allclose_(x, other, rtol, atol, equal_nan));
    return rcpp_result_gen;
END_RCPP
}
// tensor_any_
Rcpp::XPtr<torch::Tensor> tensor_any_(Rcpp::XPtr<torch::Tensor> x, Rcpp::Nullable<Rcpp::IntegerVector> dim, bool keepdim);
RcppExport SEXP _torch_tensor_any_(SEXP xSEXP, SEXP dimSEXP, SEXP keepdimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::IntegerVector> >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< bool >::type keepdim(keepdimSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_any_(x, dim, keepdim));
    return rcpp_result_gen;
END_RCPP
}
// tensor_argmax_
Rcpp::XPtr<torch::Tensor> tensor_argmax_(Rcpp::XPtr<torch::Tensor> x, Rcpp::Nullable<Rcpp::IntegerVector> dim, bool keepdim);
RcppExport SEXP _torch_tensor_argmax_(SEXP xSEXP, SEXP dimSEXP, SEXP keepdimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::IntegerVector> >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< bool >::type keepdim(keepdimSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_argmax_(x, dim, keepdim));
    return rcpp_result_gen;
END_RCPP
}
// tensor_argmin_
Rcpp::XPtr<torch::Tensor> tensor_argmin_(Rcpp::XPtr<torch::Tensor> x, Rcpp::Nullable<Rcpp::IntegerVector> dim, bool keepdim);
RcppExport SEXP _torch_tensor_argmin_(SEXP xSEXP, SEXP dimSEXP, SEXP keepdimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::IntegerVector> >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< bool >::type keepdim(keepdimSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_argmin_(x, dim, keepdim));
    return rcpp_result_gen;
END_RCPP
}
// tensor_as_strided_
Rcpp::XPtr<torch::Tensor> tensor_as_strided_(Rcpp::XPtr<torch::Tensor> x, Rcpp::IntegerVector size, Rcpp::IntegerVector stride, Rcpp::Nullable<Rcpp::IntegerVector> storage_offset);
RcppExport SEXP _torch_tensor_as_strided_(SEXP xSEXP, SEXP sizeSEXP, SEXP strideSEXP, SEXP storage_offsetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type stride(strideSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::IntegerVector> >::type storage_offset(storage_offsetSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_as_strided_(x, size, stride, storage_offset));
    return rcpp_result_gen;
END_RCPP
}
// tensor_to_string_
std::string tensor_to_string_(Rcpp::XPtr<torch::Tensor> x);
RcppExport SEXP _torch_tensor_to_string_(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_to_string_(x));
    return rcpp_result_gen;
END_RCPP
}
// tensor_asin_
Rcpp::XPtr<torch::Tensor> tensor_asin_(Rcpp::XPtr<torch::Tensor> x);
RcppExport SEXP _torch_tensor_asin_(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_asin_(x));
    return rcpp_result_gen;
END_RCPP
}
// tensor_atan_
Rcpp::XPtr<torch::Tensor> tensor_atan_(Rcpp::XPtr<torch::Tensor> x);
RcppExport SEXP _torch_tensor_atan_(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_atan_(x));
    return rcpp_result_gen;
END_RCPP
}
// tensor_atan2_
Rcpp::XPtr<torch::Tensor> tensor_atan2_(Rcpp::XPtr<torch::Tensor> x, Rcpp::XPtr<torch::Tensor> other);
RcppExport SEXP _torch_tensor_atan2_(SEXP xSEXP, SEXP otherSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type other(otherSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_atan2_(x, other));
    return rcpp_result_gen;
END_RCPP
}
// tensor_backward_
void tensor_backward_(Rcpp::XPtr<torch::Tensor> x, Rcpp::Nullable<Rcpp::XPtr<torch::Tensor>> gradient, bool keep_graph, bool create_graph);
RcppExport SEXP _torch_tensor_backward_(SEXP xSEXP, SEXP gradientSEXP, SEXP keep_graphSEXP, SEXP create_graphSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::XPtr<torch::Tensor>> >::type gradient(gradientSEXP);
    Rcpp::traits::input_parameter< bool >::type keep_graph(keep_graphSEXP);
    Rcpp::traits::input_parameter< bool >::type create_graph(create_graphSEXP);
    tensor_backward_(x, gradient, keep_graph, create_graph);
    return R_NilValue;
END_RCPP
}
// tensor_baddbmm_
Rcpp::XPtr<torch::Tensor> tensor_baddbmm_(Rcpp::XPtr<torch::Tensor> x, Rcpp::XPtr<torch::Tensor> batch1, Rcpp::XPtr<torch::Tensor> batch2, double beta, double alpha);
RcppExport SEXP _torch_tensor_baddbmm_(SEXP xSEXP, SEXP batch1SEXP, SEXP batch2SEXP, SEXP betaSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type batch1(batch1SEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type batch2(batch2SEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_baddbmm_(x, batch1, batch2, beta, alpha));
    return rcpp_result_gen;
END_RCPP
}
// tensor_bernoulli_
Rcpp::XPtr<torch::Tensor> tensor_bernoulli_(Rcpp::XPtr<torch::Tensor> x, Rcpp::Nullable<Rcpp::NumericVector> p);
RcppExport SEXP _torch_tensor_bernoulli_(SEXP xSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericVector> >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_bernoulli_(x, p));
    return rcpp_result_gen;
END_RCPP
}
// tensor_bincount_
Rcpp::XPtr<torch::Tensor> tensor_bincount_(Rcpp::XPtr<torch::Tensor> x, Rcpp::Nullable<Rcpp::XPtr<torch::Tensor>> weights, std::int64_t minlength);
RcppExport SEXP _torch_tensor_bincount_(SEXP xSEXP, SEXP weightsSEXP, SEXP minlengthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::XPtr<torch::Tensor>> >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< std::int64_t >::type minlength(minlengthSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_bincount_(x, weights, minlength));
    return rcpp_result_gen;
END_RCPP
}
// tensor_bmm_
Rcpp::XPtr<torch::Tensor> tensor_bmm_(Rcpp::XPtr<torch::Tensor> x, Rcpp::XPtr<torch::Tensor> mat2);
RcppExport SEXP _torch_tensor_bmm_(SEXP xSEXP, SEXP mat2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type mat2(mat2SEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_bmm_(x, mat2));
    return rcpp_result_gen;
END_RCPP
}
// tensor_btrifact_
Rcpp::List tensor_btrifact_(Rcpp::XPtr<torch::Tensor> x, bool pivot);
RcppExport SEXP _torch_tensor_btrifact_(SEXP xSEXP, SEXP pivotSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type pivot(pivotSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_btrifact_(x, pivot));
    return rcpp_result_gen;
END_RCPP
}
// tensor_btrisolve_
Rcpp::XPtr<torch::Tensor> tensor_btrisolve_(Rcpp::XPtr<torch::Tensor> x, Rcpp::XPtr<torch::Tensor> LU_data, Rcpp::XPtr<torch::Tensor> LU_pivots);
RcppExport SEXP _torch_tensor_btrisolve_(SEXP xSEXP, SEXP LU_dataSEXP, SEXP LU_pivotsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type LU_data(LU_dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type LU_pivots(LU_pivotsSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_btrisolve_(x, LU_data, LU_pivots));
    return rcpp_result_gen;
END_RCPP
}
// tensor_cauchy__
Rcpp::XPtr<torch::Tensor> tensor_cauchy__(Rcpp::XPtr<torch::Tensor> x, double median, double sigma);
RcppExport SEXP _torch_tensor_cauchy__(SEXP xSEXP, SEXP medianSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type median(medianSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_cauchy__(x, median, sigma));
    return rcpp_result_gen;
END_RCPP
}
// tensor_ceil_
Rcpp::XPtr<torch::Tensor> tensor_ceil_(Rcpp::XPtr<torch::Tensor> x);
RcppExport SEXP _torch_tensor_ceil_(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_ceil_(x));
    return rcpp_result_gen;
END_RCPP
}
// tensor_data_
Rcpp::XPtr<torch::Tensor> tensor_data_(Rcpp::XPtr<torch::Tensor> x);
RcppExport SEXP _torch_tensor_data_(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_data_(x));
    return rcpp_result_gen;
END_RCPP
}
// tensor_grad_
Rcpp::XPtr<torch::Tensor> tensor_grad_(Rcpp::XPtr<torch::Tensor> x);
RcppExport SEXP _torch_tensor_grad_(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_grad_(x));
    return rcpp_result_gen;
END_RCPP
}
// tensor_mean_
Rcpp::XPtr<torch::Tensor> tensor_mean_(Rcpp::XPtr<torch::Tensor> x, Rcpp::Nullable<Rcpp::IntegerVector> dim, Rcpp::Nullable<Rcpp::LogicalVector> keepdim, Rcpp::Nullable<Rcpp::CharacterVector> dtype);
RcppExport SEXP _torch_tensor_mean_(SEXP xSEXP, SEXP dimSEXP, SEXP keepdimSEXP, SEXP dtypeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::IntegerVector> >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::LogicalVector> >::type keepdim(keepdimSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::CharacterVector> >::type dtype(dtypeSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_mean_(x, dim, keepdim, dtype));
    return rcpp_result_gen;
END_RCPP
}
// tensor_mm_
Rcpp::XPtr<torch::Tensor> tensor_mm_(Rcpp::XPtr<torch::Tensor> x, Rcpp::XPtr<torch::Tensor> mat2);
RcppExport SEXP _torch_tensor_mm_(SEXP xSEXP, SEXP mat2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type mat2(mat2SEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_mm_(x, mat2));
    return rcpp_result_gen;
END_RCPP
}
// tensor_mul_
Rcpp::XPtr<torch::Tensor> tensor_mul_(Rcpp::XPtr<torch::Tensor> x, Rcpp::XPtr<torch::Tensor> other);
RcppExport SEXP _torch_tensor_mul_(SEXP xSEXP, SEXP otherSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type other(otherSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_mul_(x, other));
    return rcpp_result_gen;
END_RCPP
}
// tensor_permute_
Rcpp::XPtr<torch::Tensor> tensor_permute_(Rcpp::XPtr<torch::Tensor> x, std::vector<std::int64_t> dims);
RcppExport SEXP _torch_tensor_permute_(SEXP xSEXP, SEXP dimsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::vector<std::int64_t> >::type dims(dimsSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_permute_(x, dims));
    return rcpp_result_gen;
END_RCPP
}
// tensor_pow_
Rcpp::XPtr<torch::Tensor> tensor_pow_(Rcpp::XPtr<torch::Tensor> x, Rcpp::XPtr<torch::Tensor> exponent);
RcppExport SEXP _torch_tensor_pow_(SEXP xSEXP, SEXP exponentSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type exponent(exponentSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_pow_(x, exponent));
    return rcpp_result_gen;
END_RCPP
}
// tensor_sub_
Rcpp::XPtr<torch::Tensor> tensor_sub_(Rcpp::XPtr<torch::Tensor> x, Rcpp::XPtr<torch::Tensor> other, double alpha);
RcppExport SEXP _torch_tensor_sub_(SEXP xSEXP, SEXP otherSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type other(otherSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_sub_(x, other, alpha));
    return rcpp_result_gen;
END_RCPP
}
// tensor_sub__
Rcpp::XPtr<torch::Tensor> tensor_sub__(Rcpp::XPtr<torch::Tensor> x, Rcpp::XPtr<torch::Tensor> other, double alpha);
RcppExport SEXP _torch_tensor_sub__(SEXP xSEXP, SEXP otherSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type other(otherSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_sub__(x, other, alpha));
    return rcpp_result_gen;
END_RCPP
}
// tensor_sum_
Rcpp::XPtr<torch::Tensor> tensor_sum_(Rcpp::XPtr<torch::Tensor> x, Rcpp::Nullable<Rcpp::IntegerVector> dim, Rcpp::Nullable<Rcpp::LogicalVector> keepdim, Rcpp::Nullable<Rcpp::CharacterVector> dtype);
RcppExport SEXP _torch_tensor_sum_(SEXP xSEXP, SEXP dimSEXP, SEXP keepdimSEXP, SEXP dtypeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::IntegerVector> >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::LogicalVector> >::type keepdim(keepdimSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::CharacterVector> >::type dtype(dtypeSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_sum_(x, dim, keepdim, dtype));
    return rcpp_result_gen;
END_RCPP
}
// tensor_t_
Rcpp::XPtr<torch::Tensor> tensor_t_(Rcpp::XPtr<torch::Tensor> x);
RcppExport SEXP _torch_tensor_t_(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_t_(x));
    return rcpp_result_gen;
END_RCPP
}
// tensor_zero__
Rcpp::XPtr<torch::Tensor> tensor_zero__(Rcpp::XPtr<torch::Tensor> x);
RcppExport SEXP _torch_tensor_zero__(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_zero__(x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_torch_tensor_from_r_", (DL_FUNC) &_torch_tensor_from_r_, 2},
    {"_torch_tensor_", (DL_FUNC) &_torch_tensor_, 4},
    {"_torch_tensor_print_", (DL_FUNC) &_torch_tensor_print_, 1},
    {"_torch_as_array_tensor_", (DL_FUNC) &_torch_as_array_tensor_, 1},
    {"_torch_tensor_abs_", (DL_FUNC) &_torch_tensor_abs_, 1},
    {"_torch_tensor_acos_", (DL_FUNC) &_torch_tensor_acos_, 1},
    {"_torch_tensor_add_", (DL_FUNC) &_torch_tensor_add_, 2},
    {"_torch_tensor_addbmm_", (DL_FUNC) &_torch_tensor_addbmm_, 5},
    {"_torch_tensor_addcdiv_", (DL_FUNC) &_torch_tensor_addcdiv_, 4},
    {"_torch_tensor_addcmul_", (DL_FUNC) &_torch_tensor_addcmul_, 4},
    {"_torch_tensor_addmm_", (DL_FUNC) &_torch_tensor_addmm_, 5},
    {"_torch_tensor_addmv_", (DL_FUNC) &_torch_tensor_addmv_, 5},
    {"_torch_tensor_addr_", (DL_FUNC) &_torch_tensor_addr_, 5},
    {"_torch_tensor_all_", (DL_FUNC) &_torch_tensor_all_, 3},
    {"_torch_tensor_allclose_", (DL_FUNC) &_torch_tensor_allclose_, 5},
    {"_torch_tensor_any_", (DL_FUNC) &_torch_tensor_any_, 3},
    {"_torch_tensor_argmax_", (DL_FUNC) &_torch_tensor_argmax_, 3},
    {"_torch_tensor_argmin_", (DL_FUNC) &_torch_tensor_argmin_, 3},
    {"_torch_tensor_as_strided_", (DL_FUNC) &_torch_tensor_as_strided_, 4},
    {"_torch_tensor_to_string_", (DL_FUNC) &_torch_tensor_to_string_, 1},
    {"_torch_tensor_asin_", (DL_FUNC) &_torch_tensor_asin_, 1},
    {"_torch_tensor_atan_", (DL_FUNC) &_torch_tensor_atan_, 1},
    {"_torch_tensor_atan2_", (DL_FUNC) &_torch_tensor_atan2_, 2},
    {"_torch_tensor_backward_", (DL_FUNC) &_torch_tensor_backward_, 4},
    {"_torch_tensor_baddbmm_", (DL_FUNC) &_torch_tensor_baddbmm_, 5},
    {"_torch_tensor_bernoulli_", (DL_FUNC) &_torch_tensor_bernoulli_, 2},
    {"_torch_tensor_bincount_", (DL_FUNC) &_torch_tensor_bincount_, 3},
    {"_torch_tensor_bmm_", (DL_FUNC) &_torch_tensor_bmm_, 2},
    {"_torch_tensor_btrifact_", (DL_FUNC) &_torch_tensor_btrifact_, 2},
    {"_torch_tensor_btrisolve_", (DL_FUNC) &_torch_tensor_btrisolve_, 3},
    {"_torch_tensor_cauchy__", (DL_FUNC) &_torch_tensor_cauchy__, 3},
    {"_torch_tensor_ceil_", (DL_FUNC) &_torch_tensor_ceil_, 1},
    {"_torch_tensor_data_", (DL_FUNC) &_torch_tensor_data_, 1},
    {"_torch_tensor_grad_", (DL_FUNC) &_torch_tensor_grad_, 1},
    {"_torch_tensor_mean_", (DL_FUNC) &_torch_tensor_mean_, 4},
    {"_torch_tensor_mm_", (DL_FUNC) &_torch_tensor_mm_, 2},
    {"_torch_tensor_mul_", (DL_FUNC) &_torch_tensor_mul_, 2},
    {"_torch_tensor_permute_", (DL_FUNC) &_torch_tensor_permute_, 2},
    {"_torch_tensor_pow_", (DL_FUNC) &_torch_tensor_pow_, 2},
    {"_torch_tensor_sub_", (DL_FUNC) &_torch_tensor_sub_, 3},
    {"_torch_tensor_sub__", (DL_FUNC) &_torch_tensor_sub__, 3},
    {"_torch_tensor_sum_", (DL_FUNC) &_torch_tensor_sum_, 4},
    {"_torch_tensor_t_", (DL_FUNC) &_torch_tensor_t_, 1},
    {"_torch_tensor_zero__", (DL_FUNC) &_torch_tensor_zero__, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_torch(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
