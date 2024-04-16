/**************************************************************************************
 *
 * DO NOT EDIT THIS FILE MANUALLY
 * THIS FILE IS GENERATED BY
 * modules\S32\Tools\MdibBuilders\RunGenerator.cmd
 *
 **************************************************************************************/

#pragma once

#include <memory>
#include <boost/optional.hpp>
#include <Framework/Mdib/Private/ExpImp.h>
#include <Framework/Mdib/Private/Utils/SmartPtrTypes.h>
#include <Framework/Utils/Public/NotNull.h>

#include <Framework/Mdib/Public/Model/Metric/DistributionSampleArrayMetricDescriptor.h>

namespace DFL
{
namespace Mdib
{

/**
 * @brief Builder with fluent interface for @ref DistributionSampleArrayMetricDescriptor
 * @ingroup Mdib
 */
class DistributionSampleArrayMetricDescriptorBuilder
{
    public:
        /// @brief Typedef to the immutable @ref DistributionSampleArrayMetricDescriptor
        using BuiltType = DistributionSampleArrayMetricDescriptor;

        /// @brief Builder based on given immutable @ref DistributionSampleArrayMetricDescriptor
        explicit DistributionSampleArrayMetricDescriptorBuilder(const DistributionSampleArrayMetricDescriptor& distributionSampleArrayMetricDescriptor=DistributionSampleArrayMetricDescriptor());

        /// @brief Builder based on given immutable @ref DistributionSampleArrayMetricDescriptor
        explicit DistributionSampleArrayMetricDescriptorBuilder(const DFL::NotNull<SharedPtr<DistributionSampleArrayMetricDescriptor>>& distributionSampleArrayMetricDescriptor);

        /// @brief Overwrite all values with given immutable @ref DistributionSampleArrayMetricDescriptor
        DistributionSampleArrayMetricDescriptorBuilder& operator=(const DistributionSampleArrayMetricDescriptor& distributionSampleArrayMetricDescriptor);

        /// @brief Explicit conversion to immutable @ref DistributionSampleArrayMetricDescriptor
        DistributionSampleArrayMetricDescriptor build() const;

        /// @brief Test whether the builder differs from the immutable @ref DistributionSampleArrayMetricDescriptor
        bool isChanged(const DistributionSampleArrayMetricDescriptor& base) const;

        /// @brief Setter for safetyClassification
        /// @{
        DistributionSampleArrayMetricDescriptorBuilder& safetyClassification(SafetyClassification safetyClassification);
        /// @}

        /// @brief Setter for type
        /// @{
        DistributionSampleArrayMetricDescriptorBuilder& type(const boost::optional<CodedValue>& type);
        DistributionSampleArrayMetricDescriptorBuilder& type(boost::optional<CodedValue>&& type);
        /// @}

        /// @brief Setter for unit
        /// @{
        DistributionSampleArrayMetricDescriptorBuilder& unit(const Unit& unit);
        DistributionSampleArrayMetricDescriptorBuilder& unit(Unit&& unit);
        /// @}

        /// @brief Setter for bodySites
        /// @{
        DistributionSampleArrayMetricDescriptorBuilder& bodySites(const BodySites& bodySites);
        DistributionSampleArrayMetricDescriptorBuilder& bodySites(BodySites&& bodySites);
        /// @}

        /// @brief Setter for metricCategory
        /// @{
        DistributionSampleArrayMetricDescriptorBuilder& metricCategory(MetricCategory metricCategory);
        /// @}

        /// @brief Setter for derivationMethod
        /// @{
        DistributionSampleArrayMetricDescriptorBuilder& derivationMethod(boost::optional<DerivationMethod> derivationMethod);
        /// @}

        /// @brief Setter for metricAvailability
        /// @{
        DistributionSampleArrayMetricDescriptorBuilder& metricAvailability(MetricAvailability metricAvailability);
        /// @}

        /// @brief Setter for maxMeasurementTime
        /// @{
        DistributionSampleArrayMetricDescriptorBuilder& maxMeasurementTime(const boost::optional<Duration>& maxMeasurementTime);
        DistributionSampleArrayMetricDescriptorBuilder& maxMeasurementTime(boost::optional<Duration>&& maxMeasurementTime);
        /// @}

