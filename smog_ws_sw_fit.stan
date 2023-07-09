
data {
  int<lower=0> N;  
  vector[N] precipprob;  
  vector[N] pressure;
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
  real alpha_wind;
  real beta_wind;
  real sigma_wind;
  real wind_speed;
}

transformed parameters {
    vector[N] mu;
    mu = alpha + beta_temp * temp + beta_ws * wind_speed + d_pp * precipprob + d_hs * heating_sezon + d_wn * weekend;
}

model {
  // Priors
  alpha_wind ~ normal(20, 1);
  beta_wind ~ normal(0, 1);
  sigma_wind ~ normal(10, 1);
  alpha ~ normal(30, 2);
  beta_temp ~ normal(0, 1);
  beta_ws ~ normal(0, 1);
  d_pp ~ normal(-6, 1);
  d_hs ~ normal(11, 1);
  d_wn ~ normal(2, 2);
  sigma ~ normal(15, 1);

  // Likelihood
  wind_speed ~ normal(alpha_wind + beta_wind * pressure, sigma_wind);
  smog ~ normal(mu, sigma);
}

generated quantities {
    vector[N] smog_hat;
    vector[N] log_lik;
    for (j in 1:N) {
        smog_hat[j] = normal_rng(mu[j], sigma);
        log_lik[j] = normal_lpdf(smog[j]|mu[j],sigma);
    }
}
