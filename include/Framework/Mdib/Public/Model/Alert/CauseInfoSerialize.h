/**************************************************************************************
 *
 * DO NOT EDIT THIS FILE MANUALLY
 * THIS FILE IS GENERATED BY
 * modules\S32\Tools\MdibBuilders\RunGenerator.cmd
 *
 **************************************************************************************/

#pragma once

#include <Framework/Mdib/Public/Model/Alert/CauseInfo.h>
#include <Framework/Mdib/Public/Model/Alert/RemedyInfoSerialize.h>
#include <Framework/Mdib/Public/Model/ExtensionTypeSerialize.h>
#include <Framework/Mdib/Public/Model/LocalizedTextSerialize.h>
#include <Framework/Utils/Public/SerializationHelper.h>

#include <boost/serialization/nvp.hpp>
#include <boost/serialization/split_free.hpp>
#include <boost/serialization/version.hpp>
#include <boost/serialization/optional.hpp>
#include <boost/serialization/vector.hpp>

#include <utility>

BOOST_SERIALIZATION_SPLIT_FREE(::DFL::Mdib::CauseInfo)

BOOST_CLASS_VERSION(::DFL::Mdib::CauseInfo, 0)

BOOST_CLASS_TRACKING(::DFL::Mdib::CauseInfo, boost::serialization::track_never)

namespace boost
{
namespace serialization
{
/**
 * @brief Support for Boost Serialization.
 * @ingroup Mdib
 */
template<class Archive>
void save(Archive& ar, const ::DFL::Mdib::CauseInfo& src, const unsigned int /*fileVersion*/)
{
    const auto& remedyInfo = src.remedyInfo();
    DFL::Serialization::saveNvpOptional(ar, "RemedyInfo", remedyInfo);

    const auto& description = src.description();
    ar & make_nvp("Description", description);

    const auto& extensions = src.extensions();
    ar & make_nvp("Extensions", extensions);
}

/**
 * @brief Support for Boost Serialization.
 * @ingroup Mdib
 */
template<class Archive>
void load(Archive& ar, ::DFL::Mdib::CauseInfo& dst, const unsigned int /*version*/)
{
    boost::optional<::DFL::Mdib::RemedyInfo> remedyInfo{};
    DFL::Serialization::loadNvpOptional(ar, "RemedyInfo", remedyInfo);

    ::DFL::Mdib::LocalizedTexts description{};
    ar & make_nvp("Description", description);

    ::DFL::Mdib::ExtensionTypes extensions{};
    ar & make_nvp("Extensions", extensions);

    dst = ::DFL::Mdib::CauseInfo(
        remedyInfo,
        description,
        std::move(extensions));
}

}
}