        /// @brief Setter for maxDelayTime
        /// @{
        DistributionSampleArrayMetricDescriptorBuilder& maxDelayTime(const boost::optional<Duration>& maxDelayTime);
        DistributionSampleArrayMetricDescriptorBuilder& maxDelayTime(boost::optional<Duration>&& maxDelayTime);
        /// @}

        /// @brief Setter for determinationPeriod
        /// @{
        DistributionSampleArrayMetricDescriptorBuilder& determinationPeriod(const boost::optional<Duration>& determinationPeriod);
        DistributionSampleArrayMetricDescriptorBuilder& determinationPeriod(boost::optional<Duration>&& determinationPeriod);
        /// @}

        /// @brief Setter for lifeTimePeriod
        /// @{
        DistributionSampleArrayMetricDescriptorBuilder& lifeTimePeriod(const boost::optional<Duration>& lifeTimePeriod);
        DistributionSampleArrayMetricDescriptorBuilder& lifeTimePeriod(boost::optional<Duration>&& lifeTimePeriod);
        /// @}

        /// @brief Setter for activationDuration
        /// @{
        DistributionSampleArrayMetricDescriptorBuilder& activationDuration(const boost::optional<Duration>& activationDuration);
        DistributionSampleArrayMetricDescriptorBuilder& activationDuration(boost::optional<Duration>&& activationDuration);
        /// @}

        /// @brief Setter for relations
        /// @{
        DistributionSampleArrayMetricDescriptorBuilder& relations(const Relations& relations);
        DistributionSampleArrayMetricDescriptorBuilder& relations(Relations&& relations);
        /// @}

        /// @brief Setter for resolution
        /// @{
        DistributionSampleArrayMetricDescriptorBuilder& resolution(Decimal resolution);
        /// @}

        /// @brief Setter for technicalRanges
        /// @{
        DistributionSampleArrayMetricDescriptorBuilder& technicalRanges(const Ranges& technicalRanges);
        DistributionSampleArrayMetricDescriptorBuilder& technicalRanges(Ranges&& technicalRanges);
        /// @}

        /// @brief Setter for domainUnit
        /// @{
        DistributionSampleArrayMetricDescriptorBuilder& domainUnit(const CodedValue& domainUnit);
        DistributionSampleArrayMetricDescriptorBuilder& domainUnit(CodedValue&& domainUnit);
        /// @}

        /// @brief Setter for distributionRange
        /// @{
        DistributionSampleArrayMetricDescriptorBuilder& distributionRange(const Range& distributionRange);
        DistributionSampleArrayMetricDescriptorBuilder& distributionRange(Range&& distributionRange);
        /// @}

        /// @brief Setter for extensions
        /// @{
        DistributionSampleArrayMetricDescriptorBuilder& extensions(const ExtensionTypes& extensions);
        DistributionSampleArrayMetricDescriptorBuilder& extensions(ExtensionTypes&& extensions);
        /// @}

        /// @brief Getter for safetyClassification
        /// @{
        SafetyClassification& safetyClassification();
        SafetyClassification safetyClassification() const;
        /// @}

        /// @brief Getter for type
        /// @{
        boost::optional<CodedValue>& type();
        const boost::optional<CodedValue>& type() const;
        /// @}

        /// @brief Getter for unit
        /// @{
        Unit& unit();
        const Unit& unit() const;
        /// @}

        /// @brief Getter for bodySites
        /// @{
        BodySites& bodySites();
        const BodySites& bodySites() const;
        /// @}

        /// @brief Getter for metricCategory
        /// @{
        MetricCategory& metricCategory();
        MetricCategory metricCategory() const;
        /// @}

        /// @brief Getter for derivationMethod
        /// @{
        boost::optional<DerivationMethod>& derivationMethod();
        boost::optional<DerivationMethod> derivationMethod() const;
        /// @}

        /// @brief Getter for metricAvailability
        /// @{
        MetricAvailability& metricAvailability();
        MetricAvailability metricAvailability() const;
        /// @}

        /// @brief Getter for maxMeasurementTime
        /// @{
        boost::optional<Duration>& maxMeasurementTime();
        const boost::optional<Duration>& maxMeasurementTime() const;
        /// @}

