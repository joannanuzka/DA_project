
generated quantities {
  real alpha = normal_rng(20, 1);
  real beta = normal_rng(0, 1);
  real sigma = normal_rng(10, 1);
  real pressure_diff = normal_rng(0, 10);
  real wind_speed = normal_rng(alpha + beta * pressure_diff, sigma);
}
