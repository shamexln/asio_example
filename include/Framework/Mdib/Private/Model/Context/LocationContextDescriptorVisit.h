/**************************************************************************************
 *
 * DO NOT EDIT THIS FILE MANUALLY
 * THIS FILE IS GENERATED BY
 * modules\S32\Tools\MdibBuilders\RunGenerator.cmd
 *
 **************************************************************************************/

#pragma once

#include <Framework/Mdib/Public/Model/Context/LocationContextDescriptor.h>

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
 * @param locationContextDescriptor @ref DFL::Mdib::LocationContextDescriptor value to visit
 * @ingroup Mdib
 */
template <class Visitor>
void visitMembers(Visitor& vis, const LocationContextDescriptor& locationContextDescriptor)
{
    vis(locationContextDescriptor.safetyClassification());
    vis(locationContextDescriptor.type());
    vis(locationContextDescriptor.extensions());
}
}
}
}
