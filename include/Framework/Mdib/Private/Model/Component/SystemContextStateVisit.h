/**************************************************************************************
 *
 * DO NOT EDIT THIS FILE MANUALLY
 * THIS FILE IS GENERATED BY
 * modules\S32\Tools\MdibBuilders\RunGenerator.cmd
 *
 **************************************************************************************/

#pragma once

#include <Framework/Mdib/Public/Model/Component/SystemContextState.h>

namespace DFL
{
namespace Mdib
{
namespace Impl
{
/**
 * @brief Calls the visitor for each member.
 *
 * @param vis visitor
 * @param systemContextState @ref DFL::Mdib::SystemContextState value to visit
 * @ingroup Mdib
 */
template <class Visitor>
void visitMembers(Visitor& vis, const SystemContextState& systemContextState)
{
    vis(systemContextState.activationState());
    vis(systemContextState.extensions());
}
}
}
}