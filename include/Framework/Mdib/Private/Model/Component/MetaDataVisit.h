/**************************************************************************************
 *
 * DO NOT EDIT THIS FILE MANUALLY
 * THIS FILE IS GENERATED BY
 * modules\S32\Tools\MdibBuilders\RunGenerator.cmd
 *
 **************************************************************************************/

#pragma once

#include <Framework/Mdib/Public/Model/Component/MetaData.h>

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
 * @param metaData @ref DFL::Mdib::MetaData value to visit
 * @ingroup Mdib
 */
template <class Visitor>
void visitMembers(Visitor& vis, const MetaData& metaData)
{
    vis(metaData.udis());
    vis(metaData.lotNumber());
    vis(metaData.manufacturer());
    vis(metaData.manufactureDate());
    vis(metaData.expirationDate());
    vis(metaData.modelName());
    vis(metaData.modelNumber());
    vis(metaData.serialNumbers());
    vis(metaData.extensions());
}
}
}
}