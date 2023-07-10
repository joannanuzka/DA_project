
// Code generated by stanc v2.29.0
#include <stan/model/model_header.hpp>
namespace smog_bw_fit_s_model_namespace {

using stan::model::model_base_crtp;
using namespace stan::math;


stan::math::profile_map profiles__;
static constexpr std::array<const char*, 40> locations_array__ = 
{" (found before start of program)",
 " (in '/home/DA_project/smog_bw_fit_s.stan', line 13, column 2 to column 13)",
 " (in '/home/DA_project/smog_bw_fit_s.stan', line 14, column 2 to column 17)",
 " (in '/home/DA_project/smog_bw_fit_s.stan', line 15, column 2 to column 15)",
 " (in '/home/DA_project/smog_bw_fit_s.stan', line 16, column 2 to column 12)",
 " (in '/home/DA_project/smog_bw_fit_s.stan', line 17, column 2 to column 12)",
 " (in '/home/DA_project/smog_bw_fit_s.stan', line 18, column 2 to column 12)",
 " (in '/home/DA_project/smog_bw_fit_s.stan', line 19, column 2 to column 22)",
 " (in '/home/DA_project/smog_bw_fit_s.stan', line 23, column 4 to column 17)",
 " (in '/home/DA_project/smog_bw_fit_s.stan', line 24, column 4 to column 117)",
 " (in '/home/DA_project/smog_bw_fit_s.stan', line 42, column 4 to column 23)",
 " (in '/home/DA_project/smog_bw_fit_s.stan', line 43, column 4 to column 22)",
 " (in '/home/DA_project/smog_bw_fit_s.stan', line 45, column 8 to column 53)",
 " (in '/home/DA_project/smog_bw_fit_s.stan', line 46, column 8 to column 61)",
 " (in '/home/DA_project/smog_bw_fit_s.stan', line 44, column 19 to line 47, column 5)",
 " (in '/home/DA_project/smog_bw_fit_s.stan', line 44, column 4 to line 47, column 5)",
 " (in '/home/DA_project/smog_bw_fit_s.stan', line 29, column 2 to column 24)",
 " (in '/home/DA_project/smog_bw_fit_s.stan', line 30, column 2 to column 27)",
 " (in '/home/DA_project/smog_bw_fit_s.stan', line 31, column 2 to column 25)",
 " (in '/home/DA_project/smog_bw_fit_s.stan', line 32, column 2 to column 24)",
 " (in '/home/DA_project/smog_bw_fit_s.stan', line 33, column 2 to column 23)",
 " (in '/home/DA_project/smog_bw_fit_s.stan', line 34, column 2 to column 23)",
 " (in '/home/DA_project/smog_bw_fit_s.stan', line 35, column 2 to column 24)",
 " (in '/home/DA_project/smog_bw_fit_s.stan', line 38, column 2 to column 33)",
 " (in '/home/DA_project/smog_bw_fit_s.stan', line 3, column 2 to column 17)",
 " (in '/home/DA_project/smog_bw_fit_s.stan', line 4, column 9 to column 10)",
 " (in '/home/DA_project/smog_bw_fit_s.stan', line 4, column 2 to column 23)",
 " (in '/home/DA_project/smog_bw_fit_s.stan', line 5, column 9 to column 10)",
 " (in '/home/DA_project/smog_bw_fit_s.stan', line 5, column 2 to column 23)",
 " (in '/home/DA_project/smog_bw_fit_s.stan', line 6, column 9 to column 10)",
 " (in '/home/DA_project/smog_bw_fit_s.stan', line 6, column 2 to column 26)",
 " (in '/home/DA_project/smog_bw_fit_s.stan', line 7, column 9 to column 10)",
 " (in '/home/DA_project/smog_bw_fit_s.stan', line 7, column 2 to column 20)",
 " (in '/home/DA_project/smog_bw_fit_s.stan', line 8, column 9 to column 10)",
 " (in '/home/DA_project/smog_bw_fit_s.stan', line 8, column 2 to column 17)",
 " (in '/home/DA_project/smog_bw_fit_s.stan', line 9, column 9 to column 10)",
 " (in '/home/DA_project/smog_bw_fit_s.stan', line 9, column 2 to column 17)",
 " (in '/home/DA_project/smog_bw_fit_s.stan', line 23, column 11 to column 12)",
 " (in '/home/DA_project/smog_bw_fit_s.stan', line 42, column 11 to column 12)",
 " (in '/home/DA_project/smog_bw_fit_s.stan', line 43, column 11 to column 12)"};




class smog_bw_fit_s_model final : public model_base_crtp<smog_bw_fit_s_model> {

