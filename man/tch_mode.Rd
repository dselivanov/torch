% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/tensor.R
\name{tch_mode}
\alias{tch_mode}
\title{mode}
\usage{
tch_mode(x, dim = -1, keepdim = FALSE)
}
\arguments{
\item{x}{tensor object}

\item{dim}{the dimension to reduce}

\item{keepdim}{wether to keep or not the dim}
}
\description{
Returns the mode value of each row of the x tensor in the given dimension dim.
Also returns the index location of the mode value as a LongTensor.
By default, dim is the last dimension of the x tensor.
}
\examples{
x <- tensor(array(1:20, c(5,4)))
tch_mode(x)
tch_mode(x, 0)
tch_mode(x, 1)
}