        /// @brief Getter for maxDelayTime
        /// @{
        boost::optional<Duration>& maxDelayTime();
        const boost::optional<Duration>& maxDelayTime() const;
        /// @}

        /// @brief Getter for determinationPeriod
        /// @{
        boost::optional<Duration>& determinationPeriod();
        const boost::optional<Duration>& determinationPeriod() const;
        /// @}

        /// @brief Getter for lifeTimePeriod
        /// @{
        boost::optional<Duration>& lifeTimePeriod();
        const boost::optional<Duration>& lifeTimePeriod() const;
        /// @}

        /// @brief Getter for activationDuration
        /// @{
        boost::optional<Duration>& activationDuration();
        const boost::optional<Duration>& activationDuration() const;
        /// @}

        /// @brief Getter for relations
        /// @{
        Relations& relations();
        const Relations& relations() const;
        /// @}

        /// @brief Getter for resolution
        /// @{
        Decimal& resolution();
        Decimal resolution() const;
        /// @}

        /// @brief Getter for technicalRanges
        /// @{
        Ranges& technicalRanges();
        const Ranges& technicalRanges() const;
        /// @}

        /// @brief Getter for domainUnit
        /// @{
        CodedValue& domainUnit();
        const CodedValue& domainUnit() const;
        /// @}

        /// @brief Getter for distributionRange
        /// @{
        Range& distributionRange();
        const Range& distributionRange() const;
        /// @}

        /// @brief Getter for extensions
        /// @{
        ExtensionTypes& extensions();
        const ExtensionTypes& extensions() const;
        /// @}

