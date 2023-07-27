//* This file is part of the MOOSE framework
//* https://www.mooseframework.org
//*
//* All rights reserved, see COPYRIGHT for full restrictions
//* https://github.com/idaholab/moose/blob/master/COPYRIGHT
//*
//* Licensed under LGPL 2.1, please see LICENSE for details
//* https://www.gnu.org/licenses/lgpl-2.1.html

#include "libmesh/libmesh_common.h"
#include "libmesh/point.h"

using namespace libMesh;

extern Real R0;
extern Real a;
extern Real tau;
extern Real k;
extern Real b;
/**
 * Parametric definition of plasma shape (x-z plane cross-section)
 */
Point torus(Real xi, Real R0, Real a, Real tau, Real b);
/**
 * Orthogonal vector
 */
Point orthogonal(Real xi, Real a, Real tau, Real b);

/**
 * Convert (r, z) coordinates to (xi, depth)
 */
std::pair<Real, Real> find_xi_depth(Real r, Real z);
