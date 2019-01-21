
<!-- README.md is generated from README.Rmd. Please edit that file -->

# torch

[![lifecycle](https://img.shields.io/badge/lifecycle-experimental-orange.svg)](https://www.tidyverse.org/lifecycle/#experimental)
[![Travis build
status](https://travis-ci.org/dfalbel/torch.svg?branch=master)](https://travis-ci.org/dfalbel/torch)
[![Coverage
status](https://codecov.io/gh/dfalbel/torch/branch/master/graph/badge.svg)](https://codecov.io/github/dfalbel/torch?branch=master)

torch from R\!

> A proof of concept for calling libtorch functions from R. API will
> change\! Use at your own risk. Most libtorch’s functionality is not
> implemented here too.

## Installation

Before installing you should install [libtorch](https://pytorch.org/).
Usually it makes sense to install `libtorch` to `/usr/local/lib`.
However you can install it to any place and later provide location to R
by setting `TORCH_HOME` environment variable (see examples
below).

### CPU

**Linux**

``` sh
wget https://download.pytorch.org/libtorch/cpu/libtorch-shared-with-deps-latest.zip
sudo unzip libtorch-shared-with-deps-latest.zip -d /usr/local/lib/
```

**OS X**

``` sh
https://download.pytorch.org/libtorch/cpu/libtorch-macos-latest.zip
sudo unzip libtorch-macos-latest.zip -d /usr/local/lib/
```

After that you can install set `TORCH_HOME` environment variable and
install `torch` package:

``` r
Sys.setenv("TORCH_HOME" = "/usr/local/lib/libtorch")
devtools::install_github("dfalbel/torch")
```

### GPU

On Linux you can also install `torch` with **CUDA 9.0** support (still
very initial stage)

**Install CUDA 9.0**

  - [follow these
    instructions](https://docs.nvidia.com/cuda/cuda-installation-guide-linux/index.html)
    and add necessary repositories
  - install **cuda-9-0** - `sudo apt-get install cuda-9-0`

**Install
libtorch**

``` sh
wget https://download.pytorch.org/libtorch/cu90/libtorch-shared-with-deps-latest.zip
sudo unzip libtorch-shared-with-deps-latest.zip -d /usr/local/lib/
```

**Install torch package**

Define `TORCH_BACKEND_CUDA`, `TORCH_HOME` environment variables and
install pkg:

``` r
Sys.setenv("TORCH_BACKEND_CUDA" = "YES")
Sys.setenv("TORCH_HOME" = "/usr/local/lib/libtorch")
devtools::install_github("dfalbel/torch")
```

## Example

Currently this package is only a prrof of concept and you can only
create a Torch Tensor from an R object. And then convert back from a
torch Tensor to an R object.

``` r
library(torch)
x <- array(runif(8), dim = c(2, 2, 2))
y <- tensor(x)
y
#> tensor 
#> (1,.,.) = 
#>   0.9616  0.4001
#>   0.5802  0.8311
#> 
#> (2,.,.) = 
#>   0.2459  0.1404
#>   0.2681  0.5861
#> [ Variable[CPUDoubleType]{2,2,2} ]
identical(x, as.array(y))
#> [1] TRUE
```

### Simple Autograd Example

In the following snippet we let torch, using the autograd feature,
calculate the derivatives:

``` r
x <- tensor(1, requires_grad = TRUE)
w <- tensor(2, requires_grad = TRUE)
b <- tensor(3, requires_grad = TRUE)

y <- w * x + b
y$backward()

x$grad
#> tensor 
#>  2
#> [ Variable[CPUDoubleType]{1} ]
w$grad
#> tensor 
#>  1
#> [ Variable[CPUDoubleType]{1} ]
b$grad
#> tensor 
#>  1
#> [ Variable[CPUDoubleType]{1} ]
```

### Linear Regression

In the following example we are going to fit a linear regression from
scratch using torch’s Autograd.

**Note** all methods that end with `_` (eg. `sub_`), will modify the
tensors in place.

``` r
x <- matrix(runif(100), ncol = 2)
y <- matrix(0.1 + 0.5 * x[,1] - 0.7 * x[,2], ncol = 1)

x_t <- tensor(x)
y_t <- tensor(y)

w <- tensor(matrix(rnorm(2), nrow = 2), requires_grad = TRUE)
b <- tensor(0, requires_grad = TRUE)

lr <- 0.5

for (i in 1:100) {
  y_hat <- tch_mm(x_t, w) + b
  loss <- tch_mean((y_t - y_hat)^2)
  
  loss$backward()
  
  with_no_grad({
    w$sub_(w$grad*lr)
    b$sub_(b$grad*lr)   
  })
  
  w$grad$zero_()
  b$grad$zero_()
}

print(w)
#> tensor 
#>  0.4957
#> -0.7022
#> [ Variable[CPUDoubleType]{2,1} ]
print(b)
#> tensor 
#>  0.1039
#> [ Variable[CPUDoubleType]{1} ]
```
