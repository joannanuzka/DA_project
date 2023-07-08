
// Code generated by stanc v2.29.0
#include <stan/model/model_header.hpp>
namespace wind_speed_fit_model_namespace {

using stan::model::model_base_crtp;
using namespace stan::math;


stan::math::profile_map profiles__;
static constexpr std::array<const char*, 15> locations_array__ = 
{" (found before start of program)",
 " (in '/home/projekt/DA_projectfinal/DA_project/wind_speed_fit.stan', line 9, column 2 to column 13)",
 " (in '/home/projekt/DA_projectfinal/DA_project/wind_speed_fit.stan', line 10, column 2 to column 12)",
 " (in '/home/projekt/DA_projectfinal/DA_project/wind_speed_fit.stan', line 11, column 2 to column 22)",
 " (in '/home/projekt/DA_projectfinal/DA_project/wind_speed_fit.stan', line 25, column 4 to column 72)",
 " (in '/home/projekt/DA_projectfinal/DA_project/wind_speed_fit.stan', line 16, column 2 to column 24)",
 " (in '/home/projekt/DA_projectfinal/DA_project/wind_speed_fit.stan', line 17, column 2 to column 22)",
 " (in '/home/projekt/DA_projectfinal/DA_project/wind_speed_fit.stan', line 18, column 2 to column 24)",
 " (in '/home/projekt/DA_projectfinal/DA_project/wind_speed_fit.stan', line 21, column 2 to column 54)",
 " (in '/home/projekt/DA_projectfinal/DA_project/wind_speed_fit.stan', line 3, column 2 to column 17)",
 " (in '/home/projekt/DA_projectfinal/DA_project/wind_speed_fit.stan', line 4, column 9 to column 10)",
 " (in '/home/projekt/DA_projectfinal/DA_project/wind_speed_fit.stan', line 4, column 2 to column 21)",
 " (in '/home/projekt/DA_projectfinal/DA_project/wind_speed_fit.stan', line 5, column 9 to column 10)",
 " (in '/home/projekt/DA_projectfinal/DA_project/wind_speed_fit.stan', line 5, column 2 to column 23)",
 " (in '/home/projekt/DA_projectfinal/DA_project/wind_speed_fit.stan', line 25, column 24 to column 25)"};




class wind_speed_fit_model final : public model_base_crtp<wind_speed_fit_model> {

 private:
  int N;
  Eigen::Matrix<double, -1, 1> pressure__;
  Eigen::Matrix<double, -1, 1> wind_speed__; 
  Eigen::Map<Eigen::Matrix<double, -1, 1>> pressure{nullptr, 0};
  Eigen::Map<Eigen::Matrix<double, -1, 1>> wind_speed{nullptr, 0};
 
 public:
  ~wind_speed_fit_model() { }
  
