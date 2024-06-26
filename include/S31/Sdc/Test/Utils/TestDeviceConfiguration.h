#pragma once

#include <S31/History/Public/Service.h>
#include <S31/Localization/Public/Device/LocalizedTextStore.h>
#include <S31/Sdc/Public/Common/S31CoreFactory.h>
#include <S31/Sdc/Test/Utils/s31core_it_utils_exp_imp.h>

#include <Framework/Crypto/Public/AttributeTypeAndValue.h>
#include <Framework/Mdib/Public/MdibChangeSet.h>
#include <Framework/Mdib/Public/MdibConstraints.h>

#include <optional>

namespace S31::Sdc::Test
{

/**
 * @brief Configuration object for a @ref TestDevice.
 */
class S31_CORE_IT_UTIL_EXPIMP TestDeviceConfiguration
{
    public:
        /**
         * @brief Alias for the function to initially create a mdib.
         */
        using MdibFactoryFunction = std::function<DFL::NotNull<LocalMdibAccessUniquePtr> ()>;

        static MdibFactoryFunction DefaultMdib(const DFL::Mdib::MdibConstraints& constraints);

        /**
         * @brief Enum to control Test data generation.
         * @details This controls Vmd types and Mds types.
         */
        enum class GenerateTestData : int
        {
                VmdType_0 = 0,
                VmdType_1 = 1,
                VmdType_2 = 2,
                None
        };

        TestDeviceConfiguration();

        /**
         * @brief Setters for various configuration options of the Test Device.
         * @details These setters are used to directly replace certain configuration fields.
         */
         ///@{
        TestDeviceConfiguration& epr(EndpointReference epr);

        /// @brief Modify the factory function which creates the initial mdib.
        TestDeviceConfiguration& initialMdib(MdibFactoryFunction initialMdib);

        TestDeviceConfiguration& localizedTextStore(const std::shared_ptr<S31::Localization::Device::LocalizedTextStore>& localizedTextStore);

        TestDeviceConfiguration& historyService(const std::shared_ptr<History::Service>& historyService);

        TestDeviceConfiguration& coreConfiguration(CoreConfiguration configuration);

        TestDeviceConfiguration& compressionConfiguration(CompressionConfiguration compressionConfiguration);

        TestDeviceConfiguration& keyPurposes(DFL::Oids keyPurposes);
        ///@}

        /**
         * @brief Functions which allow manipulation of individual fields within the @ref S31::CoreConfiguration.
         * @details Depending on the invoked function, one or more fields in the internally held Core Configuration member are changed.
         */
         ///@{
        TestDeviceConfiguration& discoveryProxy(DFL::Net::Uri discoveryProxyAddress);
        TestDeviceConfiguration& customAppMaxDelay(DFL::Chrono::Milliseconds customAppMaxDelay);

        /// @brief This function provides a private key and certificate chain function for a specific common name.
        /// @details Since it overwrites the core configuration's @ref ProvideCertificateChainFunction and
        /// @ref ProvidePrivateKeyFunction, it should not be used in conjunction with @ref customEkuCertChain.
        ///@{
        TestDeviceConfiguration& customCommonNameCertChain(const std::string& commonName);
        TestDeviceConfiguration& customCommonNameCertChain(const DFL::Crypto::CommonName& commonName);
        ///@}

        /// @brief This function provides a private key and certificate chain function for specific EKU (roles).
        /// @details Since it overwrites the core configuration's @ref ProvideCertificateChainFunction and
        /// @ref ProvidePrivateKeyFunction, it should not be used in conjunction with @ref customCommonNameCertChain.
        TestDeviceConfiguration& customEkuCertChain(const DFL::Oids& extendedKeyUsage);

        /// @brief This function will modify the @ref WhitelistCheckFunction to contain only one specific peer.
        /// @details Since it overwrites the core configuration's @ref WhitelistCheckFunction, it should not
        /// be used in conjunction with @ref whitelistCheckFunction.
        ///@{
        TestDeviceConfiguration& whitelistWithOnePeer(std::string peerName);
        TestDeviceConfiguration& whitelistWithOnePeer(const DFL::Crypto::CommonName& peerName);
        ///@}

        /// @brief This function will replace the @ref WhitelistCheckFunction.
        /// @details Since it overwrites the core configuration's @ref WhitelistCheckFunction, it should not
        /// be used in conjunction with @ref whitelistWithOnePeer.
        TestDeviceConfiguration& whitelistCheckFunction(S31::WhitelistCheckFunction whitelistCheckFunction);
        ///@}

        /**
         * @brief This function controls whether to generate additional test data into the mdib after initial creation.
         * @details Test data is generated by using @ref S31::Test::TestDataGenerator::generateMdib().
         * The test data is generated into the mdib after its initial creation using the @ref m_initialMdib factory function
         * and before optionally applying a @ref applyChangeSet() "MdibChangeSet"
         * Per default, the mdib is not enriched with any test data.
         */
        TestDeviceConfiguration& generateTestData(GenerateTestData = GenerateTestData::VmdType_0);

        /** @brief In connection with @ref generateTestData() create a @ref DFL::Mdib::Mds that has the device name in an extension
         *  and metadata with model name and manufacturer.
         */
        TestDeviceConfiguration& withDeviceNameAndModelNameAndManufacturer();

        /**
         * @brief This function can be used to apply an @ref DFL::Mdib::MdibChangeSet "MdibChangeSet" to the mdib.
         * @details The ChangeSet is applied after initial creation and after optionally
         * @ref generateTestData() "generating test data" into the mdib.
         * Per default, no additional change set is applied to the mdib.
         */
        TestDeviceConfiguration& applyChangeSet(const DFL::Mdib::MdibChangeSet& changeSet);

        /**
         * @brief Use the RAL from the crypto store instead of the default one (a RAL that allows the test root)
         */
        TestDeviceConfiguration& useRalFromCryptoStore();

        /**
         * @brief numberOfThreads The number of thread used by the device (instead of the default one)
         */
        TestDeviceConfiguration& numberOfThreads(unsigned int value);

        /**
         * @brief This function will create the mdib for a device.
         * @details It will perform the following tasks in this order:
         *  - call the MdibFactoryFunction to create the initial mdib
         *  - optionally call TestDataGenerator::generateMdib() if this has been set via @ref generateTestData()
         *  - optionally apply the initial change set if one has been provided via @ref applyChangeSet()
         * @return
         */
        DFL::NotNull<DFL::Mdib::LocalMdibAccessUniquePtr> createMdib();



        /**
         * @brief This function is used to create the initial mdib.
         */
        MdibFactoryFunction m_initialMdib;
        DFL::Mdib::MdibChangeSet m_mdibChangeSet;
        GenerateTestData m_testDataSelector = GenerateTestData::None;
        bool m_deviceNameAndModelNameAndManufacturer = false;

        EndpointReference m_epr;
        std::shared_ptr<S31::Localization::Device::LocalizedTextStore> m_localizedTextStore;
        std::shared_ptr<History::Service> m_historyService;
        CoreConfiguration m_coreConfiguration;
        CompressionConfiguration m_compressionConfiguration;
        DFL::Oids m_keyPurposes;
        std::optional<unsigned int> m_numberOfThreads{};
};

}
