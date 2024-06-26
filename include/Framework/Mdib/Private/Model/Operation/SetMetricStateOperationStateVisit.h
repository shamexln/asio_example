/**************************************************************************************
 *
 * DO NOT EDIT THIS FILE MANUALLY
 * THIS FILE IS GENERATED BY
 * modules\S32\Tools\MdibBuilders\RunGenerator.cmd
 *
 **************************************************************************************/

#pragma once

#include <Framework/Mdib/Public/Model/Operation/SetMetricStateOperationState.h>

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
 * @param setMetricStateOperationState @ref DFL::Mdib::SetMetricStateOperationState value to visit
 * @ingroup Mdib
 */
template <class Visitor>
void visitMembers(Visitor& vis, const SetMetricStateOperationState& setMetricStateOperationState)
{
    vis(setMetricStateOperationState.operatingMode());
    vis(setMetricStateOperationState.extensions());
}
}
}
}
