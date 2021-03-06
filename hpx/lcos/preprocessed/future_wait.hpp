//  Copyright (c) 2007-2013 Hartmut Kaiser
//  Copyright (c) 2012-2013 Thomas Heller
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#if !defined(HPX_PREPROCESSED_LCOS_FUTURE_WAIT_HPP)
#define HPX_PREPROCESSED_LCOS_FUTURE_WAIT_HPP

#if HPX_WAIT_ARGUMENT_LIMIT  <= 5
#include <hpx/lcos/preprocessed/future_wait_5.hpp>
#elif HPX_WAIT_ARGUMENT_LIMIT <= 10
#include <hpx/lcos/preprocessed/future_wait_10.hpp>
#elif HPX_WAIT_ARGUMENT_LIMIT <= 15
#include <hpx/lcos/preprocessed/future_wait_15.hpp>
#elif HPX_WAIT_ARGUMENT_LIMIT <= 20
#include <hpx/lcos/preprocessed/future_wait_20.hpp>
/*
#elif HPX_WAIT_ARGUMENT_LIMIT <= 25
#include <hpx/lcos/preprocessed/future_wait_25.hpp>
#elif HPX_WAIT_ARGUMENT_LIMIT <= 30
#include <hpx/lcos/preprocessed/future_wait_30.hpp>
#elif HPX_WAIT_ARGUMENT_LIMIT <= 35
#include <hpx/lcos/preprocessed/future_wait_35.hpp>
#elif HPX_WAIT_ARGUMENT_LIMIT <= 40
#include <hpx/lcos/preprocessed/future_wait_40.hpp>
#elif HPX_WAIT_ARGUMENT_LIMIT <= 45
#include <hpx/lcos/preprocessed/future_wait_45.hpp>
#elif HPX_WAIT_ARGUMENT_LIMIT <= 50
#include <hpx/lcos/preprocessed/future_wait_50.hpp>
*/
#else
#error "HPX_WAIT_ARGUMENT_LIMIT out of bounds for preprocessed headers"
#endif

#endif
