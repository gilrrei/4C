// This file is part of 4C multiphysics licensed under the
// GNU Lesser General Public License v3.0 or later.
//
// See the LICENSE.md file in the top-level for license information.
//
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef FOUR_C_CUT_INPUT_HPP
#define FOUR_C_CUT_INPUT_HPP

#include "4C_config.hpp"

#include "4C_utils_parameter_list.fwd.hpp"

FOUR_C_NAMESPACE_OPEN

/*----------------------------------------------------------------------*/
namespace Cut
{
  /// set the cut parameters
  void set_valid_parameters(Teuchos::ParameterList& list);

}  // namespace Cut

/*----------------------------------------------------------------------*/
FOUR_C_NAMESPACE_CLOSE

#endif
