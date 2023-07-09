
generated quantities {
  real alpha = normal_rng(30, 2);
  real beta_temp = normal_rng(0, 1);
  real beta_ws = normal_rng(0, 1);
  real d_pp = normal_rng(-12, 1);
  real d_hs = normal_rng(13, 1);
  real d_wn = normal_rng(-1, 2);
  real<lower=0> sigma = normal_rng(15, 1);
    
  real windspeed = normal_rng(20, 10);
  int<lower=0, upper=1> precipprob = bernoulli_rng(0.67);
  int<lower=0, upper=1> heating_sezon = bernoulli_rng(0.62);
  int<lower=0, upper=1> weekend = bernoulli_rng(0.14);
  
  real temp = normal_rng(10, 8);
  
  real mean = alpha + beta_temp * temp + beta_ws * windspeed + d_pp * precipprob + d_hs * heating_sezon + d_wn * weekend;
  real smog = normal_rng(mean, sigma);
}
