/**************************************************************************************
 *
 * DO NOT EDIT THIS FILE MANUALLY
 * THIS FILE IS GENERATED BY
 * modules\S32\Tools\MdibBuilders\RunGenerator.cmd
 *
 **************************************************************************************/

#pragma once

#include <Framework/Mdib/Public/Model/Alert/AlertConditionDescriptor.h>
#include <Framework/Chrono/Public/DurationSerialize.h>
#include <Framework/Mdib/Public/Model/Alert/CauseInfoSerialize.h>
#include <Framework/Mdib/Public/Model/CodedValueSerialize.h>
#include <Framework/Mdib/Public/Model/ExtensionTypeSerialize.h>
#include <Framework/Mdib/Public/Model/HandleSerialize.h>
#include <Framework/Utils/Public/SerializationHelper.h>

#include <boost/serialization/nvp.hpp>
#include <boost/serialization/split_free.hpp>
#include <boost/serialization/version.hpp>
#include <boost/serialization/optional.hpp>
#include <boost/serialization/vector.hpp>

#include <utility>

BOOST_SERIALIZATION_SPLIT_FREE(::DFL::Mdib::AlertConditionDescriptor)

BOOST_CLASS_VERSION(::DFL::Mdib::AlertConditionDescriptor, 0)

BOOST_CLASS_TRACKING(::DFL::Mdib::AlertConditionDescriptor, boost::serialization::track_never)

namespace boost
{
namespace serialization
{
/**
 * @brief Support for Boost Serialization.
 * @ingroup Mdib
 */
template<class Archive>
void save(Archive& ar, const ::DFL::Mdib::AlertConditionDescriptor& src, const unsigned int /*fileVersion*/)
{
    const auto& safetyClassification = src.safetyClassification();
    ar & make_nvp("SafetyClassification", safetyClassification);

    const auto& type = src.type();
    DFL::Serialization::saveNvpOptional(ar, "Type", type);

    const auto& kind = src.kind();
    ar & make_nvp("Kind", kind);

    const auto& priority = src.priority();
    ar & make_nvp("Priority", priority);

    const auto& defaultConditionGenerationDelay = src.defaultConditionGenerationDelay();
    ar & make_nvp("DefaultConditionGenerationDelay", defaultConditionGenerationDelay);

    const auto& canEscalate = src.canEscalate();
    ar & make_nvp("CanEscalate", canEscalate);

    const auto& canDeescalate = src.canDeescalate();
    ar & make_nvp("CanDeescalate", canDeescalate);

    const auto& sources = src.sources();
    ar & make_nvp("Sources", sources);

    const auto& causeInfos = src.causeInfos();
    ar & make_nvp("CauseInfos", causeInfos);

    const auto& extensions = src.extensions();
    ar & make_nvp("Extensions", extensions);
}

/**
 * @brief Support for Boost Serialization.
 * @ingroup Mdib
 */
template<class Archive>
void load_construct_data(Archive& ar, ::DFL::Mdib::AlertConditionDescriptor* dst, const unsigned int /*version*/)
{
    ::DFL::Mdib::SafetyClassification safetyClassification{};
    ar & make_nvp("SafetyClassification", safetyClassification);

    boost::optional<::DFL::Mdib::CodedValue> type{};
    DFL::Serialization::loadNvpOptional(ar, "Type", type);

    ::DFL::Mdib::AlertConditionKind kind{};
    ar & make_nvp("Kind", kind);

    ::DFL::Mdib::AlertConditionPriority priority{};
    ar & make_nvp("Priority", priority);

    ::DFL::Mdib::Duration defaultConditionGenerationDelay{};
    ar & make_nvp("DefaultConditionGenerationDelay", defaultConditionGenerationDelay);

    boost::optional<::DFL::Mdib::AlertConditionPriority> canEscalate{};
    ar & make_nvp("CanEscalate", canEscalate);

    boost::optional<::DFL::Mdib::AlertConditionPriority> canDeescalate{};
    ar & make_nvp("CanDeescalate", canDeescalate);

    ::DFL::Mdib::Handles sources{};
    ar & make_nvp("Sources", sources);

    ::DFL::Mdib::CauseInfos causeInfos{};
    ar & make_nvp("CauseInfos", causeInfos);

    ::DFL::Mdib::ExtensionTypes extensions{};
    ar & make_nvp("Extensions", extensions);

    ::new(dst) ::DFL::Mdib::AlertConditionDescriptor(
        safetyClassification,
        std::move(type),
        kind,
        priority,
        defaultConditionGenerationDelay,
        canEscalate,
        canDeescalate,
        std::move(sources),
        std::move(causeInfos),
        std::move(extensions));
}

/**
 * @brief Support for Boost Serialization.
 * @ingroup Mdib
 */
template<class Archive>
void load(Archive& /*ar*/, ::DFL::Mdib::AlertConditionDescriptor& /*dst*/, const unsigned int /*version*/)
{
}

}
}