    private:
        SafetyClassification m_safetyClassification;
        boost::optional<CodedValue> m_type;
        Unit m_unit;
        BodySites m_bodySites;
        MetricCategory m_metricCategory;
        boost::optional<DerivationMethod> m_derivationMethod;
        MetricAvailability m_metricAvailability;
        boost::optional<Duration> m_maxMeasurementTime;
        boost::optional<Duration> m_maxDelayTime;
        boost::optional<Duration> m_determinationPeriod;
        boost::optional<Duration> m_lifeTimePeriod;
        boost::optional<Duration> m_activationDuration;
        Relations m_relations;
        Decimal m_resolution;
        Ranges m_technicalRanges;
        CodedValue m_domainUnit;
        Range m_distributionRange;
        ExtensionTypes m_extensions;
};

/**
 * @brief Equal operator compares all members
 * @ingroup Mdib
 */
/// @{
DFL_MDIB_EXPIMP bool operator==(const DistributionSampleArrayMetricDescriptor& lhs, const DistributionSampleArrayMetricDescriptor& rhs);
DFL_MDIB_EXPIMP bool operator==(const DistributionSampleArrayMetricDescriptorBuilder& lhs, const DistributionSampleArrayMetricDescriptorBuilder& rhs);
DFL_MDIB_EXPIMP bool operator==(const DistributionSampleArrayMetricDescriptorBuilder& lhs, const DistributionSampleArrayMetricDescriptor& rhs);
bool operator==(const DistributionSampleArrayMetricDescriptor& lhs, const DistributionSampleArrayMetricDescriptorBuilder& rhs);
/// @}

/**
 * @brief Not equal operator compares all members
 * @ingroup Mdib
 */
/// @{
DFL_MDIB_EXPIMP bool operator!=(const DistributionSampleArrayMetricDescriptor& lhs, const DistributionSampleArrayMetricDescriptor& rhs);
bool operator!=(const DistributionSampleArrayMetricDescriptorBuilder& lhs, const DistributionSampleArrayMetricDescriptorBuilder& rhs);
bool operator!=(const DistributionSampleArrayMetricDescriptor& lhs, const DistributionSampleArrayMetricDescriptorBuilder& rhs);
bool operator!=(const DistributionSampleArrayMetricDescriptorBuilder& lhs, const DistributionSampleArrayMetricDescriptor& rhs);
/// @}

/**
 * @brief Factory function to create %Builder based on given immutable @ref DistributionSampleArrayMetricDescriptor
 * @ingroup Mdib
 */
/// @{
DistributionSampleArrayMetricDescriptorBuilder getBuilder(const DistributionSampleArrayMetricDescriptor& distributionSampleArrayMetricDescriptor);
DistributionSampleArrayMetricDescriptorBuilder getBuilder(const DFL::NotNull<SharedPtr<DistributionSampleArrayMetricDescriptor>>& distributionSampleArrayMetricDescriptor);
/// @}

/**
 * @brief Helper function throws runtime_error in case of a not equal member
 * @ingroup Mdib
 */
DFL_MDIB_EXPIMP void assertEqual(const DistributionSampleArrayMetricDescriptor& lhs, const DistributionSampleArrayMetricDescriptor& rhs);

inline DistributionSampleArrayMetricDescriptorBuilder::DistributionSampleArrayMetricDescriptorBuilder(const DistributionSampleArrayMetricDescriptor& distributionSampleArrayMetricDescriptor) :
    m_safetyClassification(distributionSampleArrayMetricDescriptor.safetyClassification()),
    m_type(distributionSampleArrayMetricDescriptor.type()),
    m_unit(distributionSampleArrayMetricDescriptor.unit()),
    m_bodySites(distributionSampleArrayMetricDescriptor.bodySites()),
    m_metricCategory(distributionSampleArrayMetricDescriptor.metricCategory()),
    m_derivationMethod(distributionSampleArrayMetricDescriptor.derivationMethod()),
    m_metricAvailability(distributionSampleArrayMetricDescriptor.metricAvailability()),
    m_maxMeasurementTime(distributionSampleArrayMetricDescriptor.maxMeasurementTime()),
    m_maxDelayTime(distributionSampleArrayMetricDescriptor.maxDelayTime()),
    m_determinationPeriod(distributionSampleArrayMetricDescriptor.determinationPeriod()),
    m_lifeTimePeriod(distributionSampleArrayMetricDescriptor.lifeTimePeriod()),
    m_activationDuration(distributionSampleArrayMetricDescriptor.activationDuration()),
    m_relations(distributionSampleArrayMetricDescriptor.relations()),
    m_resolution(distributionSampleArrayMetricDescriptor.resolution()),
    m_technicalRanges(distributionSampleArrayMetricDescriptor.technicalRanges()),
    m_domainUnit(distributionSampleArrayMetricDescriptor.domainUnit()),
    m_distributionRange(distributionSampleArrayMetricDescriptor.distributionRange()),
    m_extensions(distributionSampleArrayMetricDescriptor.extensions())
{
}

inline DistributionSampleArrayMetricDescriptorBuilder::DistributionSampleArrayMetricDescriptorBuilder(const DFL::NotNull<SharedPtr<DistributionSampleArrayMetricDescriptor>>& distributionSampleArrayMetricDescriptor) :
    m_safetyClassification(distributionSampleArrayMetricDescriptor->safetyClassification()),
    m_type(distributionSampleArrayMetricDescriptor->type()),
    m_unit(distributionSampleArrayMetricDescriptor->unit()),
    m_bodySites(distributionSampleArrayMetricDescriptor->bodySites()),
    m_metricCategory(distributionSampleArrayMetricDescriptor->metricCategory()),
    m_derivationMethod(distributionSampleArrayMetricDescriptor->derivationMethod()),
    m_metricAvailability(distributionSampleArrayMetricDescriptor->metricAvailability()),
    m_maxMeasurementTime(distributionSampleArrayMetricDescriptor->maxMeasurementTime()),
    m_maxDelayTime(distributionSampleArrayMetricDescriptor->maxDelayTime()),
    m_determinationPeriod(distributionSampleArrayMetricDescriptor->determinationPeriod()),
    m_lifeTimePeriod(distributionSampleArrayMetricDescriptor->lifeTimePeriod()),
    m_activationDuration(distributionSampleArrayMetricDescriptor->activationDuration()),
    m_relations(distributionSampleArrayMetricDescriptor->relations()),
    m_resolution(distributionSampleArrayMetricDescriptor->resolution()),
    m_technicalRanges(distributionSampleArrayMetricDescriptor->technicalRanges()),
    m_domainUnit(distributionSampleArrayMetricDescriptor->domainUnit()),
    m_distributionRange(distributionSampleArrayMetricDescriptor->distributionRange()),
    m_extensions(distributionSampleArrayMetricDescriptor->extensions())
{
}

inline DistributionSampleArrayMetricDescriptorBuilder& DistributionSampleArrayMetricDescriptorBuilder::operator=(const DistributionSampleArrayMetricDescriptor& distributionSampleArrayMetricDescriptor)
{
    m_safetyClassification = distributionSampleArrayMetricDescriptor.safetyClassification();
    m_type = distributionSampleArrayMetricDescriptor.type();
    m_unit = distributionSampleArrayMetricDescriptor.unit();
    m_bodySites = distributionSampleArrayMetricDescriptor.bodySites();
    m_metricCategory = distributionSampleArrayMetricDescriptor.metricCategory();
    m_derivationMethod = distributionSampleArrayMetricDescriptor.derivationMethod();
    m_metricAvailability = distributionSampleArrayMetricDescriptor.metricAvailability();
    m_maxMeasurementTime = distributionSampleArrayMetricDescriptor.maxMeasurementTime();
    m_maxDelayTime = distributionSampleArrayMetricDescriptor.maxDelayTime();
    m_determinationPeriod = distributionSampleArrayMetricDescriptor.determinationPeriod();
    m_lifeTimePeriod = distributionSampleArrayMetricDescriptor.lifeTimePeriod();
    m_activationDuration = distributionSampleArrayMetricDescriptor.activationDuration();
    m_relations = distributionSampleArrayMetricDescriptor.relations();
    m_resolution = distributionSampleArrayMetricDescriptor.resolution();
    m_technicalRanges = distributionSampleArrayMetricDescriptor.technicalRanges();
    m_domainUnit = distributionSampleArrayMetricDescriptor.domainUnit();
    m_distributionRange = distributionSampleArrayMetricDescriptor.distributionRange();
    m_extensions = distributionSampleArrayMetricDescriptor.extensions();
    return *this;
}

inline DistributionSampleArrayMetricDescriptor DistributionSampleArrayMetricDescriptorBuilder::build() const
{
    // NOLINTNEXTLINE(modernize-return-braced-init-list)
    return DistributionSampleArrayMetricDescriptor(m_safetyClassification, m_type, m_unit, m_bodySites, m_metricCategory, m_derivationMethod, m_metricAvailability, m_maxMeasurementTime, m_maxDelayTime, m_determinationPeriod, m_lifeTimePeriod, m_activationDuration, m_relations, m_resolution, m_technicalRanges, m_domainUnit, m_distributionRange, m_extensions);
}

inline bool DistributionSampleArrayMetricDescriptorBuilder::isChanged(const DistributionSampleArrayMetricDescriptor& base) const
{
    return *this != base;
}

inline DistributionSampleArrayMetricDescriptorBuilder& DistributionSampleArrayMetricDescriptorBuilder::safetyClassification(SafetyClassification safetyClassification)
{
    m_safetyClassification = safetyClassification;
    return *this;
}

inline SafetyClassification& DistributionSampleArrayMetricDescriptorBuilder::safetyClassification()
{
    return m_safetyClassification;
}

inline SafetyClassification DistributionSampleArrayMetricDescriptorBuilder::safetyClassification() const
{
    return m_safetyClassification;
}

inline DistributionSampleArrayMetricDescriptorBuilder& DistributionSampleArrayMetricDescriptorBuilder::type(const boost::optional<CodedValue>& type)
{
    m_type = type;
    return *this;
}

inline DistributionSampleArrayMetricDescriptorBuilder& DistributionSampleArrayMetricDescriptorBuilder::type(boost::optional<CodedValue>&& type)
{
    m_type = std::move(type);
    return *this;
}

inline boost::optional<CodedValue>& DistributionSampleArrayMetricDescriptorBuilder::type()
{
    return m_type;
}

inline const boost::optional<CodedValue>& DistributionSampleArrayMetricDescriptorBuilder::type() const
{
    return m_type;
}

inline DistributionSampleArrayMetricDescriptorBuilder& DistributionSampleArrayMetricDescriptorBuilder::unit(const Unit& unit)
{
    m_unit = unit;
    return *this;
}

inline DistributionSampleArrayMetricDescriptorBuilder& DistributionSampleArrayMetricDescriptorBuilder::unit(Unit&& unit)
{
    m_unit = std::move(unit);
    return *this;
}

inline Unit& DistributionSampleArrayMetricDescriptorBuilder::unit()
{
    return m_unit;
}

inline const Unit& DistributionSampleArrayMetricDescriptorBuilder::unit() const
{
    return m_unit;
}

inline DistributionSampleArrayMetricDescriptorBuilder& DistributionSampleArrayMetricDescriptorBuilder::bodySites(const BodySites& bodySites)
{
    m_bodySites = bodySites;
    return *this;
}

inline DistributionSampleArrayMetricDescriptorBuilder& DistributionSampleArrayMetricDescriptorBuilder::bodySites(BodySites&& bodySites)
{
    m_bodySites = std::move(bodySites);
    return *this;
}

inline BodySites& DistributionSampleArrayMetricDescriptorBuilder::bodySites()
{
    return m_bodySites;
}

inline const BodySites& DistributionSampleArrayMetricDescriptorBuilder::bodySites() const
{
    return m_bodySites;
}

inline DistributionSampleArrayMetricDescriptorBuilder& DistributionSampleArrayMetricDescriptorBuilder::metricCategory(MetricCategory metricCategory)
{
    m_metricCategory = metricCategory;
    return *this;
}

inline MetricCategory& DistributionSampleArrayMetricDescriptorBuilder::metricCategory()
{
    return m_metricCategory;
}

inline MetricCategory DistributionSampleArrayMetricDescriptorBuilder::metricCategory() const
{
    return m_metricCategory;
}

inline DistributionSampleArrayMetricDescriptorBuilder& DistributionSampleArrayMetricDescriptorBuilder::derivationMethod(boost::optional<DerivationMethod> derivationMethod)
{
    m_derivationMethod = derivationMethod;
    return *this;
}

inline boost::optional<DerivationMethod>& DistributionSampleArrayMetricDescriptorBuilder::derivationMethod()
{
    return m_derivationMethod;
}

inline boost::optional<DerivationMethod> DistributionSampleArrayMetricDescriptorBuilder::derivationMethod() const
{
    return m_derivationMethod;
}

inline DistributionSampleArrayMetricDescriptorBuilder& DistributionSampleArrayMetricDescriptorBuilder::metricAvailability(MetricAvailability metricAvailability)
{
    m_metricAvailability = metricAvailability;
    return *this;
}

inline MetricAvailability& DistributionSampleArrayMetricDescriptorBuilder::metricAvailability()
{
    return m_metricAvailability;
}

inline MetricAvailability DistributionSampleArrayMetricDescriptorBuilder::metricAvailability() const
{
    return m_metricAvailability;
}

inline DistributionSampleArrayMetricDescriptorBuilder& DistributionSampleArrayMetricDescriptorBuilder::maxMeasurementTime(const boost::optional<Duration>& maxMeasurementTime)
{
    m_maxMeasurementTime = maxMeasurementTime;
    return *this;
}

inline DistributionSampleArrayMetricDescriptorBuilder& DistributionSampleArrayMetricDescriptorBuilder::maxMeasurementTime(boost::optional<Duration>&& maxMeasurementTime)
{
    m_maxMeasurementTime = std::move(maxMeasurementTime);
    return *this;
}

inline boost::optional<Duration>& DistributionSampleArrayMetricDescriptorBuilder::maxMeasurementTime()
{
    return m_maxMeasurementTime;
}

inline const boost::optional<Duration>& DistributionSampleArrayMetricDescriptorBuilder::maxMeasurementTime() const
{
    return m_maxMeasurementTime;
}

inline DistributionSampleArrayMetricDescriptorBuilder& DistributionSampleArrayMetricDescriptorBuilder::maxDelayTime(const boost::optional<Duration>& maxDelayTime)
{
    m_maxDelayTime = maxDelayTime;
    return *this;
}

inline DistributionSampleArrayMetricDescriptorBuilder& DistributionSampleArrayMetricDescriptorBuilder::maxDelayTime(boost::optional<Duration>&& maxDelayTime)
{
    m_maxDelayTime = std::move(maxDelayTime);
    return *this;
}

inline boost::optional<Duration>& DistributionSampleArrayMetricDescriptorBuilder::maxDelayTime()
{
    return m_maxDelayTime;
}

inline const boost::optional<Duration>& DistributionSampleArrayMetricDescriptorBuilder::maxDelayTime() const
{
    return m_maxDelayTime;
}

inline DistributionSampleArrayMetricDescriptorBuilder& DistributionSampleArrayMetricDescriptorBuilder::determinationPeriod(const boost::optional<Duration>& determinationPeriod)
{
    m_determinationPeriod = determinationPeriod;
    return *this;
}

inline DistributionSampleArrayMetricDescriptorBuilder& DistributionSampleArrayMetricDescriptorBuilder::determinationPeriod(boost::optional<Duration>&& determinationPeriod)
{
    m_determinationPeriod = std::move(determinationPeriod);
    return *this;
}

inline boost::optional<Duration>& DistributionSampleArrayMetricDescriptorBuilder::determinationPeriod()
{
    return m_determinationPeriod;
}

inline const boost::optional<Duration>& DistributionSampleArrayMetricDescriptorBuilder::determinationPeriod() const
{
    return m_determinationPeriod;
}

inline DistributionSampleArrayMetricDescriptorBuilder& DistributionSampleArrayMetricDescriptorBuilder::lifeTimePeriod(const boost::optional<Duration>& lifeTimePeriod)
{
    m_lifeTimePeriod = lifeTimePeriod;
    return *this;
}

inline DistributionSampleArrayMetricDescriptorBuilder& DistributionSampleArrayMetricDescriptorBuilder::lifeTimePeriod(boost::optional<Duration>&& lifeTimePeriod)
{
    m_lifeTimePeriod = std::move(lifeTimePeriod);
    return *this;
}

inline boost::optional<Duration>& DistributionSampleArrayMetricDescriptorBuilder::lifeTimePeriod()
{
    return m_lifeTimePeriod;
}

inline const boost::optional<Duration>& DistributionSampleArrayMetricDescriptorBuilder::lifeTimePeriod() const
{
    return m_lifeTimePeriod;
}

inline DistributionSampleArrayMetricDescriptorBuilder& DistributionSampleArrayMetricDescriptorBuilder::activationDuration(const boost::optional<Duration>& activationDuration)
{
    m_activationDuration = activationDuration;
    return *this;
}

inline DistributionSampleArrayMetricDescriptorBuilder& DistributionSampleArrayMetricDescriptorBuilder::activationDuration(boost::optional<Duration>&& activationDuration)
{
    m_activationDuration = std::move(activationDuration);
    return *this;
}

inline boost::optional<Duration>& DistributionSampleArrayMetricDescriptorBuilder::activationDuration()
{
    return m_activationDuration;
}

inline const boost::optional<Duration>& DistributionSampleArrayMetricDescriptorBuilder::activationDuration() const
{
    return m_activationDuration;
}

inline DistributionSampleArrayMetricDescriptorBuilder& DistributionSampleArrayMetricDescriptorBuilder::relations(const Relations& relations)
{
    m_relations = relations;
    return *this;
}

inline DistributionSampleArrayMetricDescriptorBuilder& DistributionSampleArrayMetricDescriptorBuilder::relations(Relations&& relations)
{
    m_relations = std::move(relations);
    return *this;
}

inline Relations& DistributionSampleArrayMetricDescriptorBuilder::relations()
{
    return m_relations;
}

inline const Relations& DistributionSampleArrayMetricDescriptorBuilder::relations() const
{
    return m_relations;
}

inline DistributionSampleArrayMetricDescriptorBuilder& DistributionSampleArrayMetricDescriptorBuilder::resolution(Decimal resolution)
{
    m_resolution = resolution;
    return *this;
}

inline Decimal& DistributionSampleArrayMetricDescriptorBuilder::resolution()
{
    return m_resolution;
}

inline Decimal DistributionSampleArrayMetricDescriptorBuilder::resolution() const
{
    return m_resolution;
}

inline DistributionSampleArrayMetricDescriptorBuilder& DistributionSampleArrayMetricDescriptorBuilder::technicalRanges(const Ranges& technicalRanges)
{
    m_technicalRanges = technicalRanges;
    return *this;
}

inline DistributionSampleArrayMetricDescriptorBuilder& DistributionSampleArrayMetricDescriptorBuilder::technicalRanges(Ranges&& technicalRanges)
{
    m_technicalRanges = std::move(technicalRanges);
    return *this;
}

inline Ranges& DistributionSampleArrayMetricDescriptorBuilder::technicalRanges()
{
    return m_technicalRanges;
}

inline const Ranges& DistributionSampleArrayMetricDescriptorBuilder::technicalRanges() const
{
    return m_technicalRanges;
}

inline DistributionSampleArrayMetricDescriptorBuilder& DistributionSampleArrayMetricDescriptorBuilder::domainUnit(const CodedValue& domainUnit)
{
    m_domainUnit = domainUnit;
    return *this;
}

inline DistributionSampleArrayMetricDescriptorBuilder& DistributionSampleArrayMetricDescriptorBuilder::domainUnit(CodedValue&& domainUnit)
{
    m_domainUnit = std::move(domainUnit);
    return *this;
}

inline CodedValue& DistributionSampleArrayMetricDescriptorBuilder::domainUnit()
{
    return m_domainUnit;
}

inline const CodedValue& DistributionSampleArrayMetricDescriptorBuilder::domainUnit() const
{
    return m_domainUnit;
}

inline DistributionSampleArrayMetricDescriptorBuilder& DistributionSampleArrayMetricDescriptorBuilder::distributionRange(const Range& distributionRange)
{
    m_distributionRange = distributionRange;
    return *this;
}

inline DistributionSampleArrayMetricDescriptorBuilder& DistributionSampleArrayMetricDescriptorBuilder::distributionRange(Range&& distributionRange)
{
    m_distributionRange = std::move(distributionRange);
    return *this;
}

inline Range& DistributionSampleArrayMetricDescriptorBuilder::distributionRange()
{
    return m_distributionRange;
}

inline const Range& DistributionSampleArrayMetricDescriptorBuilder::distributionRange() const
{
    return m_distributionRange;
}

inline DistributionSampleArrayMetricDescriptorBuilder& DistributionSampleArrayMetricDescriptorBuilder::extensions(const ExtensionTypes& extensions)
{
    m_extensions = extensions;
    return *this;
}

inline DistributionSampleArrayMetricDescriptorBuilder& DistributionSampleArrayMetricDescriptorBuilder::extensions(ExtensionTypes&& extensions)
{
    m_extensions = std::move(extensions);
    return *this;
}

inline ExtensionTypes& DistributionSampleArrayMetricDescriptorBuilder::extensions()
{
    return m_extensions;
}

inline const ExtensionTypes& DistributionSampleArrayMetricDescriptorBuilder::extensions() const
{
    return m_extensions;
}

inline bool operator==(const DistributionSampleArrayMetricDescriptor& lhs, const DistributionSampleArrayMetricDescriptorBuilder& rhs)
{
    return rhs == lhs;
}

inline bool operator!=(const DistributionSampleArrayMetricDescriptorBuilder& lhs, const DistributionSampleArrayMetricDescriptorBuilder& rhs)
{
    return !(lhs == rhs);
}

inline bool operator!=(const DistributionSampleArrayMetricDescriptor& lhs, const DistributionSampleArrayMetricDescriptorBuilder& rhs)
{
    return !(lhs == rhs);
}

inline bool operator!=(const DistributionSampleArrayMetricDescriptorBuilder& lhs, const DistributionSampleArrayMetricDescriptor& rhs)
{
    return !(lhs == rhs);
}

inline DistributionSampleArrayMetricDescriptorBuilder getBuilder(const DistributionSampleArrayMetricDescriptor& distributionSampleArrayMetricDescriptor)
{
    return DistributionSampleArrayMetricDescriptorBuilder(distributionSampleArrayMetricDescriptor);
}

inline DistributionSampleArrayMetricDescriptorBuilder getBuilder(const DFL::NotNull<SharedPtr<DistributionSampleArrayMetricDescriptor>>& distributionSampleArrayMetricDescriptor)
{
    return DistributionSampleArrayMetricDescriptorBuilder(distributionSampleArrayMetricDescriptor);
}

}
}
