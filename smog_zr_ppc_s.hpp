
// Code generated by stanc v2.29.0
#include <stan/model/model_header.hpp>
namespace smog_zr_ppc_s_model_namespace {

using stan::model::model_base_crtp;
using namespace stan::math;


stan::math::profile_map profiles__;
static constexpr std::array<const char*, 15> locations_array__ = 
{" (found before start of program)",
 " (in '/home/projekt/DA_projectv1500/DA_project/smog_zr_ppc_s.stan', line 3, column 2 to column 33)",
 " (in '/home/projekt/DA_projectv1500/DA_project/smog_zr_ppc_s.stan', line 4, column 2 to column 36)",
 " (in '/home/projekt/DA_projectv1500/DA_project/smog_zr_ppc_s.stan', line 5, column 2 to column 34)",
 " (in '/home/projekt/DA_projectv1500/DA_project/smog_zr_ppc_s.stan', line 6, column 2 to column 32)",
 " (in '/home/projekt/DA_projectv1500/DA_project/smog_zr_ppc_s.stan', line 7, column 2 to column 32)",
 " (in '/home/projekt/DA_projectv1500/DA_project/smog_zr_ppc_s.stan', line 8, column 2 to column 31)",
 " (in '/home/projekt/DA_projectv1500/DA_project/smog_zr_ppc_s.stan', line 9, column 2 to column 41)",
 " (in '/home/projekt/DA_projectv1500/DA_project/smog_zr_ppc_s.stan', line 11, column 2 to column 38)",
 " (in '/home/projekt/DA_projectv1500/DA_project/smog_zr_ppc_s.stan', line 12, column 2 to column 57)",
 " (in '/home/projekt/DA_projectv1500/DA_project/smog_zr_ppc_s.stan', line 13, column 2 to column 60)",
 " (in '/home/projekt/DA_projectv1500/DA_project/smog_zr_ppc_s.stan', line 14, column 2 to column 54)",
 " (in '/home/projekt/DA_projectv1500/DA_project/smog_zr_ppc_s.stan', line 16, column 2 to column 32)",
 " (in '/home/projekt/DA_projectv1500/DA_project/smog_zr_ppc_s.stan', line 18, column 2 to column 121)",
 " (in '/home/projekt/DA_projectv1500/DA_project/smog_zr_ppc_s.stan', line 19, column 2 to column 44)"};




class smog_zr_ppc_s_model final : public model_base_crtp<smog_zr_ppc_s_model> {

 private:
   
  
 
 public:
  ~smog_zr_ppc_s_model() { }
  
  inline std::string model_name() const final { return "smog_zr_ppc_s_model"; }

  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 v2.29.0", "stancflags = "};
  }
  
  
  smog_zr_ppc_s_model(stan::io::var_context& context__,
                      unsigned int random_seed__ = 0,
                      std::ostream* pstream__ = nullptr) : model_base_crtp(0) {
    int current_statement__ = 0;
    using local_scalar_t__ = double ;
    boost::ecuyer1988 base_rng__ = 
        stan::services::util::create_rng(random_seed__, 0);
    (void) base_rng__;  // suppress unused var warning
    static constexpr const char* function__ = "smog_zr_ppc_s_model_namespace::smog_zr_ppc_s_model";
    (void) function__;  // suppress unused var warning
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    num_params_r__ = 0U;
    
  }
  
