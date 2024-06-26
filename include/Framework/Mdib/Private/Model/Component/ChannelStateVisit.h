/**************************************************************************************
 *
 * DO NOT EDIT THIS FILE MANUALLY
 * THIS FILE IS GENERATED BY
 * modules\S32\Tools\MdibBuilders\RunGenerator.cmd
 *
 **************************************************************************************/

#pragma once

#include <Framework/Mdib/Public/Model/Component/ChannelState.h>

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
 * @param channelState @ref DFL::Mdib::ChannelState value to visit
 * @ingroup Mdib
 */
template <class Visitor>
void visitMembers(Visitor& vis, const ChannelState& channelState)
{
    vis(channelState.activationState());
    vis(channelState.operatingHours());
    vis(channelState.operatingCycles());
    vis(channelState.calibrationInfo());
    vis(channelState.nextCalibrationInfo());
    vis(channelState.physicalConnector());
    vis(channelState.extensions());
}
}
}
}
