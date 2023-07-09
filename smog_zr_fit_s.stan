
data {
  int<lower=0> N;  
  vector[N] precipprob;  
  vector[N] wind_speed;
  vector[N] heating_sezon;
  vector[N] weekend;
  vector[N] temp;
  vector[N] smog;
}

parameters {
  real alpha;
  real beta_temp;
  real beta_ws;
  real d_pp;
  real d_hs;
  real d_wn;
  real<lower=0> sigma;
}

transformed parameters {
    vector[N] mu;
    mu = alpha + beta_temp * temp + beta_ws * wind_speed + d_pp * precipprob + d_hs * heating_sezon + d_wn * weekend;
}

model {
  // Priors
  alpha ~ normal(50, 2);
  beta_temp ~ normal(0, 1);
  beta_ws ~ normal(0, 1);
  d_pp ~ normal(-9, 1);
  d_hs ~ normal(13, 1);
  d_wn ~ normal(1, 2);
  sigma ~ normal(1, 1);

  // Likelihood
  smog ~ student_t(1, mu, sigma);
}

generated quantities {
    vector[N] smog_hat;
    vector[N] log_lik;
    for (j in 1:N) {
        smog_hat[j] = student_t_rng(1, mu[j], sigma);
        log_lik[j] = student_t_lpdf(smog[j]|1, mu[j], sigma);
    }
}