  template <bool propto__, bool jacobian__ , typename VecR, typename VecI, 
  stan::require_vector_like_t<VecR>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr> 
  inline stan::scalar_type_t<VecR> log_prob_impl(VecR& params_r__,
                                                 VecI& params_i__,
                                                 std::ostream* pstream__ = nullptr) const {
    using T__ = stan::scalar_type_t<VecR>;
    using local_scalar_t__ = T__;
    T__ lp__(0.0);
    stan::math::accumulator<T__> lp_accum__;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    static constexpr const char* function__ = "smog_zr_ppc_s_model_namespace::log_prob";
    (void) function__;  // suppress unused var warning
    
    try {
      
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    lp_accum__.add(lp__);
    return lp_accum__.sum();
    } // log_prob_impl() 
    
  template <typename RNG, typename VecR, typename VecI, typename VecVar, 
  stan::require_vector_like_vt<std::is_floating_point, VecR>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr, 
  stan::require_std_vector_vt<std::is_floating_point, VecVar>* = nullptr> 
  inline void write_array_impl(RNG& base_rng__, VecR& params_r__,
                               VecI& params_i__, VecVar& vars__,
                               const bool emit_transformed_parameters__ = true,
                               const bool emit_generated_quantities__ = true,
                               std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    static constexpr bool propto__ = true;
    (void) propto__;
    double lp__ = 0.0;
    (void) lp__;  // dummy to suppress unused var warning
    int current_statement__ = 0; 
    stan::math::accumulator<double> lp_accum__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    constexpr bool jacobian__ = false;
    (void) DUMMY_VAR__;  // suppress unused var warning
    static constexpr const char* function__ = "smog_zr_ppc_s_model_namespace::write_array";
    (void) function__;  // suppress unused var warning
    
    try {
      if (stan::math::logical_negation((stan::math::primitive_value(
            emit_transformed_parameters__) || stan::math::primitive_value(
            emit_generated_quantities__)))) {
        return ;
      } 
      if (stan::math::logical_negation(emit_generated_quantities__)) {
        return ;
      } 
      double alpha = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 1;
      alpha = stan::math::normal_rng(50, 2, base_rng__);
      double beta_temp = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 2;
      beta_temp = stan::math::normal_rng(0, 1, base_rng__);
      double beta_ws = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 3;
      beta_ws = stan::math::normal_rng(0, 1, base_rng__);
      double d_pp = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 4;
      d_pp = stan::math::normal_rng(-9, 1, base_rng__);
      double d_hs = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 5;
      d_hs = stan::math::normal_rng(13, 1, base_rng__);
      double d_wn = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 6;
      d_wn = stan::math::normal_rng(1, 2, base_rng__);
      double sigma = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 7;
      sigma = stan::math::normal_rng(1, 1, base_rng__);
      double windspeed = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 8;
      windspeed = stan::math::normal_rng(20, 10, base_rng__);
      int precipprob = std::numeric_limits<int>::min();
      current_statement__ = 9;
      precipprob = stan::math::bernoulli_rng(0.67, base_rng__);
      int heating_sezon = std::numeric_limits<int>::min();
      current_statement__ = 10;
      heating_sezon = stan::math::bernoulli_rng(0.62, base_rng__);
      int weekend = std::numeric_limits<int>::min();
      current_statement__ = 11;
      weekend = stan::math::bernoulli_rng(0.14, base_rng__);
      double temp = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 12;
      temp = stan::math::normal_rng(10, 8, base_rng__);
      double mean = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 13;
      mean = (((((alpha + (beta_temp * temp)) + (beta_ws * windspeed)) +
                 (d_pp * precipprob)) + (d_hs * heating_sezon)) +
               (d_wn * weekend));
      double smog = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 14;
      smog = stan::math::student_t_rng(1, mean, sigma, base_rng__);
      current_statement__ = 7;
      stan::math::check_greater_or_equal(function__, "sigma", sigma, 0);
      current_statement__ = 9;
      stan::math::check_greater_or_equal(function__, "precipprob",
                                            precipprob, 0);
      current_statement__ = 9;
      stan::math::check_less_or_equal(function__, "precipprob", precipprob, 1);
      current_statement__ = 10;
      stan::math::check_greater_or_equal(function__, "heating_sezon",
                                            heating_sezon, 0);
      current_statement__ = 10;
      stan::math::check_less_or_equal(function__, "heating_sezon",
                                         heating_sezon, 1);
      current_statement__ = 11;
      stan::math::check_greater_or_equal(function__, "weekend", weekend, 0);
      current_statement__ = 11;
      stan::math::check_less_or_equal(function__, "weekend", weekend, 1);
      out__.write(alpha);
      out__.write(beta_temp);
      out__.write(beta_ws);
      out__.write(d_pp);
      out__.write(d_hs);
      out__.write(d_wn);
      out__.write(sigma);
      out__.write(windspeed);
      out__.write(precipprob);
      out__.write(heating_sezon);
      out__.write(weekend);
      out__.write(temp);
      out__.write(mean);
      out__.write(smog);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    } // write_array_impl() 
    
  template <typename VecVar, typename VecI, 
  stan::require_std_vector_t<VecVar>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr> 
  inline void transform_inits_impl(VecVar& params_r__, VecI& params_i__,
                                   VecVar& vars__,
                                   std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    } // transform_inits_impl() 
    
  inline void get_param_names(std::vector<std::string>& names__) const {
    
    names__ = std::vector<std::string>{"alpha", "beta_temp", "beta_ws",
      "d_pp", "d_hs", "d_wn", "sigma", "windspeed", "precipprob",
      "heating_sezon", "weekend", "temp", "mean", "smog"};
    
    } // get_param_names() 
    
  inline void get_dims(std::vector<std::vector<size_t>>& dimss__) const {
    
    dimss__ = std::vector<std::vector<size_t>>{std::vector<size_t>{},
      std::vector<size_t>{}, std::vector<size_t>{}, std::vector<size_t>{
      }, std::vector<size_t>{}, std::vector<size_t>{}, std::vector<size_t>{
      }, std::vector<size_t>{}, std::vector<size_t>{}, std::vector<size_t>{
      }, std::vector<size_t>{}, std::vector<size_t>{}, std::vector<size_t>{
      }, std::vector<size_t>{}};
    
    } // get_dims() 
    
  inline void constrained_param_names(
                                      std::vector<std::string>& param_names__,
                                      bool emit_transformed_parameters__ = true,
                                      bool emit_generated_quantities__ = true) const
    final {
    
    
    if (emit_transformed_parameters__) {
      
    }
    
    if (emit_generated_quantities__) {
      param_names__.emplace_back(std::string() + "alpha");
      param_names__.emplace_back(std::string() + "beta_temp");
      param_names__.emplace_back(std::string() + "beta_ws");
      param_names__.emplace_back(std::string() + "d_pp");
      param_names__.emplace_back(std::string() + "d_hs");
      param_names__.emplace_back(std::string() + "d_wn");
      param_names__.emplace_back(std::string() + "sigma");
      param_names__.emplace_back(std::string() + "windspeed");
      param_names__.emplace_back(std::string() + "precipprob");
      param_names__.emplace_back(std::string() + "heating_sezon");
      param_names__.emplace_back(std::string() + "weekend");
      param_names__.emplace_back(std::string() + "temp");
      param_names__.emplace_back(std::string() + "mean");
      param_names__.emplace_back(std::string() + "smog");
    }
    
    } // constrained_param_names() 
    
  inline void unconstrained_param_names(
                                        std::vector<std::string>& param_names__,
                                        bool emit_transformed_parameters__ = true,
                                        bool emit_generated_quantities__ = true) const
    final {
    
    
    if (emit_transformed_parameters__) {
      
    }
    
    if (emit_generated_quantities__) {
      param_names__.emplace_back(std::string() + "alpha");
      param_names__.emplace_back(std::string() + "beta_temp");
      param_names__.emplace_back(std::string() + "beta_ws");
      param_names__.emplace_back(std::string() + "d_pp");
      param_names__.emplace_back(std::string() + "d_hs");
      param_names__.emplace_back(std::string() + "d_wn");
      param_names__.emplace_back(std::string() + "sigma");
      param_names__.emplace_back(std::string() + "windspeed");
      param_names__.emplace_back(std::string() + "precipprob");
      param_names__.emplace_back(std::string() + "heating_sezon");
      param_names__.emplace_back(std::string() + "weekend");
      param_names__.emplace_back(std::string() + "temp");
      param_names__.emplace_back(std::string() + "mean");
      param_names__.emplace_back(std::string() + "smog");
    }
    
    } // unconstrained_param_names() 
    
  inline std::string get_constrained_sizedtypes() const {
    
    return std::string("[{\"name\":\"alpha\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"},{\"name\":\"beta_temp\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"},{\"name\":\"beta_ws\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"},{\"name\":\"d_pp\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"},{\"name\":\"d_hs\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"},{\"name\":\"d_wn\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"},{\"name\":\"sigma\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"},{\"name\":\"windspeed\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"},{\"name\":\"precipprob\",\"type\":{\"name\":\"int\"},\"block\":\"generated_quantities\"},{\"name\":\"heating_sezon\",\"type\":{\"name\":\"int\"},\"block\":\"generated_quantities\"},{\"name\":\"weekend\",\"type\":{\"name\":\"int\"},\"block\":\"generated_quantities\"},{\"name\":\"temp\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"},{\"name\":\"mean\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"},{\"name\":\"smog\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"}]");
    
    } // get_constrained_sizedtypes() 
    
  inline std::string get_unconstrained_sizedtypes() const {
    
    return std::string("[{\"name\":\"alpha\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"},{\"name\":\"beta_temp\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"},{\"name\":\"beta_ws\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"},{\"name\":\"d_pp\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"},{\"name\":\"d_hs\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"},{\"name\":\"d_wn\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"},{\"name\":\"sigma\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"},{\"name\":\"windspeed\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"},{\"name\":\"precipprob\",\"type\":{\"name\":\"int\"},\"block\":\"generated_quantities\"},{\"name\":\"heating_sezon\",\"type\":{\"name\":\"int\"},\"block\":\"generated_quantities\"},{\"name\":\"weekend\",\"type\":{\"name\":\"int\"},\"block\":\"generated_quantities\"},{\"name\":\"temp\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"},{\"name\":\"mean\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"},{\"name\":\"smog\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"}]");
    
    } // get_unconstrained_sizedtypes() 
    
  
    // Begin method overload boilerplate
    template <typename RNG>
    inline void write_array(RNG& base_rng,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                            const bool emit_transformed_parameters = true,
                            const bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      const size_t num_params__ = 0;
      const size_t num_transformed = 0;
      const size_t num_gen_quantities = 
  (((((((((((((1 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)
    + 1);
      std::vector<double> vars_vec(num_params__
       + (emit_transformed_parameters * num_transformed)
       + (emit_generated_quantities * num_gen_quantities));
      std::vector<int> params_i;
      write_array_impl(base_rng, params_r, params_i, vars_vec,
          emit_transformed_parameters, emit_generated_quantities, pstream);
      vars = Eigen::Map<Eigen::Matrix<double,Eigen::Dynamic,1>>(
        vars_vec.data(), vars_vec.size());
    }

    template <typename RNG>
    inline void write_array(RNG& base_rng, std::vector<double>& params_r,
                            std::vector<int>& params_i,
                            std::vector<double>& vars,
                            bool emit_transformed_parameters = true,
                            bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      const size_t num_params__ = 0;
      const size_t num_transformed = 0;
      const size_t num_gen_quantities = 
  (((((((((((((1 + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1)
    + 1);
      vars.resize(num_params__
        + (emit_transformed_parameters * num_transformed)
        + (emit_generated_quantities * num_gen_quantities));
      write_array_impl(base_rng, params_r, params_i, vars, emit_transformed_parameters, emit_generated_quantities, pstream);
    }

    template <bool propto__, bool jacobian__, typename T_>
    inline T_ log_prob(Eigen::Matrix<T_,Eigen::Dynamic,1>& params_r,
                       std::ostream* pstream = nullptr) const {
      Eigen::Matrix<int, -1, 1> params_i;
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }

    template <bool propto__, bool jacobian__, typename T__>
    inline T__ log_prob(std::vector<T__>& params_r,
                        std::vector<int>& params_i,
                        std::ostream* pstream = nullptr) const {
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }


    inline void transform_inits(const stan::io::var_context& context,
                         Eigen::Matrix<double, Eigen::Dynamic, 1>& params_r,
                         std::ostream* pstream = nullptr) const final {
      std::vector<double> params_r_vec(params_r.size());
      std::vector<int> params_i;
      transform_inits(context, params_i, params_r_vec, pstream);
      params_r = Eigen::Map<Eigen::Matrix<double,Eigen::Dynamic,1>>(
        params_r_vec.data(), params_r_vec.size());
    }

  inline void transform_inits(const stan::io::var_context& context,
                              std::vector<int>& params_i,
                              std::vector<double>& vars,
                              std::ostream* pstream__ = nullptr) const {
     constexpr std::array<const char*, 0> names__{};
      const std::array<Eigen::Index, 0> constrain_param_sizes__{};
      const auto num_constrained_params__ = std::accumulate(
        constrain_param_sizes__.begin(), constrain_param_sizes__.end(), 0);
    
     std::vector<double> params_r_flat__(num_constrained_params__);
     Eigen::Index size_iter__ = 0;
     Eigen::Index flat_iter__ = 0;
     for (auto&& param_name__ : names__) {
       const auto param_vec__ = context.vals_r(param_name__);
       for (Eigen::Index i = 0; i < constrain_param_sizes__[size_iter__]; ++i) {
         params_r_flat__[flat_iter__] = param_vec__[i];
         ++flat_iter__;
       }
       ++size_iter__;
     }
     vars.resize(num_params_r__);
     transform_inits_impl(params_r_flat__, params_i, vars, pstream__);
    } // transform_inits() 
    
};
}
using stan_model = smog_zr_ppc_s_model_namespace::smog_zr_ppc_s_model;

#ifndef USING_R

// Boilerplate
stan::model::model_base& new_model(
        stan::io::var_context& data_context,
        unsigned int seed,
        std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}

stan::math::profile_map& get_stan_profile_data() {
  return smog_zr_ppc_s_model_namespace::profiles__;
}

#endif


