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

#include <Framework/Mdib/Public/Model/Metric/NumericMetricValue.h>

namespace DFL
{
namespace Mdib
{

/**
 * @brief Builder with fluent interface for @ref NumericMetricValue
 * @ingroup Mdib
 */
class NumericMetricValueBuilder
{
    public:
        /// @brief Typedef to the immutable @ref NumericMetricValue
        using BuiltType = NumericMetricValue;

        /// @brief Builder based on given immutable @ref NumericMetricValue
        explicit NumericMetricValueBuilder(const NumericMetricValue& numericMetricValue=NumericMetricValue());

        /// @brief Builder based on given immutable @ref NumericMetricValue
        explicit NumericMetricValueBuilder(const DFL::NotNull<SharedPtr<NumericMetricValue>>& numericMetricValue);

        /// @brief Overwrite all values with given immutable @ref NumericMetricValue
        NumericMetricValueBuilder& operator=(const NumericMetricValue& numericMetricValue);

        /// @brief Explicit conversion to immutable @ref NumericMetricValue
        NumericMetricValue build() const;

        /// @brief Test whether the builder differs from the immutable @ref NumericMetricValue
        bool isChanged(const NumericMetricValue& base) const;

        /// @brief Setter for metricQuality
        /// @{
        NumericMetricValueBuilder& metricQuality(const MetricQuality& metricQuality);
        NumericMetricValueBuilder& metricQuality(MetricQuality&& metricQuality);
        /// @}

        /// @brief Setter for annotations
        /// @{
        NumericMetricValueBuilder& annotations(const Annotations& annotations);
        NumericMetricValueBuilder& annotations(Annotations&& annotations);
        /// @}

        /// @brief Setter for startTime
        /// @{
        NumericMetricValueBuilder& startTime(const boost::optional<Timestamp>& startTime);
        NumericMetricValueBuilder& startTime(boost::optional<Timestamp>&& startTime);
        /// @}

        /// @brief Setter for stopTime
        /// @{
        NumericMetricValueBuilder& stopTime(const boost::optional<Timestamp>& stopTime);
        NumericMetricValueBuilder& stopTime(boost::optional<Timestamp>&& stopTime);
        /// @}

        /// @brief Setter for determinationTime
        /// @{
        NumericMetricValueBuilder& determinationTime(const boost::optional<Timestamp>& determinationTime);
        NumericMetricValueBuilder& determinationTime(boost::optional<Timestamp>&& determinationTime);
        /// @}

        /// @brief Setter for value
        /// @{
        NumericMetricValueBuilder& value(const boost::optional<Decimal>& value);
        NumericMetricValueBuilder& value(boost::optional<Decimal>&& value);
        /// @}

        /// @brief Setter for extensions
        /// @{
        NumericMetricValueBuilder& extensions(const ExtensionTypes& extensions);
        NumericMetricValueBuilder& extensions(ExtensionTypes&& extensions);
        /// @}

        /// @brief Getter for metricQuality
        /// @{
        MetricQuality& metricQuality();
        const MetricQuality& metricQuality() const;
        /// @}

        /// @brief Getter for annotations
        /// @{
        Annotations& annotations();
        const Annotations& annotations() const;
        /// @}

        /// @brief Getter for startTime
        /// @{
        boost::optional<Timestamp>& startTime();
        const boost::optional<Timestamp>& startTime() const;
        /// @}

        /// @brief Getter for stopTime
        /// @{
        boost::optional<Timestamp>& stopTime();
        const boost::optional<Timestamp>& stopTime() const;
        /// @}

        /// @brief Getter for determinationTime
        /// @{
        boost::optional<Timestamp>& determinationTime();
        const boost::optional<Timestamp>& determinationTime() const;
        /// @}

        /// @brief Getter for value
        /// @{
        boost::optional<Decimal>& value();
        const boost::optional<Decimal>& value() const;
        /// @}

        /// @brief Getter for extensions
        /// @{
        ExtensionTypes& extensions();
        const ExtensionTypes& extensions() const;
        /// @}

