// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// minFlow
std::vector<int> minFlow(std::vector<int> node_supplies, std::vector<int> arc_src, std::vector<int> arc_targ, std::vector<int> arc_costs, std::vector<int> arc_capacities);
RcppExport SEXP _minCostFlow_minFlow(SEXP node_suppliesSEXP, SEXP arc_srcSEXP, SEXP arc_targSEXP, SEXP arc_costsSEXP, SEXP arc_capacitiesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<int> >::type node_supplies(node_suppliesSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type arc_src(arc_srcSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type arc_targ(arc_targSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type arc_costs(arc_costsSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type arc_capacities(arc_capacitiesSEXP);
    rcpp_result_gen = Rcpp::wrap(minFlow(node_supplies, arc_src, arc_targ, arc_costs, arc_capacities));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_minCostFlow_minFlow", (DL_FUNC) &_minCostFlow_minFlow, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_minCostFlow(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}