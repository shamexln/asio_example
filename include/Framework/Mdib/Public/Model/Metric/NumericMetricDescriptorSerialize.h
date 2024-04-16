/**************************************************************************************
 *
 * DO NOT EDIT THIS FILE MANUALLY
 * THIS FILE IS GENERATED BY
 * modules\S32\Tools\MdibBuilders\RunGenerator.cmd
 *
 **************************************************************************************/

#pragma once

#include <Framework/Mdib/Public/Model/Metric/NumericMetricDescriptor.h>
#include <Framework/Chrono/Public/DurationSerialize.h>
#include <Framework/Mdib/Public/Model/CodedValueSerialize.h>
#include <Framework/Mdib/Public/Model/DecimalSerialize.h>
#include <Framework/Mdib/Public/Model/ExtensionTypeSerialize.h>
#include <Framework/Mdib/Public/Model/Metric/RelationSerialize.h>
#include <Framework/Mdib/Public/Model/RangeSerialize.h>
#include <Framework/Mdib/Public/Model/UnitSerialize.h>
#include <Framework/Utils/Public/SerializationHelper.h>

#include <boost/serialization/nvp.hpp>
#include <boost/serialization/split_free.hpp>
#include <boost/serialization/version.hpp>
#include <boost/serialization/optional.hpp>
#include <boost/serialization/vector.hpp>

#include <utility>

BOOST_SERIALIZATION_SPLIT_FREE(::DFL::Mdib::NumericMetricDescriptor)

BOOST_CLASS_VERSION(::DFL::Mdib::NumericMetricDescriptor, 0)

BOOST_CLASS_TRACKING(::DFL::Mdib::NumericMetricDescriptor, boost::serialization::track_never)

namespace boost
{
namespace serialization
{
/**
 * @brief Support for Boost Serialization.
 * @ingroup Mdib
 */
template<class Archive>
void save(Archive& ar, const ::DFL::Mdib::NumericMetricDescriptor& src, const unsigned int /*fileVersion*/)
{
    const auto& safetyClassification = src.safetyClassification();
    ar & make_nvp("SafetyClassification", safetyClassification);

    const auto& type = src.type();
    DFL::Serialization::saveNvpOptional(ar, "Type", type);

    const auto& unit = src.unit();
    ar & make_nvp("Unit", unit);

    const auto& bodySites = src.bodySites();
    ar & make_nvp("BodySites", bodySites);

    const auto& metricCategory = src.metricCategory();
    ar & make_nvp("MetricCategory", metricCategory);

    const auto& derivationMethod = src.derivationMethod();
    ar & make_nvp("DerivationMethod", derivationMethod);

    const auto& metricAvailability = src.metricAvailability();
    ar & make_nvp("MetricAvailability", metricAvailability);

    const auto& maxMeasurementTime = src.maxMeasurementTime();
    ar & make_nvp("MaxMeasurementTime", maxMeasurementTime);

    const auto& maxDelayTime = src.maxDelayTime();
    ar & make_nvp("MaxDelayTime", maxDelayTime);

    const auto& determinationPeriod = src.determinationPeriod();
    ar & make_nvp("DeterminationPeriod", determinationPeriod);

    const auto& lifeTimePeriod = src.lifeTimePeriod();
    ar & make_nvp("LifeTimePeriod", lifeTimePeriod);

    const auto& activationDuration = src.activationDuration();
    ar & make_nvp("ActivationDuration", activationDuration);

    const auto& relations = src.relations();
    ar & make_nvp("Relations", relations);

    const auto& resolution = src.resolution();
    ar & make_nvp("Resolution", resolution);

    const auto& averagingPeriod = src.averagingPeriod();
    ar & make_nvp("AveragingPeriod", averagingPeriod);

    const auto& technicalRanges = src.technicalRanges();
    ar & make_nvp("TechnicalRanges", technicalRanges);

    const auto& extensions = src.extensions();
    ar & make_nvp("Extensions", extensions);
}

/**
 * @brief Support for Boost Serialization.
 * @ingroup Mdib
 */
template<class Archive>
void load_construct_data(Archive& ar, ::DFL::Mdib::NumericMetricDescriptor* dst, const unsigned int /*version*/)
{
    ::DFL::Mdib::SafetyClassification safetyClassification{};
    ar & make_nvp("SafetyClassification", safetyClassification);

    boost::optional<::DFL::Mdib::CodedValue> type{};
    DFL::Serialization::loadNvpOptional(ar, "Type", type);

    ::DFL::Mdib::Unit unit(::DFL::Mdib::CodingSystem{::DFL::Mdib::CodingSystemId{}}, ::DFL::Mdib::CodeId{});
    ar & make_nvp("Unit", unit);

    ::DFL::Mdib::BodySites bodySites{};
    ar & make_nvp("BodySites", bodySites);

    ::DFL::Mdib::MetricCategory metricCategory{};
    ar & make_nvp("MetricCategory", metricCategory);

    boost::optional<::DFL::Mdib::DerivationMethod> derivationMethod{};
    ar & make_nvp("DerivationMethod", derivationMethod);

    ::DFL::Mdib::MetricAvailability metricAvailability{};
    ar & make_nvp("MetricAvailability", metricAvailability);

    boost::optional<::DFL::Mdib::Duration> maxMeasurementTime{};
    ar & make_nvp("MaxMeasurementTime", maxMeasurementTime);

    boost::optional<::DFL::Mdib::Duration> maxDelayTime{};
    ar & make_nvp("MaxDelayTime", maxDelayTime);

    boost::optional<::DFL::Mdib::Duration> determinationPeriod{};
    ar & make_nvp("DeterminationPeriod", determinationPeriod);

    boost::optional<::DFL::Mdib::Duration> lifeTimePeriod{};
    ar & make_nvp("LifeTimePeriod", lifeTimePeriod);

    boost::optional<::DFL::Mdib::Duration> activationDuration{};
    ar & make_nvp("ActivationDuration", activationDuration);

    ::DFL::Mdib::Relations relations{};
    ar & make_nvp("Relations", relations);

    ::DFL::Mdib::Decimal resolution{};
    ar & make_nvp("Resolution", resolution);

    boost::optional<::DFL::Mdib::Duration> averagingPeriod{};
    ar & make_nvp("AveragingPeriod", averagingPeriod);

    ::DFL::Mdib::Ranges technicalRanges{};
    ar & make_nvp("TechnicalRanges", technicalRanges);

    ::DFL::Mdib::ExtensionTypes extensions{};
    ar & make_nvp("Extensions", extensions);

    ::new(dst) ::DFL::Mdib::NumericMetricDescriptor(
        safetyClassification,
        std::move(type),
        unit,
        bodySites,
        metricCategory,
        derivationMethod,
        metricAvailability,
        maxMeasurementTime,
        maxDelayTime,
        determinationPeriod,
        lifeTimePeriod,
        activationDuration,
        relations,
        resolution,
        std::move(averagingPeriod),
        std::move(technicalRanges),
        std::move(extensions));
}

/**
 * @brief Support for Boost Serialization.
 * @ingroup Mdib
 */
template<class Archive>
void load(Archive& /*ar*/, ::DFL::Mdib::NumericMetricDescriptor& /*dst*/, const unsigned int /*version*/)
{
}

}
}