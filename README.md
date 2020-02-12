Hierarchical Integrative Grouped LASSO
======================================

Environmental health studies are increasingly measuring multiple
pollutants to characterize the joint health effects attributable to
exposure mixtures. However, the underlying dose-response relation- ship
between toxicants and health outcomes of interest may be highly
nonlinear, with possible nonlinear interaction effects. Hierarchical
integrative group LASSO (HiGLASSO) is a general shrinkage and selection
framework to identify noteworthy nonlinear main and interaction.
HiGLASSO is broadly applicable for studying potential nonlinear main and
interaction effects in the presence of group structures among a set of
exposures.

Installation
------------

`higlasso` can be installed via Github using `devtools`

    # install.packages("devtools")
    devtools::install_github("umich-cphds/higlasso")

You'll need a working C++11 compiler, which can obtained by installing
Xcode on MacOS, and RTools on Windows. \#\# Example

`higlasso` can be slow, so it may may be beneficial to tweak some its
settings (for example, `nlambda1` and `nlambda2`) to get a handle on how
long the method will take before running the full model.

    library(higlasso)

    X <- as.matrix(higlasso.df[, paste0("V", 1:10)])
    Y <- higlasso.df$Y
    Z <- matrix(1, nrow(X))

    # This can take a bit of time
    cv.fit <- cv.higlasso(Y, X, Z)

Bugs
----

If you encounter a bug, please open an issue on the
[Issues](https://github.com/umich-cphds/higlasso/issues) tab on Github
or send us an email.

Contact
-------

For questions or feedback, please email Jonathan Boss at
<bossjona@umich.edu> or Alexander Rix <alexrix@umich.edu>.

References
----------
