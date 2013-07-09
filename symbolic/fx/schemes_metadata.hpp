/*
 *    This file is part of CasADi.
 *
 *    CasADi -- A symbolic framework for dynamic optimization.
 *    Copyright (C) 2010 by Joel Andersson, Moritz Diehl, K.U.Leuven. All rights reserved.
 *
 *    CasADi is free software; you can redistribute it and/or
 *    modify it under the terms of the GNU Lesser General Public
 *    License as published by the Free Software Foundation; either
 *    version 3 of the License, or (at your option) any later version.
 *
 *    CasADi is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *    Lesser General Public License for more details.
 *
 *    You should have received a copy of the GNU Lesser General Public
 *    License along with CasADi; if not, write to the Free Software
 *    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

/** All edits to this file will be lost - autogenerated by misc/autogencode.py */
#ifndef SCHEMES_METADATA_HPP
#define SCHEMES_METADATA_HPP
#include <vector>
#include <string>
#include <utility>
#include <map>
#include "../casadi_exception.hpp"
namespace CasADi{ 
template <class T>
class IOSchemeVector;class CRSSparsity;
enum InputOutputScheme { SCHEME_ACADO_Input, SCHEME_ACADO_Output, SCHEME_ACADO_FCN_Input, SCHEME_ControlledDAEInput, SCHEME_ControlSimulatorInput, SCHEME_DAEInput, SCHEME_DAEOutput, SCHEME_RDAEInput, SCHEME_RDAEOutput, SCHEME_IntegratorInput, SCHEME_IntegratorOutput, SCHEME_LinsolInput, SCHEME_LinsolOutput, SCHEME_LPSolverInput, SCHEME_LPSolverOutput, SCHEME_LPStruct, SCHEME_NLPInput, SCHEME_NLPOutput, SCHEME_GradFInput, SCHEME_GradFOutput, SCHEME_JacGInput, SCHEME_JacGOutput, SCHEME_HessLagInput, SCHEME_HessLagOutput, SCHEME_NLPSolverInput, SCHEME_NLPSolverOutput, SCHEME_MayerInput, SCHEME_OCPInput, SCHEME_OCPOutput, SCHEME_QCQPSolverInput, SCHEME_QCQPSolverOutput, SCHEME_QCQPStruct, SCHEME_QPSolverInput, SCHEME_QPSolverOutput, SCHEME_QPStruct, SCHEME_SDPInput, SCHEME_SDPOutput, SCHEME_SDPStruct, SCHEME_SDQPInput, SCHEME_SDQPOutput, SCHEME_SDQPStruct, SCHEME_SOCPInput, SCHEME_SOCPOutput, SCHEME_SOCPStruct };
std::string getSchemeEntryName(InputOutputScheme scheme, int i);
std::string getSchemeEntryDoc(InputOutputScheme scheme, int i);
std::string getSchemeEntryEnumName(InputOutputScheme scheme, int i);
int getSchemeEntryEnum(InputOutputScheme scheme, const std::string &name);
int getSchemeSize(InputOutputScheme scheme);
std::string getSchemeName(InputOutputScheme scheme);
std::string getSchemeEntryNames(InputOutputScheme scheme);
}
#endif //SCHEMES_METADATA_HPP