    private:
        MetricQuality m_metricQuality;
        Annotations m_annotations;
        boost::optional<Timestamp> m_startTime;
        boost::optional<Timestamp> m_stopTime;
        boost::optional<Timestamp> m_determinationTime;
        boost::optional<Decimal> m_value;
        ExtensionTypes m_extensions;
};

/**
 * @brief Equal operator compares all members
 * @ingroup Mdib
 */
/// @{
DFL_MDIB_EXPIMP bool operator==(const NumericMetricValue& lhs, const NumericMetricValue& rhs);
DFL_MDIB_EXPIMP bool operator==(const NumericMetricValueBuilder& lhs, const NumericMetricValueBuilder& rhs);
DFL_MDIB_EXPIMP bool operator==(const NumericMetricValueBuilder& lhs, const NumericMetricValue& rhs);
bool operator==(const NumericMetricValue& lhs, const NumericMetricValueBuilder& rhs);
/// @}

/**
 * @brief Not equal operator compares all members
 * @ingroup Mdib
 */
/// @{
DFL_MDIB_EXPIMP bool operator!=(const NumericMetricValue& lhs, const NumericMetricValue& rhs);
bool operator!=(const NumericMetricValueBuilder& lhs, const NumericMetricValueBuilder& rhs);
bool operator!=(const NumericMetricValue& lhs, const NumericMetricValueBuilder& rhs);
bool operator!=(const NumericMetricValueBuilder& lhs, const NumericMetricValue& rhs);
/// @}

/**
 * @brief Factory function to create %Builder based on given immutable @ref NumericMetricValue
 * @ingroup Mdib
 */
/// @{
NumericMetricValueBuilder getBuilder(const NumericMetricValue& numericMetricValue);
NumericMetricValueBuilder getBuilder(const DFL::NotNull<SharedPtr<NumericMetricValue>>& numericMetricValue);
/// @}

/**
 * @brief Helper function throws runtime_error in case of a not equal member
 * @ingroup Mdib
 */
DFL_MDIB_EXPIMP void assertEqual(const NumericMetricValue& lhs, const NumericMetricValue& rhs);

inline NumericMetricValueBuilder::NumericMetricValueBuilder(const NumericMetricValue& numericMetricValue) :
    m_metricQuality(numericMetricValue.metricQuality()),
    m_annotations(numericMetricValue.annotations()),
    m_startTime(numericMetricValue.startTime()),
    m_stopTime(numericMetricValue.stopTime()),
    m_determinationTime(numericMetricValue.determinationTime()),
    m_value(numericMetricValue.value()),
    m_extensions(numericMetricValue.extensions())
{
}

inline NumericMetricValueBuilder::NumericMetricValueBuilder(const DFL::NotNull<SharedPtr<NumericMetricValue>>& numericMetricValue) :
    m_metricQuality(numericMetricValue->metricQuality()),
    m_annotations(numericMetricValue->annotations()),
    m_startTime(numericMetricValue->startTime()),
    m_stopTime(numericMetricValue->stopTime()),
    m_determinationTime(numericMetricValue->determinationTime()),
    m_value(numericMetricValue->value()),
    m_extensions(numericMetricValue->extensions())
{
}

inline NumericMetricValueBuilder& NumericMetricValueBuilder::operator=(const NumericMetricValue& numericMetricValue)
{
    m_metricQuality = numericMetricValue.metricQuality();
    m_annotations = numericMetricValue.annotations();
    m_startTime = numericMetricValue.startTime();
    m_stopTime = numericMetricValue.stopTime();
    m_determinationTime = numericMetricValue.determinationTime();
    m_value = numericMetricValue.value();
    m_extensions = numericMetricValue.extensions();
    return *this;
}

inline NumericMetricValue NumericMetricValueBuilder::build() const
{
    // NOLINTNEXTLINE(modernize-return-braced-init-list)
    return NumericMetricValue(m_metricQuality, m_annotations, m_startTime, m_stopTime, m_determinationTime, m_value, m_extensions);
}

inline bool NumericMetricValueBuilder::isChanged(const NumericMetricValue& base) const
{
    return *this != base;
}

inline NumericMetricValueBuilder& NumericMetricValueBuilder::metricQuality(const MetricQuality& metricQuality)
{
    m_metricQuality = metricQuality;
    return *this;
}

inline NumericMetricValueBuilder& NumericMetricValueBuilder::metricQuality(MetricQuality&& metricQuality)
{
    m_metricQuality = std::move(metricQuality);
    return *this;
}

inline MetricQuality& NumericMetricValueBuilder::metricQuality()
{
    return m_metricQuality;
}

inline const MetricQuality& NumericMetricValueBuilder::metricQuality() const
{
    return m_metricQuality;
}

inline NumericMetricValueBuilder& NumericMetricValueBuilder::annotations(const Annotations& annotations)
{
    m_annotations = annotations;
    return *this;
}

inline NumericMetricValueBuilder& NumericMetricValueBuilder::annotations(Annotations&& annotations)
{
    m_annotations = std::move(annotations);
    return *this;
}

inline Annotations& NumericMetricValueBuilder::annotations()
{
    return m_annotations;
}

inline const Annotations& NumericMetricValueBuilder::annotations() const
{
    return m_annotations;
}

inline NumericMetricValueBuilder& NumericMetricValueBuilder::startTime(const boost::optional<Timestamp>& startTime)
{
    m_startTime = startTime;
    return *this;
}

inline NumericMetricValueBuilder& NumericMetricValueBuilder::startTime(boost::optional<Timestamp>&& startTime)
{
    m_startTime = std::move(startTime);
    return *this;
}

inline boost::optional<Timestamp>& NumericMetricValueBuilder::startTime()
{
    return m_startTime;
}

inline const boost::optional<Timestamp>& NumericMetricValueBuilder::startTime() const
{
    return m_startTime;
}

inline NumericMetricValueBuilder& NumericMetricValueBuilder::stopTime(const boost::optional<Timestamp>& stopTime)
{
    m_stopTime = stopTime;
    return *this;
}

inline NumericMetricValueBuilder& NumericMetricValueBuilder::stopTime(boost::optional<Timestamp>&& stopTime)
{
    m_stopTime = std::move(stopTime);
    return *this;
}

inline boost::optional<Timestamp>& NumericMetricValueBuilder::stopTime()
{
    return m_stopTime;
}

inline const boost::optional<Timestamp>& NumericMetricValueBuilder::stopTime() const
{
    return m_stopTime;
}

inline NumericMetricValueBuilder& NumericMetricValueBuilder::determinationTime(const boost::optional<Timestamp>& determinationTime)
{
    m_determinationTime = determinationTime;
    return *this;
}

inline NumericMetricValueBuilder& NumericMetricValueBuilder::determinationTime(boost::optional<Timestamp>&& determinationTime)
{
    m_determinationTime = std::move(determinationTime);
    return *this;
}

inline boost::optional<Timestamp>& NumericMetricValueBuilder::determinationTime()
{
    return m_determinationTime;
}

inline const boost::optional<Timestamp>& NumericMetricValueBuilder::determinationTime() const
{
    return m_determinationTime;
}

inline NumericMetricValueBuilder& NumericMetricValueBuilder::value(const boost::optional<Decimal>& value)
{
    m_value = value;
    return *this;
}

inline NumericMetricValueBuilder& NumericMetricValueBuilder::value(boost::optional<Decimal>&& value)
{
    m_value = std::move(value);
    return *this;
}

inline boost::optional<Decimal>& NumericMetricValueBuilder::value()
{
    return m_value;
}

inline const boost::optional<Decimal>& NumericMetricValueBuilder::value() const
{
    return m_value;
}

inline NumericMetricValueBuilder& NumericMetricValueBuilder::extensions(const ExtensionTypes& extensions)
{
    m_extensions = extensions;
    return *this;
}

inline NumericMetricValueBuilder& NumericMetricValueBuilder::extensions(ExtensionTypes&& extensions)
{
    m_extensions = std::move(extensions);
    return *this;
}

inline ExtensionTypes& NumericMetricValueBuilder::extensions()
{
    return m_extensions;
}

inline const ExtensionTypes& NumericMetricValueBuilder::extensions() const
{
    return m_extensions;
}

inline bool operator==(const NumericMetricValue& lhs, const NumericMetricValueBuilder& rhs)
{
    return rhs == lhs;
}

inline bool operator!=(const NumericMetricValueBuilder& lhs, const NumericMetricValueBuilder& rhs)
{
    return !(lhs == rhs);
}

inline bool operator!=(const NumericMetricValue& lhs, const NumericMetricValueBuilder& rhs)
{
    return !(lhs == rhs);
}

inline bool operator!=(const NumericMetricValueBuilder& lhs, const NumericMetricValue& rhs)
{
    return !(lhs == rhs);
}

inline NumericMetricValueBuilder getBuilder(const NumericMetricValue& numericMetricValue)
{
    return NumericMetricValueBuilder(numericMetricValue);
}

inline NumericMetricValueBuilder getBuilder(const DFL::NotNull<SharedPtr<NumericMetricValue>>& numericMetricValue)
{
    return NumericMetricValueBuilder(numericMetricValue);
}

}
}
