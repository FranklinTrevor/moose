//* This file is part of the MOOSE framework
//* https://www.mooseframework.org
//*
//* All rights reserved, see COPYRIGHT for full restrictions
//* https://github.com/idaholab/moose/blob/master/COPYRIGHT
//*
//* Licensed under LGPL 2.1, please see LICENSE for details
//* https://www.gnu.org/licenses/lgpl-2.1.html
#pragma once
#include "libmesh/libmesh_common.h"
#include "libmesh/point.h"

using namespace libMesh;

struct variables{
    Real R0; //Major radius, m
    Real a; // Minor radius, m
    Real tau; // triangularity
    Real k; // elongation
    Real b;
};

extern variables FNSF;
