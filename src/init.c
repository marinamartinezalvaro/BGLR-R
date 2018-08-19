/*
 This file was autogenerated with the following R routine:
 tools::package_native_routine_registration_skeleton("/home/pperez/BGLR-R")
*/

#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* .C calls */
extern void read_bed_(void *, void *, void *, void *, void *);
extern void write_bed_(void *, void *, void *, void *);

/* .Call calls */
extern SEXP read_ped_(SEXP);
extern SEXP sample_beta(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP sample_beta_BB_BCp(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP sample_beta_BB_BCp_groups(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP sample_beta_groups(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP sample_beta_lower_tri(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);

static const R_CMethodDef CEntries[] = {
    {"read_bed_",  (DL_FUNC) &read_bed_,  5},
    {"write_bed_", (DL_FUNC) &write_bed_, 4},
    {NULL, NULL, 0}
};

static const R_CallMethodDef CallEntries[] = {
    {"read_ped_",                 (DL_FUNC) &read_ped_,                  1},
    {"sample_beta",               (DL_FUNC) &sample_beta,                9},
    {"sample_beta_BB_BCp",        (DL_FUNC) &sample_beta_BB_BCp,        11},
    {"sample_beta_BB_BCp_groups", (DL_FUNC) &sample_beta_BB_BCp_groups, 13},
    {"sample_beta_groups",        (DL_FUNC) &sample_beta_groups,        11},
    {"sample_beta_lower_tri",     (DL_FUNC) &sample_beta_lower_tri,      9},
    {NULL, NULL, 0}
};

void R_init_BGLR(DllInfo *dll)
{
    R_registerRoutines(dll, CEntries, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

