/**************************************************************************************
 *
 * DO NOT EDIT THIS FILE MANUALLY
 * THIS FILE IS GENERATED BY
 * modules\S32\Tools\MdibBuilders\RunGenerator.cmd
 *
 **************************************************************************************/

#pragma once

#include <Framework/Mdib/Public/Model/Component/BatteryDescriptor.h>
#include <Framework/Mdib/Public/Model/CodedValueSerialize.h>
#include <Framework/Mdib/Public/Model/Component/ProductionSpecificationSerialize.h>
#include <Framework/Mdib/Public/Model/ExtensionTypeSerialize.h>
#include <Framework/Mdib/Public/Model/MeasurementSerialize.h>
#include <Framework/Utils/Public/SerializationHelper.h>

#include <boost/serialization/nvp.hpp>
#include <boost/serialization/split_free.hpp>
#include <boost/serialization/version.hpp>
#include <boost/serialization/optional.hpp>
#include <boost/serialization/vector.hpp>

#include <utility>

BOOST_SERIALIZATION_SPLIT_FREE(::DFL::Mdib::BatteryDescriptor)

BOOST_CLASS_VERSION(::DFL::Mdib::BatteryDescriptor, 0)

BOOST_CLASS_TRACKING(::DFL::Mdib::BatteryDescriptor, boost::serialization::track_never)

namespace boost
{
namespace serialization
{
/**
 * @brief Support for Boost Serialization.
 * @ingroup Mdib
 */
template<class Archive>
void save(Archive& ar, const ::DFL::Mdib::BatteryDescriptor& src, const unsigned int /*fileVersion*/)
{
    const auto& safetyClassification = src.safetyClassification();
    ar & make_nvp("SafetyClassification", safetyClassification);

    const auto& type = src.type();
    DFL::Serialization::saveNvpOptional(ar, "Type", type);

    const auto& productionSpecifications = src.productionSpecifications();
    ar & make_nvp("ProductionSpecifications", productionSpecifications);

    const auto& capacityFullCharge = src.capacityFullCharge();
    DFL::Serialization::saveNvpOptional(ar, "CapacityFullCharge", capacityFullCharge);

    const auto& capacitySpecified = src.capacitySpecified();
    DFL::Serialization::saveNvpOptional(ar, "CapacitySpecified", capacitySpecified);

    const auto& voltageSpecified = src.voltageSpecified();
    DFL::Serialization::saveNvpOptional(ar, "VoltageSpecified", voltageSpecified);

    const auto& extensions = src.extensions();
    ar & make_nvp("Extensions", extensions);
}

/**
 * @brief Support for Boost Serialization.
 * @ingroup Mdib
 */
template<class Archive>
void load_construct_data(Archive& ar, ::DFL::Mdib::BatteryDescriptor* dst, const unsigned int /*version*/)
{
    ::DFL::Mdib::SafetyClassification safetyClassification{};
    ar & make_nvp("SafetyClassification", safetyClassification);

    boost::optional<::DFL::Mdib::CodedValue> type{};
    DFL::Serialization::loadNvpOptional(ar, "Type", type);

    ::DFL::Mdib::ProductionSpecifications productionSpecifications{};
    ar & make_nvp("ProductionSpecifications", productionSpecifications);

    boost::optional<::DFL::Mdib::Measurement> capacityFullCharge{};
    DFL::Serialization::loadNvpOptional(ar, "CapacityFullCharge", capacityFullCharge);

    boost::optional<::DFL::Mdib::Measurement> capacitySpecified{};
    DFL::Serialization::loadNvpOptional(ar, "CapacitySpecified", capacitySpecified);

    boost::optional<::DFL::Mdib::Measurement> voltageSpecified{};
    DFL::Serialization::loadNvpOptional(ar, "VoltageSpecified", voltageSpecified);

    ::DFL::Mdib::ExtensionTypes extensions{};
    ar & make_nvp("Extensions", extensions);

    ::new(dst) ::DFL::Mdib::BatteryDescriptor(
        safetyClassification,
        std::move(type),
        std::move(productionSpecifications),
        std::move(capacityFullCharge),
        std::move(capacitySpecified),
        std::move(voltageSpecified),
        std::move(extensions));
}

/**
 * @brief Support for Boost Serialization.
 * @ingroup Mdib
 */
template<class Archive>
void load(Archive& /*ar*/, ::DFL::Mdib::BatteryDescriptor& /*dst*/, const unsigned int /*version*/)
{
}

}
}
