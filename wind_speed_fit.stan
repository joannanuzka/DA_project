
data {
  int<lower=0> N;  // number of observations
  vector[N] pressure;  // pressure data
  vector[N] wind_speed;  // wind speed data
}

parameters {
  real alpha;  // intercept for wind_speed ~ pressure
  real beta;  // coefficient for pressure
  real<lower=0> sigma;  // standard deviation for wind_speed ~ pressure
}

model {
  // Priors
  alpha ~ normal(20, 1);
  beta ~ normal(0, 1);
  sigma ~ normal(10, 1);

  // Likelihood
  wind_speed ~ normal(alpha + beta * pressure, sigma);
}

generated quantities {
    real wind_speed_hat[N] = normal_rng(alpha + beta * pressure, sigma);
}
