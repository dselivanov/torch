% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/tensor-factories.R
\name{tch_ones}
\alias{tch_ones}
\title{One filled tensor}
\usage{
tch_ones(sizes, dtype = NULL, layout = NULL, device = NULL,
  requires_grad = FALSE)
}
\arguments{
\item{sizes}{a sequence of integers defining the shape of the output tensor.}

\item{dtype}{the desired data type of returned tensor. Default: if \code{NULL}, infers
data type from \code{x}.}

\item{device}{the desired device of returned tensor. Default: if \code{NULL}, uses
the current device for the default tensor type (see \code{tch_set_default_tensor_type()}).
device will be the CPU for CPU tensor types and the current CUDA device for
CUDA tensor types.}

\item{requires_grad}{If autograd should record operations on the
returned tensor. Default: \code{FALSE}.}

\item{the}{desired layout of returned Tensor. Default: 'strided'}
}
\description{
Returns a tensor filled with the scalar value 1, with the shape defined by the variable argument sizes.
}
\examples{
tch_ones(c(2, 4))
tch_ones(5)

}
