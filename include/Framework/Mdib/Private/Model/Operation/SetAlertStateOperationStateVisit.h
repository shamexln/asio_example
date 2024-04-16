/**************************************************************************************
 *
 * DO NOT EDIT THIS FILE MANUALLY
 * THIS FILE IS GENERATED BY
 * modules\S32\Tools\MdibBuilders\RunGenerator.cmd
 *
 **************************************************************************************/

#pragma once

#include <Framework/Mdib/Public/Model/Operation/SetAlertStateOperationState.h>

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
 * @param setAlertStateOperationState @ref DFL::Mdib::SetAlertStateOperationState value to visit
 * @ingroup Mdib
 */
template <class Visitor>
void visitMembers(Visitor& vis, const SetAlertStateOperationState& setAlertStateOperationState)
{
    vis(setAlertStateOperationState.operatingMode());
    vis(setAlertStateOperationState.extensions());
}
}
}
}
