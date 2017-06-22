// -*- c++ -*-
/*
 * Copyright (c) 2010-2012, Jim Bosch
 * All rights reserved.
 *
 * ndarray is distributed under a simple BSD-like license;
 * see the LICENSE file that should be present in the root
 * of the source distribution, or alternately available at:
 * https://github.com/ndarray/ndarray
 */
// THIS FILE IS MACHINE GENERATED BY SCONS. DO NOT EDIT MANUALLY.
#ifndef NDARRAY_EIGEN_BP_AUTO_EigenView_h_INCLUDED
#define NDARRAY_EIGEN_BP_AUTO_EigenView_h_INCLUDED

#include "boost/numpy.hpp"
#include "fertilized/ndarray/eigen/bp/EigenView.h"


namespace boost { namespace python {

template <typename T, int N, int C, typename XprKind_, int Rows_, int Cols_>
struct to_python_value< ndarray::EigenView<T,N,C,XprKind_,Rows_,Cols_> const & > : public detail::builtin_to_python {
    inline PyObject * operator()(ndarray::EigenView<T,N,C,XprKind_,Rows_,Cols_> const & x) const {
        object result = ndarray::ToBoostPython< ndarray::EigenView<T,N,C,XprKind_,Rows_,Cols_> >::apply(x);
        Py_INCREF(result.ptr());
        return result.ptr();
    }
    inline PyTypeObject const * get_pytype() const {
        return converter::object_manager_traits<
            typename ndarray::ToBoostPython< ndarray::EigenView<T,N,C,XprKind_,Rows_,Cols_> >::result_type
        >::get_pytype();
    }
};

template <typename T, int N, int C, typename XprKind_, int Rows_, int Cols_>
struct to_python_value< ndarray::EigenView<T,N,C,XprKind_,Rows_,Cols_> & > : public detail::builtin_to_python {
    inline PyObject * operator()(ndarray::EigenView<T,N,C,XprKind_,Rows_,Cols_> & x) const {
        object result = ndarray::ToBoostPython< ndarray::EigenView<T,N,C,XprKind_,Rows_,Cols_> >::apply(x);
        Py_INCREF(result.ptr());
        return result.ptr();
    }
    inline PyTypeObject const * get_pytype() const {
        return converter::object_manager_traits<
            typename ndarray::ToBoostPython< ndarray::EigenView<T,N,C,XprKind_,Rows_,Cols_> >::result_type
        >::get_pytype();
    }
};

namespace converter {

template <typename T, int N, int C, typename XprKind_, int Rows_, int Cols_>
struct arg_to_python< ndarray::EigenView<T,N,C,XprKind_,Rows_,Cols_> > : public handle<> {
    inline arg_to_python(ndarray::EigenView<T,N,C,XprKind_,Rows_,Cols_> const & v) :
        handle<>(to_python_value<ndarray::EigenView<T,N,C,XprKind_,Rows_,Cols_> const &>()(v)) {}
};

template <typename T, int N, int C, typename XprKind_, int Rows_, int Cols_>
struct arg_rvalue_from_python< ndarray::EigenView<T,N,C,XprKind_,Rows_,Cols_> const & > {
    typedef ndarray::EigenView<T,N,C,XprKind_,Rows_,Cols_> result_type;
    arg_rvalue_from_python(PyObject * p) :
        _converter(boost::python::object(boost::python::handle<>(boost::python::borrowed(p)))) {}
    bool convertible() const { return _converter.convertible(); }
    result_type operator()() const { return _converter(); }
private:
    mutable ndarray::FromBoostPython< ndarray::EigenView<T,N,C,XprKind_,Rows_,Cols_> > _converter;
};

template <typename T, int N, int C, typename XprKind_, int Rows_, int Cols_>
struct arg_rvalue_from_python< ndarray::EigenView<T,N,C,XprKind_,Rows_,Cols_> > : public arg_rvalue_from_python< ndarray::EigenView<T,N,C,XprKind_,Rows_,Cols_> const &> {
    arg_rvalue_from_python(PyObject * p) : arg_rvalue_from_python< ndarray::EigenView<T,N,C,XprKind_,Rows_,Cols_> const & >(p) {}
};

template <typename T, int N, int C, typename XprKind_, int Rows_, int Cols_>
struct arg_rvalue_from_python< ndarray::EigenView<T,N,C,XprKind_,Rows_,Cols_> const > : public arg_rvalue_from_python< ndarray::EigenView<T,N,C,XprKind_,Rows_,Cols_> const &> {
    arg_rvalue_from_python(PyObject * p) : arg_rvalue_from_python< ndarray::EigenView<T,N,C,XprKind_,Rows_,Cols_> const & >(p) {}
};

template <typename T, int N, int C, typename XprKind_, int Rows_, int Cols_>
struct extract_rvalue< ndarray::EigenView<T,N,C,XprKind_,Rows_,Cols_> > : private noncopyable {
    typedef ndarray::EigenView<T,N,C,XprKind_,Rows_,Cols_> result_type;
    extract_rvalue(PyObject * x) : m_converter(x) {}
    bool check() const { return m_converter.convertible(); }
    result_type operator()() const { return m_converter(); }
private:
    arg_rvalue_from_python< result_type const & > m_converter;
};

}}} // namespace boost::python::converter

#endif // !NDARRAY_EIGEN_BP_AUTO_EigenView_h_INCLUDED
