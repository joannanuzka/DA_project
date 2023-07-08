
generated quantities {
    real alfa = normal_rng(0.007, 0.0001);
    real beta = normal_rng(70, 5);
    real gamma = normal_rng(0.1, 0.05);
    real pressure = normal_rng(1018, 8);
    real humidity = normal_rng(75, 13);
    real precip = bernoulli_rng(alfa * humidity +  beta / pressure + gamma);
}
