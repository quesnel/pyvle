/**
 * @file        wrapper.cpp
 * @author      The VLE Development Team.
 * @brief       Python wrapper of VLE
 */

/*
 * VLE Environment - the multimodeling and simulation environment
 * This file is a part of the VLE environment (http://vle.univ-littoral.fr)
 * Copyright (C) 2003 - 2008 The VLE Development Team
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "pyvle.hpp"
#include <boost/python.hpp>

using namespace boost::python;

BOOST_PYTHON_MODULE(libpyvle)
{
    class_<vle::vpz::Vpz>("Vpz");

    def("open", pyvle_open, return_value_policy<manage_new_object>());
    def("delete", pyvle_delete);
    def("run", pyvle_run);
    def("run_matrix", pyvle_run_matrix);
    def("manager", pyvle_manager);
    def("manager_matrix", pyvle_manager_matrix);
    def("manager_thread", pyvle_manager_thread);
    def("manager_thread_matrix", pyvle_manager_thread_matrix);
    def("manager_cluster", pyvle_manager_cluster);
    def("manager_cluster_matrix", pyvle_manager_cluster_matrix);
    def("condition_list", pyvle_condition_list);
    def("condition_size", pyvle_condition_size);
    def("condition_port_list_size", pyvle_condition_port_list_size);
    def("condition_port_list", pyvle_condition_port_list);
    def("condition_clear", pyvle_condition_clear);
    def("condition_add_real", pyvle_condition_add_real);
    def("condition_add_integer", pyvle_condition_add_integer);    
    def("experiment_set_duration", pyvle_experiment_set_duration);
    def("experiment_get_duration", pyvle_experiment_get_duration);
    def("save", pyvle_save);
}