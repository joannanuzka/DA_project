
data {
  int<lower=0> N;  // number of observations
  vector[N] pressure_inv;  // pressure data
  vector[N] humidity;  // wind speed data
}

parameters {
  real alpha;  
  real beta;  
  real gamma;
}

model {
  // Priors
  alpha ~ normal(0.007, 0.0001);
  beta ~ normal(70, 5);
  gamma ~ normal(0.1, 0.05);
  // Likelihood
//   precip ~ bernoulli(alpha * humidity +  beta / pressure + gamma);
}

generated quantities {
    real precip[N] = bernoulli_rng(alpha * humidity +  beta * pressure_inv + gamma);
}