  inline std::string model_name() const final { return "wind_speed_fit_model"; }

  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 v2.29.0", "stancflags = "};
  }
  
  
  wind_speed_fit_model(stan::io::var_context& context__,
                       unsigned int random_seed__ = 0,
                       std::ostream* pstream__ = nullptr) : model_base_crtp(0) {
    int current_statement__ = 0;
    using local_scalar_t__ = double ;
    boost::ecuyer1988 base_rng__ = 
        stan::services::util::create_rng(random_seed__, 0);
    (void) base_rng__;  // suppress unused var warning
    static constexpr const char* function__ = "wind_speed_fit_model_namespace::wind_speed_fit_model";
    (void) function__;  // suppress unused var warning
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      current_statement__ = 9;
      context__.validate_dims("data initialization","N","int",
           std::vector<size_t>{});
      N = std::numeric_limits<int>::min();
      
      
      current_statement__ = 9;
      N = context__.vals_i("N")[(1 - 1)];
      current_statement__ = 9;
      stan::math::check_greater_or_equal(function__, "N", N, 0);
      current_statement__ = 10;
      stan::math::validate_non_negative_index("pressure", "N", N);
      current_statement__ = 11;
      context__.validate_dims("data initialization","pressure","double",
           std::vector<size_t>{static_cast<size_t>(N)});
      pressure__ = 
        Eigen::Matrix<double, -1, 1>::Constant(N,
          std::numeric_limits<double>::quiet_NaN());
      new (&pressure) Eigen::Map<Eigen::Matrix<double, -1, 1>>(pressure__.data(), N);
        
      
      {
        std::vector<local_scalar_t__> pressure_flat__;
        current_statement__ = 11;
        pressure_flat__ = context__.vals_r("pressure");
        current_statement__ = 11;
        pos__ = 1;
        current_statement__ = 11;
        for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
          current_statement__ = 11;
          stan::model::assign(pressure, pressure_flat__[(pos__ - 1)],
            "assigning variable pressure", stan::model::index_uni(sym1__));
          current_statement__ = 11;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 12;
      stan::math::validate_non_negative_index("wind_speed", "N", N);
      current_statement__ = 13;
      context__.validate_dims("data initialization","wind_speed","double",
           std::vector<size_t>{static_cast<size_t>(N)});
      wind_speed__ = 
        Eigen::Matrix<double, -1, 1>::Constant(N,
          std::numeric_limits<double>::quiet_NaN());
      new (&wind_speed) Eigen::Map<Eigen::Matrix<double, -1, 1>>(wind_speed__.data(), N);
        
      
      {
        std::vector<local_scalar_t__> wind_speed_flat__;
        current_statement__ = 13;
        wind_speed_flat__ = context__.vals_r("wind_speed");
        current_statement__ = 13;
        pos__ = 1;
        current_statement__ = 13;
        for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
          current_statement__ = 13;
          stan::model::assign(wind_speed, wind_speed_flat__[(pos__ - 1)],
            "assigning variable wind_speed", stan::model::index_uni(sym1__));
          current_statement__ = 13;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 14;
      stan::math::validate_non_negative_index("wind_speed_hat", "N", N);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    num_params_r__ = 1 + 1 + 1;
    
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
    static constexpr const char* function__ = "wind_speed_fit_model_namespace::log_prob";
    (void) function__;  // suppress unused var warning
    
    try {
      local_scalar_t__ alpha = DUMMY_VAR__;
      current_statement__ = 1;
      alpha = in__.template read<local_scalar_t__>();
      local_scalar_t__ beta = DUMMY_VAR__;
      current_statement__ = 2;
      beta = in__.template read<local_scalar_t__>();
      local_scalar_t__ sigma = DUMMY_VAR__;
      current_statement__ = 3;
      sigma = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(
                0, lp__);
      {
        current_statement__ = 5;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(alpha, 20, 1));
        current_statement__ = 6;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(beta, 0, 1));
        current_statement__ = 7;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(sigma, 10, 1));
        current_statement__ = 8;
        lp_accum__.add(
          stan::math::normal_lpdf<propto__>(wind_speed,
            stan::math::add(alpha, stan::math::multiply(beta, pressure)),
            sigma));
      }
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
    static constexpr const char* function__ = "wind_speed_fit_model_namespace::write_array";
    (void) function__;  // suppress unused var warning
    
    try {
      double alpha = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 1;
      alpha = in__.template read<local_scalar_t__>();
      double beta = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 2;
      beta = in__.template read<local_scalar_t__>();
      double sigma = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 3;
      sigma = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(
                0, lp__);
      out__.write(alpha);
      out__.write(beta);
      out__.write(sigma);
      if (stan::math::logical_negation((stan::math::primitive_value(
            emit_transformed_parameters__) || stan::math::primitive_value(
            emit_generated_quantities__)))) {
        return ;
      } 
      if (stan::math::logical_negation(emit_generated_quantities__)) {
        return ;
      } 
      std::vector<double> wind_speed_hat =
         std::vector<double>(N, std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 4;
      stan::model::assign(wind_speed_hat,
        stan::math::normal_rng(
          stan::math::add(alpha, stan::math::multiply(beta, pressure)),
          sigma, base_rng__), "assigning variable wind_speed_hat");
      out__.write(wind_speed_hat);
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
      local_scalar_t__ alpha = DUMMY_VAR__;
      alpha = in__.read<local_scalar_t__>();
      out__.write(alpha);
      local_scalar_t__ beta = DUMMY_VAR__;
      beta = in__.read<local_scalar_t__>();
      out__.write(beta);
      local_scalar_t__ sigma = DUMMY_VAR__;
      sigma = in__.read<local_scalar_t__>();
      out__.write_free_lb(0, sigma);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    } // transform_inits_impl() 
    
  inline void get_param_names(std::vector<std::string>& names__) const {
    
    names__ = std::vector<std::string>{"alpha", "beta", "sigma",
      "wind_speed_hat"};
    
    } // get_param_names() 
    
  inline void get_dims(std::vector<std::vector<size_t>>& dimss__) const {
    
    dimss__ = std::vector<std::vector<size_t>>{std::vector<size_t>{},
      std::vector<size_t>{}, std::vector<size_t>{},
      std::vector<size_t>{static_cast<size_t>(N)}};
    
    } // get_dims() 
    
  inline void constrained_param_names(
                                      std::vector<std::string>& param_names__,
                                      bool emit_transformed_parameters__ = true,
                                      bool emit_generated_quantities__ = true) const
    final {
    
    param_names__.emplace_back(std::string() + "alpha");
    param_names__.emplace_back(std::string() + "beta");
    param_names__.emplace_back(std::string() + "sigma");
    if (emit_transformed_parameters__) {
      
    }
    
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "wind_speed_hat" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    } // constrained_param_names() 
    
  inline void unconstrained_param_names(
                                        std::vector<std::string>& param_names__,
                                        bool emit_transformed_parameters__ = true,
                                        bool emit_generated_quantities__ = true) const
    final {
    
    param_names__.emplace_back(std::string() + "alpha");
    param_names__.emplace_back(std::string() + "beta");
    param_names__.emplace_back(std::string() + "sigma");
    if (emit_transformed_parameters__) {
      
    }
    
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "wind_speed_hat" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    } // unconstrained_param_names() 
    
  inline std::string get_constrained_sizedtypes() const {
    
    return std::string("[{\"name\":\"alpha\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"beta\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"sigma\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"wind_speed_hat\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"generated_quantities\"}]");
    
    } // get_constrained_sizedtypes() 
    
  inline std::string get_unconstrained_sizedtypes() const {
    
    return std::string("[{\"name\":\"alpha\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"beta\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"sigma\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"wind_speed_hat\",\"type\":{\"name\":\"array\",\"length\":" + std::to_string(N) + ",\"element_type\":{\"name\":\"real\"}},\"block\":\"generated_quantities\"}]");
    
    } // get_unconstrained_sizedtypes() 
    
  
    // Begin method overload boilerplate
    template <typename RNG>
    inline void write_array(RNG& base_rng,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                            const bool emit_transformed_parameters = true,
                            const bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      const size_t num_params__ = 
  ((1 + 1) + 1);
      const size_t num_transformed = 0;
      const size_t num_gen_quantities = N;
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
      const size_t num_params__ = 
  ((1 + 1) + 1);
      const size_t num_transformed = 0;
      const size_t num_gen_quantities = N;
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
     constexpr std::array<const char*, 3> names__{"alpha", "beta", "sigma"};
      const std::array<Eigen::Index, 3> constrain_param_sizes__{1, 1, 1};
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
using stan_model = wind_speed_fit_model_namespace::wind_speed_fit_model;

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
  return wind_speed_fit_model_namespace::profiles__;
}

#endif


