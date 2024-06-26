/**************************************************************************************
 *
 * DO NOT EDIT THIS FILE MANUALLY
 * THIS FILE IS GENERATED BY
 * modules\S32\Tools\MdibBuilders\RunGenerator.cmd
 *
 **************************************************************************************/

#pragma once

#include <Framework/Mdib/Public/Model/Component/MdsDescriptor.h>

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
 * @param mdsDescriptor @ref DFL::Mdib::MdsDescriptor value to visit
 * @ingroup Mdib
 */
template <class Visitor>
void visitMembers(Visitor& vis, const MdsDescriptor& mdsDescriptor)
{
    vis(mdsDescriptor.safetyClassification());
    vis(mdsDescriptor.type());
    vis(mdsDescriptor.productionSpecifications());
    vis(mdsDescriptor.metaData());
    vis(mdsDescriptor.approvedJurisdictions());
    vis(mdsDescriptor.extensions());
}
}
}
}
