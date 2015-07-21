// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// convertToSccs
List convertToSccs(const List& cases, const List& eras, int covariateStart, int covariatePersistencePeriod, int naivePeriod, bool firstOutcomeOnly, bool includeAge, int ageOffset, NumericMatrix ageDesignMatrix);
RcppExport SEXP SelfControlledCaseSeries_convertToSccs(SEXP casesSEXP, SEXP erasSEXP, SEXP covariateStartSEXP, SEXP covariatePersistencePeriodSEXP, SEXP naivePeriodSEXP, SEXP firstOutcomeOnlySEXP, SEXP includeAgeSEXP, SEXP ageOffsetSEXP, SEXP ageDesignMatrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const List& >::type cases(casesSEXP);
    Rcpp::traits::input_parameter< const List& >::type eras(erasSEXP);
    Rcpp::traits::input_parameter< int >::type covariateStart(covariateStartSEXP);
    Rcpp::traits::input_parameter< int >::type covariatePersistencePeriod(covariatePersistencePeriodSEXP);
    Rcpp::traits::input_parameter< int >::type naivePeriod(naivePeriodSEXP);
    Rcpp::traits::input_parameter< bool >::type firstOutcomeOnly(firstOutcomeOnlySEXP);
    Rcpp::traits::input_parameter< bool >::type includeAge(includeAgeSEXP);
    Rcpp::traits::input_parameter< int >::type ageOffset(ageOffsetSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type ageDesignMatrix(ageDesignMatrixSEXP);
    __result = Rcpp::wrap(convertToSccs(cases, eras, covariateStart, covariatePersistencePeriod, naivePeriod, firstOutcomeOnly, includeAge, ageOffset, ageDesignMatrix));
    return __result;
END_RCPP
}