 private:
  int N;
  Eigen::Matrix<double, -1, 1> precipprob__;
  Eigen::Matrix<double, -1, 1> wind_speed__;
  Eigen::Matrix<double, -1, 1> heating_sezon__;
  Eigen::Matrix<double, -1, 1> weekend__;
  Eigen::Matrix<double, -1, 1> temp__;
  Eigen::Matrix<double, -1, 1> smog__; 
  Eigen::Map<Eigen::Matrix<double, -1, 1>> precipprob{nullptr, 0};
  Eigen::Map<Eigen::Matrix<double, -1, 1>> wind_speed{nullptr, 0};
  Eigen::Map<Eigen::Matrix<double, -1, 1>> heating_sezon{nullptr, 0};
  Eigen::Map<Eigen::Matrix<double, -1, 1>> weekend{nullptr, 0};
  Eigen::Map<Eigen::Matrix<double, -1, 1>> temp{nullptr, 0};
  Eigen::Map<Eigen::Matrix<double, -1, 1>> smog{nullptr, 0};
 
 public:
  ~smog_bw_fit_s_model() { }
  
  inline std::string model_name() const final { return "smog_bw_fit_s_model"; }

  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 v2.29.0", "stancflags = "};
  }
  
  
  smog_bw_fit_s_model(stan::io::var_context& context__,
                      unsigned int random_seed__ = 0,
                      std::ostream* pstream__ = nullptr) : model_base_crtp(0) {
    int current_statement__ = 0;
    using local_scalar_t__ = double ;
    boost::ecuyer1988 base_rng__ = 
        stan::services::util::create_rng(random_seed__, 0);
    (void) base_rng__;  // suppress unused var warning
    static constexpr const char* function__ = "smog_bw_fit_s_model_namespace::smog_bw_fit_s_model";
    (void) function__;  // suppress unused var warning
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      current_statement__ = 24;
      context__.validate_dims("data initialization","N","int",
           std::vector<size_t>{});
      N = std::numeric_limits<int>::min();
      
      
      current_statement__ = 24;
      N = context__.vals_i("N")[(1 - 1)];
      current_statement__ = 24;
      stan::math::check_greater_or_equal(function__, "N", N, 0);
      current_statement__ = 25;
      stan::math::validate_non_negative_index("precipprob", "N", N);
      current_statement__ = 26;
      context__.validate_dims("data initialization","precipprob","double",
           std::vector<size_t>{static_cast<size_t>(N)});
      precipprob__ = 
        Eigen::Matrix<double, -1, 1>::Constant(N,
          std::numeric_limits<double>::quiet_NaN());
      new (&precipprob) Eigen::Map<Eigen::Matrix<double, -1, 1>>(precipprob__.data(), N);
        
      
      {
        std::vector<local_scalar_t__> precipprob_flat__;
        current_statement__ = 26;
        precipprob_flat__ = context__.vals_r("precipprob");
        current_statement__ = 26;
        pos__ = 1;
        current_statement__ = 26;
        for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
          current_statement__ = 26;
          stan::model::assign(precipprob, precipprob_flat__[(pos__ - 1)],
            "assigning variable precipprob", stan::model::index_uni(sym1__));
          current_statement__ = 26;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 27;
      stan::math::validate_non_negative_index("wind_speed", "N", N);
      current_statement__ = 28;
      context__.validate_dims("data initialization","wind_speed","double",
           std::vector<size_t>{static_cast<size_t>(N)});
      wind_speed__ = 
        Eigen::Matrix<double, -1, 1>::Constant(N,
          std::numeric_limits<double>::quiet_NaN());
      new (&wind_speed) Eigen::Map<Eigen::Matrix<double, -1, 1>>(wind_speed__.data(), N);
        
      
      {
        std::vector<local_scalar_t__> wind_speed_flat__;
        current_statement__ = 28;
        wind_speed_flat__ = context__.vals_r("wind_speed");
        current_statement__ = 28;
        pos__ = 1;
        current_statement__ = 28;
        for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
          current_statement__ = 28;
          stan::model::assign(wind_speed, wind_speed_flat__[(pos__ - 1)],
            "assigning variable wind_speed", stan::model::index_uni(sym1__));
          current_statement__ = 28;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 29;
      stan::math::validate_non_negative_index("heating_sezon", "N", N);
      current_statement__ = 30;
      context__.validate_dims("data initialization","heating_sezon","double",
           std::vector<size_t>{static_cast<size_t>(N)});
      heating_sezon__ = 
        Eigen::Matrix<double, -1, 1>::Constant(N,
          std::numeric_limits<double>::quiet_NaN());
      new (&heating_sezon) Eigen::Map<Eigen::Matrix<double, -1, 1>>(heating_sezon__.data(), N);
        
      
      {
        std::vector<local_scalar_t__> heating_sezon_flat__;
        current_statement__ = 30;
        heating_sezon_flat__ = context__.vals_r("heating_sezon");
        current_statement__ = 30;
        pos__ = 1;
        current_statement__ = 30;
        for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
          current_statement__ = 30;
          stan::model::assign(heating_sezon,
            heating_sezon_flat__[(pos__ - 1)],
            "assigning variable heating_sezon", stan::model::index_uni(sym1__));
          current_statement__ = 30;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 31;
      stan::math::validate_non_negative_index("weekend", "N", N);
      current_statement__ = 32;
      context__.validate_dims("data initialization","weekend","double",
           std::vector<size_t>{static_cast<size_t>(N)});
      weekend__ = 
        Eigen::Matrix<double, -1, 1>::Constant(N,
          std::numeric_limits<double>::quiet_NaN());
      new (&weekend) Eigen::Map<Eigen::Matrix<double, -1, 1>>(weekend__.data(), N);
        
      
      {
        std::vector<local_scalar_t__> weekend_flat__;
        current_statement__ = 32;
        weekend_flat__ = context__.vals_r("weekend");
        current_statement__ = 32;
        pos__ = 1;
        current_statement__ = 32;
        for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
          current_statement__ = 32;
          stan::model::assign(weekend, weekend_flat__[(pos__ - 1)],
            "assigning variable weekend", stan::model::index_uni(sym1__));
          current_statement__ = 32;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 33;
      stan::math::validate_non_negative_index("temp", "N", N);
      current_statement__ = 34;
      context__.validate_dims("data initialization","temp","double",
           std::vector<size_t>{static_cast<size_t>(N)});
      temp__ = 
        Eigen::Matrix<double, -1, 1>::Constant(N,
          std::numeric_limits<double>::quiet_NaN());
      new (&temp) Eigen::Map<Eigen::Matrix<double, -1, 1>>(temp__.data(), N);
      
      {
        std::vector<local_scalar_t__> temp_flat__;
        current_statement__ = 34;
        temp_flat__ = context__.vals_r("temp");
        current_statement__ = 34;
        pos__ = 1;
        current_statement__ = 34;
        for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
          current_statement__ = 34;
          stan::model::assign(temp, temp_flat__[(pos__ - 1)],
            "assigning variable temp", stan::model::index_uni(sym1__));
          current_statement__ = 34;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 35;
      stan::math::validate_non_negative_index("smog", "N", N);
      current_statement__ = 36;
      context__.validate_dims("data initialization","smog","double",
           std::vector<size_t>{static_cast<size_t>(N)});
      smog__ = 
        Eigen::Matrix<double, -1, 1>::Constant(N,
          std::numeric_limits<double>::quiet_NaN());
      new (&smog) Eigen::Map<Eigen::Matrix<double, -1, 1>>(smog__.data(), N);
      
      {
        std::vector<local_scalar_t__> smog_flat__;
        current_statement__ = 36;
        smog_flat__ = context__.vals_r("smog");
        current_statement__ = 36;
        pos__ = 1;
        current_statement__ = 36;
        for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
          current_statement__ = 36;
          stan::model::assign(smog, smog_flat__[(pos__ - 1)],
            "assigning variable smog", stan::model::index_uni(sym1__));
          current_statement__ = 36;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 37;
      stan::math::validate_non_negative_index("mu", "N", N);
      current_statement__ = 38;
      stan::math::validate_non_negative_index("smog_hat", "N", N);
      current_statement__ = 39;
      stan::math::validate_non_negative_index("log_lik", "N", N);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    num_params_r__ = 1 + 1 + 1 + 1 + 1 + 1 + 1;
    
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
    static constexpr const char* function__ = "smog_bw_fit_s_model_namespace::log_prob";
    (void) function__;  // suppress unused var warning
    
    try {
      local_scalar_t__ alpha = DUMMY_VAR__;
      current_statement__ = 1;
      alpha = in__.template read<local_scalar_t__>();
      local_scalar_t__ beta_temp = DUMMY_VAR__;
      current_statement__ = 2;
      beta_temp = in__.template read<local_scalar_t__>();
      local_scalar_t__ beta_ws = DUMMY_VAR__;
      current_statement__ = 3;
      beta_ws = in__.template read<local_scalar_t__>();
      local_scalar_t__ d_pp = DUMMY_VAR__;
      current_statement__ = 4;
      d_pp = in__.template read<local_scalar_t__>();
      local_scalar_t__ d_hs = DUMMY_VAR__;
      current_statement__ = 5;
      d_hs = in__.template read<local_scalar_t__>();
      local_scalar_t__ d_wn = DUMMY_VAR__;
      current_statement__ = 6;
      d_wn = in__.template read<local_scalar_t__>();
      local_scalar_t__ sigma = DUMMY_VAR__;
      current_statement__ = 7;
      sigma = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(
                0, lp__);
      Eigen::Matrix<local_scalar_t__, -1, 1> mu =
         Eigen::Matrix<local_scalar_t__, -1, 1>::Constant(N, DUMMY_VAR__);
      current_statement__ = 9;
      stan::model::assign(mu,
        stan::math::add(
          stan::math::add(
            stan::math::add(
              stan::math::add(
                stan::math::add(alpha, stan::math::multiply(beta_temp, temp)),
                stan::math::multiply(beta_ws, wind_speed)),
              stan::math::multiply(d_pp, precipprob)),
            stan::math::multiply(d_hs, heating_sezon)),
          stan::math::multiply(d_wn, weekend)), "assigning variable mu");
      {
        current_statement__ = 16;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(alpha, 30, 2));
        current_statement__ = 17;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(beta_temp, 0, 1));
        current_statement__ = 18;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(beta_ws, 0, 1));
        current_statement__ = 19;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(d_pp, -12, 1));
        current_statement__ = 20;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(d_hs, 13, 1));
        current_statement__ = 21;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(d_wn, -1, 2));
        current_statement__ = 22;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(sigma, 15, 1));
        current_statement__ = 23;
        lp_accum__.add(
          stan::math::student_t_lpdf<propto__>(smog, 1, mu, sigma));
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
    static constexpr const char* function__ = "smog_bw_fit_s_model_namespace::write_array";
    (void) function__;  // suppress unused var warning
    
    try {
      double alpha = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 1;
      alpha = in__.template read<local_scalar_t__>();
      double beta_temp = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 2;
      beta_temp = in__.template read<local_scalar_t__>();
      double beta_ws = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 3;
      beta_ws = in__.template read<local_scalar_t__>();
      double d_pp = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 4;
      d_pp = in__.template read<local_scalar_t__>();
      double d_hs = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 5;
      d_hs = in__.template read<local_scalar_t__>();
      double d_wn = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 6;
      d_wn = in__.template read<local_scalar_t__>();
      double sigma = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 7;
      sigma = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(
                0, lp__);
      Eigen::Matrix<double, -1, 1> mu =
         Eigen::Matrix<double, -1, 1>::Constant(N,
           std::numeric_limits<double>::quiet_NaN());
      out__.write(alpha);
      out__.write(beta_temp);
      out__.write(beta_ws);
      out__.write(d_pp);
      out__.write(d_hs);
      out__.write(d_wn);
      out__.write(sigma);
      if (stan::math::logical_negation((stan::math::primitive_value(
            emit_transformed_parameters__) || stan::math::primitive_value(
            emit_generated_quantities__)))) {
        return ;
      } 
      current_statement__ = 9;
      stan::model::assign(mu,
        stan::math::add(
          stan::math::add(
            stan::math::add(
              stan::math::add(
                stan::math::add(alpha, stan::math::multiply(beta_temp, temp)),
                stan::math::multiply(beta_ws, wind_speed)),
              stan::math::multiply(d_pp, precipprob)),
            stan::math::multiply(d_hs, heating_sezon)),
          stan::math::multiply(d_wn, weekend)), "assigning variable mu");
      if (emit_transformed_parameters__) {
        out__.write(mu);
      } 
      if (stan::math::logical_negation(emit_generated_quantities__)) {
        return ;
      } 
      Eigen::Matrix<double, -1, 1> smog_hat =
         Eigen::Matrix<double, -1, 1>::Constant(N,
           std::numeric_limits<double>::quiet_NaN());
      Eigen::Matrix<double, -1, 1> log_lik =
         Eigen::Matrix<double, -1, 1>::Constant(N,
           std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 15;
      for (int j = 1; j <= N; ++j) {
        current_statement__ = 12;
        stan::model::assign(smog_hat,
          stan::math::student_t_rng(5,
            stan::model::rvalue(mu, "mu", stan::model::index_uni(j)), sigma,
            base_rng__),
          "assigning variable smog_hat", stan::model::index_uni(j));
        current_statement__ = 13;
        stan::model::assign(log_lik,
          stan::math::student_t_lpdf<false>(
            stan::model::rvalue(smog, "smog", stan::model::index_uni(j)), 5,
            stan::model::rvalue(mu, "mu", stan::model::index_uni(j)), sigma),
          "assigning variable log_lik", stan::model::index_uni(j));
      }
      out__.write(smog_hat);
      out__.write(log_lik);
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
      local_scalar_t__ beta_temp = DUMMY_VAR__;
      beta_temp = in__.read<local_scalar_t__>();
      out__.write(beta_temp);
      local_scalar_t__ beta_ws = DUMMY_VAR__;
      beta_ws = in__.read<local_scalar_t__>();
      out__.write(beta_ws);
      local_scalar_t__ d_pp = DUMMY_VAR__;
      d_pp = in__.read<local_scalar_t__>();
      out__.write(d_pp);
      local_scalar_t__ d_hs = DUMMY_VAR__;
      d_hs = in__.read<local_scalar_t__>();
      out__.write(d_hs);
      local_scalar_t__ d_wn = DUMMY_VAR__;
      d_wn = in__.read<local_scalar_t__>();
      out__.write(d_wn);
      local_scalar_t__ sigma = DUMMY_VAR__;
      sigma = in__.read<local_scalar_t__>();
      out__.write_free_lb(0, sigma);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    } // transform_inits_impl() 
    
  inline void get_param_names(std::vector<std::string>& names__) const {
    
    names__ = std::vector<std::string>{"alpha", "beta_temp", "beta_ws",
      "d_pp", "d_hs", "d_wn", "sigma", "mu", "smog_hat", "log_lik"};
    
    } // get_param_names() 
    
  inline void get_dims(std::vector<std::vector<size_t>>& dimss__) const {
    
    dimss__ = std::vector<std::vector<size_t>>{std::vector<size_t>{},
      std::vector<size_t>{}, std::vector<size_t>{}, std::vector<size_t>{
      }, std::vector<size_t>{}, std::vector<size_t>{}, std::vector<size_t>{
      }, std::vector<size_t>{static_cast<size_t>(N)},
      std::vector<size_t>{static_cast<size_t>(N)},
      std::vector<size_t>{static_cast<size_t>(N)}};
    
    } // get_dims() 
    
  inline void constrained_param_names(
                                      std::vector<std::string>& param_names__,
                                      bool emit_transformed_parameters__ = true,
                                      bool emit_generated_quantities__ = true) const
    final {
    
    param_names__.emplace_back(std::string() + "alpha");
    param_names__.emplace_back(std::string() + "beta_temp");
    param_names__.emplace_back(std::string() + "beta_ws");
    param_names__.emplace_back(std::string() + "d_pp");
    param_names__.emplace_back(std::string() + "d_hs");
    param_names__.emplace_back(std::string() + "d_wn");
    param_names__.emplace_back(std::string() + "sigma");
    if (emit_transformed_parameters__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "mu" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "smog_hat" + '.' + std::to_string(sym1__));
        } 
      }
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "log_lik" + '.' + std::to_string(sym1__));
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
    param_names__.emplace_back(std::string() + "beta_temp");
    param_names__.emplace_back(std::string() + "beta_ws");
    param_names__.emplace_back(std::string() + "d_pp");
    param_names__.emplace_back(std::string() + "d_hs");
    param_names__.emplace_back(std::string() + "d_wn");
    param_names__.emplace_back(std::string() + "sigma");
    if (emit_transformed_parameters__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "mu" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "smog_hat" + '.' + std::to_string(sym1__));
        } 
      }
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "log_lik" + '.' + std::to_string(sym1__));
        } 
      }
    }
    
    } // unconstrained_param_names() 
    
  inline std::string get_constrained_sizedtypes() const {
    
    return std::string("[{\"name\":\"alpha\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"beta_temp\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"beta_ws\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"d_pp\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"d_hs\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"d_wn\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"sigma\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"mu\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(N) + "},\"block\":\"transformed_parameters\"},{\"name\":\"smog_hat\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(N) + "},\"block\":\"generated_quantities\"},{\"name\":\"log_lik\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(N) + "},\"block\":\"generated_quantities\"}]");
    
    } // get_constrained_sizedtypes() 
    
  inline std::string get_unconstrained_sizedtypes() const {
    
    return std::string("[{\"name\":\"alpha\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"beta_temp\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"beta_ws\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"d_pp\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"d_hs\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"d_wn\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"sigma\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"mu\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(N) + "},\"block\":\"transformed_parameters\"},{\"name\":\"smog_hat\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(N) + "},\"block\":\"generated_quantities\"},{\"name\":\"log_lik\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(N) + "},\"block\":\"generated_quantities\"}]");
    
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
  ((((((1 + 1) + 1) + 1) + 1) + 1) + 1);
      const size_t num_transformed = N;
      const size_t num_gen_quantities = 
  (N + N);
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
  ((((((1 + 1) + 1) + 1) + 1) + 1) + 1);
      const size_t num_transformed = N;
      const size_t num_gen_quantities = 
  (N + N);
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
     constexpr std::array<const char*, 7> names__{"alpha", "beta_temp",
      "beta_ws", "d_pp", "d_hs", "d_wn", "sigma"};
      const std::array<Eigen::Index, 7> constrain_param_sizes__{1, 1, 
       1, 1, 1, 1, 1};
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
using stan_model = smog_bw_fit_s_model_namespace::smog_bw_fit_s_model;

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
  return smog_bw_fit_s_model_namespace::profiles__;
}

#endif


