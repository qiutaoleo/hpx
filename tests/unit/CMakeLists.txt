# Copyright (c) 2011-2012 Bryce Adelstein-Lelbach
# Copyright (c) 2007-2012 Hartmut Kaiser
#
# Distributed under the Boost Software License, Version 1.0. (See accompanying
# file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

set(subdirs
    agas
    components
    diagnostics
    lcos
    performance_counters
    threads
    traits
    util
   )

if(NOT HPX_HAVE_SECURITY AND SODIUM_FOUND)
    set(subdirs ${subdirs} security)
endif()

foreach(subdir ${subdirs})
  add_hpx_pseudo_target(tests.unit.${subdir})
  add_subdirectory(${subdir})
  add_hpx_pseudo_dependencies(tests.unit tests.unit.${subdir})
endforeach()

