// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// convertToSccs
List convertToSccs(const List& cases, const List& eras, double outcomeId, int naivePeriod, bool firstOutcomeOnly, bool includeAge, int ageOffset, NumericMatrix ageDesignMatrix, bool includeSeason, NumericMatrix seasonDesignMatrix, List& covariateSettingsList, bool eventDependentObservation, List& censorModel);
RcppExport SEXP SelfControlledCaseSeries_convertToSccs(SEXP casesSEXP, SEXP erasSEXP, SEXP outcomeIdSEXP, SEXP naivePeriodSEXP, SEXP firstOutcomeOnlySEXP, SEXP includeAgeSEXP, SEXP ageOffsetSEXP, SEXP ageDesignMatrixSEXP, SEXP includeSeasonSEXP, SEXP seasonDesignMatrixSEXP, SEXP covariateSettingsListSEXP, SEXP eventDependentObservationSEXP, SEXP censorModelSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const List& >::type cases(casesSEXP);
    Rcpp::traits::input_parameter< const List& >::type eras(erasSEXP);
    Rcpp::traits::input_parameter< double >::type outcomeId(outcomeIdSEXP);
    Rcpp::traits::input_parameter< int >::type naivePeriod(naivePeriodSEXP);
    Rcpp::traits::input_parameter< bool >::type firstOutcomeOnly(firstOutcomeOnlySEXP);
    Rcpp::traits::input_parameter< bool >::type includeAge(includeAgeSEXP);
    Rcpp::traits::input_parameter< int >::type ageOffset(ageOffsetSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type ageDesignMatrix(ageDesignMatrixSEXP);
    Rcpp::traits::input_parameter< bool >::type includeSeason(includeSeasonSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type seasonDesignMatrix(seasonDesignMatrixSEXP);
    Rcpp::traits::input_parameter< List& >::type covariateSettingsList(covariateSettingsListSEXP);
    Rcpp::traits::input_parameter< bool >::type eventDependentObservation(eventDependentObservationSEXP);
    Rcpp::traits::input_parameter< List& >::type censorModel(censorModelSEXP);
    __result = Rcpp::wrap(convertToSccs(cases, eras, outcomeId, naivePeriod, firstOutcomeOnly, includeAge, ageOffset, ageDesignMatrix, includeSeason, seasonDesignMatrix, covariateSettingsList, eventDependentObservation, censorModel));
    return __result;
END_RCPP
}
// simulateSccsOutcomes
List simulateSccsOutcomes(const List& cases, const List& eras, const std::vector<double>& baselineRates, const List& eraRrs, bool includeAge, int ageOffset, std::vector<double> ageRrs, bool includeSeasonality, std::vector<double> seasonRrs);
RcppExport SEXP SelfControlledCaseSeries_simulateSccsOutcomes(SEXP casesSEXP, SEXP erasSEXP, SEXP baselineRatesSEXP, SEXP eraRrsSEXP, SEXP includeAgeSEXP, SEXP ageOffsetSEXP, SEXP ageRrsSEXP, SEXP includeSeasonalitySEXP, SEXP seasonRrsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const List& >::type cases(casesSEXP);
    Rcpp::traits::input_parameter< const List& >::type eras(erasSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type baselineRates(baselineRatesSEXP);
    Rcpp::traits::input_parameter< const List& >::type eraRrs(eraRrsSEXP);
    Rcpp::traits::input_parameter< bool >::type includeAge(includeAgeSEXP);
    Rcpp::traits::input_parameter< int >::type ageOffset(ageOffsetSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type ageRrs(ageRrsSEXP);
    Rcpp::traits::input_parameter< bool >::type includeSeasonality(includeSeasonalitySEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type seasonRrs(seasonRrsSEXP);
    __result = Rcpp::wrap(simulateSccsOutcomes(cases, eras, baselineRates, eraRrs, includeAge, ageOffset, ageRrs, includeSeasonality, seasonRrs));
    return __result;
END_RCPP
}
// testEwad
double testEwad(std::vector<double> p, double present, double astart, double aend, double start, double end);
RcppExport SEXP SelfControlledCaseSeries_testEwad(SEXP pSEXP, SEXP presentSEXP, SEXP astartSEXP, SEXP aendSEXP, SEXP startSEXP, SEXP endSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector<double> >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type present(presentSEXP);
    Rcpp::traits::input_parameter< double >::type astart(astartSEXP);
    Rcpp::traits::input_parameter< double >::type aend(aendSEXP);
    Rcpp::traits::input_parameter< double >::type start(startSEXP);
    Rcpp::traits::input_parameter< double >::type end(endSEXP);
    __result = Rcpp::wrap(testEwad(p, present, astart, aend, start, end));
    return __result;
END_RCPP
}
// testEwid
double testEwid(std::vector<double> p, double present, double astart, double aend, double start, double end);
RcppExport SEXP SelfControlledCaseSeries_testEwid(SEXP pSEXP, SEXP presentSEXP, SEXP astartSEXP, SEXP aendSEXP, SEXP startSEXP, SEXP endSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector<double> >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type present(presentSEXP);
    Rcpp::traits::input_parameter< double >::type astart(astartSEXP);
    Rcpp::traits::input_parameter< double >::type aend(aendSEXP);
    Rcpp::traits::input_parameter< double >::type start(startSEXP);
    Rcpp::traits::input_parameter< double >::type end(endSEXP);
    __result = Rcpp::wrap(testEwid(p, present, astart, aend, start, end));
    return __result;
END_RCPP
}
// testEgad
double testEgad(std::vector<double> p, double present, double astart, double aend, double start, double end);
RcppExport SEXP SelfControlledCaseSeries_testEgad(SEXP pSEXP, SEXP presentSEXP, SEXP astartSEXP, SEXP aendSEXP, SEXP startSEXP, SEXP endSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector<double> >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type present(presentSEXP);
    Rcpp::traits::input_parameter< double >::type astart(astartSEXP);
    Rcpp::traits::input_parameter< double >::type aend(aendSEXP);
    Rcpp::traits::input_parameter< double >::type start(startSEXP);
    Rcpp::traits::input_parameter< double >::type end(endSEXP);
    __result = Rcpp::wrap(testEgad(p, present, astart, aend, start, end));
    return __result;
END_RCPP
}
// testEgid
double testEgid(std::vector<double> p, double present, double astart, double aend, double start, double end);
RcppExport SEXP SelfControlledCaseSeries_testEgid(SEXP pSEXP, SEXP presentSEXP, SEXP astartSEXP, SEXP aendSEXP, SEXP startSEXP, SEXP endSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector<double> >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type present(presentSEXP);
    Rcpp::traits::input_parameter< double >::type astart(astartSEXP);
    Rcpp::traits::input_parameter< double >::type aend(aendSEXP);
    Rcpp::traits::input_parameter< double >::type start(startSEXP);
    Rcpp::traits::input_parameter< double >::type end(endSEXP);
    __result = Rcpp::wrap(testEgid(p, present, astart, aend, start, end));
    return __result;
END_RCPP
}
