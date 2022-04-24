#include "cv_np/cv_np_synonyms.h"

#include <pybind11/pybind11.h>


void pydef_cv_np(pybind11::module& m)
{
    m.def("list_types_synonyms", cv_np::list_types_synonyms);
}
