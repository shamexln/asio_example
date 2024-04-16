/**************************************************************************************
 *
 * DO NOT EDIT THIS FILE MANUALLY
 * THIS FILE IS GENERATED BY
 * modules\S32\Tools\MdibBuilders\RunGenerator.cmd
 *
 **************************************************************************************/

#pragma once

#include <Framework/Mdib/Public/Model/Alert/AlertSystemDescriptor.h>
#include <Framework/Chrono/Public/DurationSerialize.h>
#include <Framework/Mdib/Public/Model/CodedValueSerialize.h>
#include <Framework/Mdib/Public/Model/ExtensionTypeSerialize.h>
#include <Framework/Utils/Public/SerializationHelper.h>

#include <boost/serialization/nvp.hpp>
#include <boost/serialization/split_free.hpp>
#include <boost/serialization/version.hpp>
#include <boost/serialization/optional.hpp>
#include <boost/serialization/vector.hpp>

#include <utility>

BOOST_SERIALIZATION_SPLIT_FREE(::DFL::Mdib::AlertSystemDescriptor)

BOOST_CLASS_VERSION(::DFL::Mdib::AlertSystemDescriptor, 0)

BOOST_CLASS_TRACKING(::DFL::Mdib::AlertSystemDescriptor, boost::serialization::track_never)

namespace boost
{
namespace serialization
{
/**
 * @brief Support for Boost Serialization.
 * @ingroup Mdib
 */
template<class Archive>
void save(Archive& ar, const ::DFL::Mdib::AlertSystemDescriptor& src, const unsigned int /*fileVersion*/)
{
    const auto& safetyClassification = src.safetyClassification();
    ar & make_nvp("SafetyClassification", safetyClassification);

    const auto& type = src.type();
    DFL::Serialization::saveNvpOptional(ar, "Type", type);

    const auto& maxPhysiologicalAlarmListEntries = src.maxPhysiologicalAlarmListEntries();
    ar & make_nvp("MaxPhysiologicalAlarmListEntries", maxPhysiologicalAlarmListEntries);

    const auto& maxTechnicalAlarmListEntries = src.maxTechnicalAlarmListEntries();
    ar & make_nvp("MaxTechnicalAlarmListEntries", maxTechnicalAlarmListEntries);

    const auto& selfCheckPeriod = src.selfCheckPeriod();
    ar & make_nvp("SelfCheckPeriod", selfCheckPeriod);

    const auto& extensions = src.extensions();
    ar & make_nvp("Extensions", extensions);
}

/**
 * @brief Support for Boost Serialization.
 * @ingroup Mdib
 */
template<class Archive>
void load_construct_data(Archive& ar, ::DFL::Mdib::AlertSystemDescriptor* dst, const unsigned int /*version*/)
{
    ::DFL::Mdib::SafetyClassification safetyClassification{};
    ar & make_nvp("SafetyClassification", safetyClassification);

    boost::optional<::DFL::Mdib::CodedValue> type{};
    DFL::Serialization::loadNvpOptional(ar, "Type", type);

    boost::optional<::DFL::Mdib::MaxPhysiologicalParallelAlarms> maxPhysiologicalAlarmListEntries{};
    ar & make_nvp("MaxPhysiologicalAlarmListEntries", maxPhysiologicalAlarmListEntries);

    boost::optional<::DFL::Mdib::MaxTechnicalParallelAlarms> maxTechnicalAlarmListEntries{};
    ar & make_nvp("MaxTechnicalAlarmListEntries", maxTechnicalAlarmListEntries);

    boost::optional<::DFL::Mdib::Duration> selfCheckPeriod{};
    ar & make_nvp("SelfCheckPeriod", selfCheckPeriod);

    ::DFL::Mdib::ExtensionTypes extensions{};
    ar & make_nvp("Extensions", extensions);

    ::new(dst) ::DFL::Mdib::AlertSystemDescriptor(
        safetyClassification,
        std::move(type),
        maxPhysiologicalAlarmListEntries,
        maxTechnicalAlarmListEntries,
        selfCheckPeriod,
        std::move(extensions));
}

/**
 * @brief Support for Boost Serialization.
 * @ingroup Mdib
 */
template<class Archive>
void load(Archive& /*ar*/, ::DFL::Mdib::AlertSystemDescriptor& /*dst*/, const unsigned int /*version*/)
{
}

}
}
