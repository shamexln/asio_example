/**************************************************************************************
 *
 * DO NOT EDIT THIS FILE MANUALLY
 * THIS FILE IS GENERATED BY
 * modules\S32\Tools\MdibBuilders\RunGenerator.cmd
 *
 **************************************************************************************/

#pragma once

#include <Framework/Mdib/Public/Model/Context/PersonReference.h>
#include <Framework/Mdib/Public/Model/Context/BaseDemographicsSerialize.h>
#include <Framework/Mdib/Public/Model/ExtensionTypeSerialize.h>
#include <Framework/Mdib/Public/Model/InstanceIdentifierSerialize.h>
#include <Framework/Utils/Public/SerializationHelper.h>

#include <boost/serialization/nvp.hpp>
#include <boost/serialization/split_free.hpp>
#include <boost/serialization/version.hpp>
#include <boost/serialization/optional.hpp>
#include <boost/serialization/vector.hpp>

#include <utility>

BOOST_SERIALIZATION_SPLIT_FREE(::DFL::Mdib::PersonReference)

BOOST_CLASS_VERSION(::DFL::Mdib::PersonReference, 1)

BOOST_CLASS_TRACKING(::DFL::Mdib::PersonReference, boost::serialization::track_never)

namespace boost
{
namespace serialization
{
/**
 * @brief Support for Boost Serialization.
 * @ingroup Mdib
 */
template<class Archive>
void save(Archive& ar, const ::DFL::Mdib::PersonReference& src, const unsigned int /*fileVersion*/)
{
    const auto& identification = src.identification();
    ar & make_nvp("Identification", identification);

    const auto& name = src.name();
    ar & make_nvp("Name", name);

    const auto& extensions = src.extensions();
    ar & make_nvp("Extensions", extensions);
}

/**
 * @brief Support for Boost Serialization.
 * @ingroup Mdib
 */
template<class Archive>
void load_construct_data(Archive& /*ar*/, ::DFL::Mdib::PersonReference* dst, const unsigned int /*version*/)
{
    ::new(dst) ::DFL::Mdib::PersonReference(::DFL::Mdib::InstanceIdentifiers{}, boost::none);
}

/**
 * @brief Support for Boost Serialization.
 * @ingroup Mdib
 */
template<class Archive>
void load(Archive& ar, ::DFL::Mdib::PersonReference& dst, const unsigned int version)
{
    ::DFL::Mdib::InstanceIdentifiers identification{};
    ar & make_nvp("Identification", identification);

    boost::optional<::DFL::Mdib::BaseDemographics> name{};
    ar & make_nvp("Name", name);

    ::DFL::Mdib::ExtensionTypes extensions{};
    if (version >= 1)
    {
        ar & make_nvp("Extensions", extensions);
    }

    dst = ::DFL::Mdib::PersonReference(
        identification,
        name,
        std::move(extensions));
}

}
}
