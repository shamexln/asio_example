/****************************************************************************************
 *
 * DO NOT EDIT THIS FILE MANUALLY
 * THIS FILE IS GENERATED FROM
 * DOORS:/S31/Design Input/NonRegulatory/S31 Remos Codes
 * Exported data is based on BASELINE: 0.10 
 *
 *
 * @brief File contains REMOS error codes to be used in %S31 software.
 * @ingroup S31ErrorGroup
 *
 **************************************************************************************/

#ifndef S31_GENERATED_ERROR_CODES_H
#define S31_GENERATED_ERROR_CODES_H

namespace S31::Error::RemosCodes
{

/**
 * @brief Network cable disconnected.
 *
 * @details
 * Function:
 * No SDC communication possible.
 *
 * Solution:
 * Check connection of network cable.
 */
static const unsigned int REMOS_ERR_NO_SDC_COMMUNICATION = 10;

/**
 * @brief Certificate expires in less than 3 months.
 *
 * @details
 * Function:
 * No SDC communication possible.
 *
 * Solution:
 * Renew SDC certificate on device.
 */
static const unsigned int REMOS_ERR_CERTIFICATE_EXPIRES_SOON = 11;

/**
 * @brief Certificate is expired.
 *
 * @details
 * Function:
 * No SDC communication possible.
 *
 * Solution:
 * Renew SDC certificate on device.
 */
static const unsigned int REMOS_ERR_CERTIFICATE_IS_EXPIRED = 12;

/**
 * @brief Location is not configured properly.
 *
 * @details
 * Function:
 * No SDC communication possible.
 *
 * Solution:
 * Check location settings in MIB of the device or correct and confirm location on connected Medibus device.
 */
static const unsigned int REMOS_ERR_INVALID_LOCATION = 13;

/**
 * @brief ConnectivityConverter with same location detected.
 *
 * @details
 * Function:
 * No SDC communication possible.
 *
 * Solution:
 * Check location configuration of devices with same location.
 */
static const unsigned int REMOS_ERR_DUPLICATE_DEVICE_AT_LOCATION = 14;

/**
 * @brief No other SDC device in same (sub) network, or with same location.
 *
 * @details
 * Function:
 * No SDC communication.
 *
 * Solution:
 * Check location configuration of devices with same location.
 */
static const unsigned int REMOS_ERR_NO_SDC_CLIENT_CONNECTED = 15;

/**
 * @brief Certificate is not yet valid.
 *
 * @details
 * Function:
 * No SDC communication possible.
 *
 * Solution:
 * Correct system time.
 */
static const unsigned int REMOS_ERR_CERTIFICATE_IS_NOT_YET_VALID = 16;

/**
 * @brief NTP host name could not be resolved.
 *
 * @details
 * Function:
 * No time synchronization possible.
 *
 * Solution:
 * Check if DNS is running, replace host name with IP.
 */
static const unsigned int REMOS_ERR_NTP_HOST_COULD_NOT_BE_RESOLVED = 17;

/**
 * @brief NTP server does not respond to request.
 *
 * @details
 * Function:
 * No time synchronization possible.
 *
 * Solution:
 * Check if network is available, check if NTP server is available.
 */
static const unsigned int REMOS_ERR_NTP_SERVER_DOES_NOT_RESPOND_TO_REQUEST = 18;

/**
 * @brief UDP socket could not be opened.
 *
 * @details
 * Function:
 * No time synchronization possible.
 *
 * Solution:
 * Check firewall settings, check if NTP server is not exhausted.
 */
static const unsigned int REMOS_ERR_NTP_UDP_SOCKET_COULD_NOT_BE_OPENED = 19;

/**
 * @brief Unrecoverable NTP error.
 *
 * @details
 * Function:
 * No time synchronization possible.
 *
 * Solution:
 * Check log for further failure description.
 */
static const unsigned int REMOS_ERR_UNRECOVERABLE_NTP_ERROR = 20;

/**
 * @brief Another device of the same type and with the same location appeared in the network.
 *
 * @details
 * Function:
 * Same MDS type found.
 *
 * Solution:
 * Change location from one of the device duplicates such that no match exist anymore.
 */
static const unsigned int REMOS_ERR_SAME_MDS_TYPE_FOUND = 21;

/**
 * @brief Another device of the same (MDS) type (e.g., ventilator, monitor) and with the same, validated location appeared in the network.
 *
 * @details
 * Function:
 * Same MDS type found.
 *
 * Solution:
 * Change location from one of the device duplicates such that no match exist anymore.
 */
static const unsigned int REMOS_ERR_SAME_MDS_TYPE_FOUND_WITH_VALIDATED_LOCATION = 22;

/**
 * @brief Auto Validation is set in device.
 *
 * @details
 * Function:
 * Fixed configuration is used and change location rejected.
 *
 * Solution:
 * Remove autovalidation in device, when connected devices always can set the location or do not try to change location in connected medibus.x device.
 */
static const unsigned int REMOS_ERR_LOCATION_FROM_DEVICE_WHEN_AUTO_VALIDATION_IS_ON = 23;

/**
 * @brief UseFixedLocation is set in device.
 *
 * @details
 * Function:
 * Fixed configuration is used and location change rejected.
 *
 * Solution:
 * Remove UseFixedLocation in device. Location may only change if UseFixedLocation is set to false in device.
 */
static const unsigned int REMOS_ERR_LOCATION_FROM_DEVICE_WHEN_USE_FIXED_LOCATION_IS_ON = 143;

/**
 * @brief General Software Error detected.
 *
 * @details
 * Function:
 * No SDC communication possible.
 *
 * Solution:
 * Check log for further failure description.
 */
static const unsigned int REMOS_ERR_GENERAL_SOFTWARE_ERROR = 100;

/**
 * @brief SDC product option is not set.
 *
 * @details
 * Function:
 * No SDC communication possible.
 *
 * Solution:
 * Activate SDC option.
 */
static const unsigned int REMOS_ERR_SDC_PRODUCT_OPTION_IS_NOT_SET = 101;

/**
 * @brief Some data received from another SDC device are invalid.
 *
 * @details
 * Function:
 * Some data received from another SDC device are invalid.
 *
 * Solution:
 * Check that all connected SDC devices have compatible software.
 */
static const unsigned int REMOS_ERR_INCOMING_DATA_NOT_UNDERSTOOD = 102;

/**
 * @brief Certificate does not exist.
 *
 * @details
 * Function:
 * No SDC communication possible.
 *
 * Solution:
 * Renew SDC certificate on device.
 */
static const unsigned int REMOS_ERR_NO_CERTIFICATE = 103;

/**
 * @brief Certificate does not contain extended key usage extension.
 *
 * @details
 * Function:
 * No SDC communication possible.
 *
 * Solution:
 * Renew SDC certificate on device.
 */
static const unsigned int REMOS_ERR_CERTIFICATE_IS_NOT_AUTHORIZED = 104;

/**
 * @brief New location was set.
 */
static const unsigned int REMOS_ERR_NEW_LOCATION_WAS_SET = 105;

/**
 * @brief Location cleared or not validated.
 */
static const unsigned int REMOS_ERR_LOCATION_CLEARED_OR_NOT_VALIDATED = 106;

/**
 * @brief Connected to workplace device.
 */
static const unsigned int REMOS_ERR_CONNECTED_TO_WORKPLACE_DEVICE = 107;

/**
 * @brief Disconnected from workplace device.
 */
static const unsigned int REMOS_ERR_DISCONNECTED_FROM_WORKPLACE_DEVICE = 108;

/**
 * @brief Local NTP server changed .
 */
static const unsigned int REMOS_ERR_LOCAL_NTP_SERVER_CHANGED_ = 109;

/**
 * @brief Received NTP server changed.
 */
static const unsigned int REMOS_ERR_RECEIVED_NTP_SERVER_CHANGED = 110;

/**
 * @brief Local time zone changed.
 */
static const unsigned int REMOS_ERR_LOCAL_TIME_ZONE_CHANGED = 111;

/**
 * @brief Received time zone changed.
 */
static const unsigned int REMOS_ERR_RECEIVED_TIME_ZONE_CHANGED = 112;

/**
 * @brief Send time zone to connected devices.
 */
static const unsigned int REMOS_ERR_SEND_TIME_ZONE_TO_CONNECTED_DEVICES = 113;

/**
 * @brief Send NTP server to connected devices.
 */
static const unsigned int REMOS_ERR_SEND_NTP_SERVER_TO_CONNECTED_DEVICES = 114;

/**
 * @brief Nodes is now connected.
 */
static const unsigned int REMOS_ERR_NODES_IS_NOW_CONNECTED = 115;

/**
 * @brief Nodes is now disconnected.
 */
static const unsigned int REMOS_ERR_NODES_IS_NOW_DISCONNECTED = 116;

/**
 * @brief send patient demographics to device.
 */
static const unsigned int REMOS_ERR_SEND_PATIENT_DEMOGRAPHICS_TO_DEVICE = 117;

/**
 * @brief Language changed.
 */
static const unsigned int REMOS_ERR_LANGUAGE_CHANGED = 118;

/**
 * @brief The provided Role Autorization List is invalid.
 *
 * @details
 * Function:
 * Role Autorization List invalid.
 *
 * Solution:
 * Install a valid Role Autorization List in the crypto store of the device.
 */
static const unsigned int REMOS_ERR_ROLE_AUTORIZATION_LIST_INVALID = 166;

/**
 * @brief Connection to device was rejected because the maximum number of connections was reached already.
 *
 * @details
 * Function:
 * Reject connection to device.
 */
static const unsigned int REMOS_ERR_REJECT_CONNECTION_TO_DEVICE = 119;

/**
 * @brief Device info.
 */
static const unsigned int REMOS_ERR_MATERIAL_AND_SERIAL_NUMBER_OF_THE_DEVICE = 120;

/**
 * @brief No certificate installed or certificate cannot be verified by Root Certificate.
 *
 * @details
 * Function:
 * No SDC communication possible.
 *
 * Solution:
 * Renew SDC certificate on device.
 */
static const unsigned int REMOS_ERR_NO_CERTIFICATE_CHAIN_AVAILABLE = 121;

/**
 * @brief Certificate cannot be verified by Root Certificate.
 *
 * @details
 * Function:
 * No SDC communication possible.
 *
 * Solution:
 * Renew SDC certificate on device.
 */
static const unsigned int REMOS_ERR_CERTIFICATE_VERIFICATION_ERROR = 122;

/**
 * @brief Certificate chain is invalid. Certificate or intermediates do not match for Root certificate.
 *
 * @details
 * Function:
 * No SDC communication possible.
 *
 * Solution:
 * Renew SDC certificate on device.
 */
static const unsigned int REMOS_ERR_FOUND_INVALID_CHAIN_CERTIFICATE = 123;

/**
 * @brief Connection is rejected because peer's common name is not found in the whitelist.
 *
 * @details
 * Function:
 * No SDC communication possible.
 *
 * Solution:
 * Add peer certificate's common name in the whitelist.
 */
static const unsigned int REMOS_ERR_REMOTE_DEVICE_NOT_FOUND_IN_THE_WHITELIST = 124;

/**
 * @brief TLS connection established.
 */
static const unsigned int REMOS_ERR_TLS_CONNECTION_ESTABLISHED = 125;

/**
 * @brief Message received on the network cannot be processed.
 *
 * @details
 * Function:
 * Received network message cannot be processed .
 *
 * Solution:
 * Check whether the message being sent out is SDC compliant.
 */
static const unsigned int REMOS_ERR_RECEIVED_NETWORK_MESSAGE_CANNOT_BE_PROCESSED = 126;

/**
 * @brief Set operation invocation request received.
 */
static const unsigned int REMOS_ERR_SET_OPERATION_INVOCATION_REQUEST_RECEIVED = 128;

/**
 * @brief Set operation invocation success.
 */
static const unsigned int REMOS_ERR_SET_OPERATION_INVOCATION_SUCCESS = 129;

/**
 * @brief Set operation invocation was rejected by the remote device because of the following reasons:
 * 1. Client invoking the operation does not have operation consumer role.
 * 2. Either the requested operation handle does not exist or it is not enabled in the Mdib.
 *
 * @details
 * Function:
 * Set operation invocation failure.
 *
 * Solution:
 * 1. Check whether the certificate of the client invoking the set operation has the operation consume role.
 * 2. Check whether the handle of the operation being invoked exists is the Mdib or whether it is enabled in the Mdib.
 */
static const unsigned int REMOS_ERR_SET_OPERATION_INVOCATION_FAILURE = 130;

/**
 * @brief One of the mandatory location fields is empty.
 *
 * @details
 * Function:
 * No SDC communication possible.
 */
static const unsigned int REMOS_ERR_INVALID_LOCATION_EMPTY_MANDATORY_FIELD = 131;

/**
 * @brief One of the location fields is too long (has more than 7 characters).
 *
 * @details
 * Function:
 * No SDC communication possible.
 */
static const unsigned int REMOS_ERR_INVALID_LOCATION_FIELD_TOO_LONG = 132;

/**
 * @brief One of the location fields has illegal characters. These characters are removed.
 *
 * @details
 * Function:
 * No SDC communication possible.
 */
static const unsigned int REMOS_ERR_INVALID_LOCATION_FIELD_HAS_INVALID_CHARACTER = 133;

/**
 * @brief Incoming SSL connection accept can fail due to the following reasons:
 * 1. Openssl API SSL_Accept failed.
 * 2. SSL certificate presented by peer cannot be verified.
 * 3. No SSL certificate was presented by the peer.
 * 4. No socket found.
 * 5. Openssl API SSL_new failed.
 *
 * @details
 * Function:
 * SSL connection error.
 *
 * Solution:
 * 1. Check whether the peer has a valid certificate.
 * 2. Check the error returned by openssl API to debug further.
 */
static const unsigned int REMOS_ERR_SSL_ACCEPT_ERROR = 134;

/**
 * @brief Outgoing SSL connection can fail due to the following reasons:
 * 1. Translation from an ANSI host name to an address failed.
 * 2. SSL required, but no context set.
 * 3. Openssl API SSL_new failed.
 * 4. Openssl API SSL_connect failed.
 * 5. SSL/TLS certificate presented by peer cannot be verified.
 * 6. No SSL/TLS certificate was presented by the peer.
 *
 * @details
 * Function:
 * TCP Connect Error.
 *
 * Solution:
 * 1. Check whether the peer has a valid certificate.
 * 2. Check the error returned by openssl API to debug further.
 */
static const unsigned int REMOS_ERR_SSL_CONNECT_ERROR = 135;

/**
 * @brief Outgoing SSL connection failed because the peer did not return any certificate.
 *
 * @details
 * Function:
 * No peer certificate found.
 *
 * Solution:
 * 1. Check whether the peer has a certificate.
 */
static const unsigned int REMOS_ERR_NO_PEER_CERTIFICATE = 136;

/**
 * @brief Whitelist is empty and has neither the Wildcard nor the common name of the peer.
 *
 * @details
 * Function:
 * Whitelist is empty.
 *
 * Solution:
 * Add either the wildcard or the common name of the peer to the whitelist.
 */
static const unsigned int REMOS_ERR_WHITELIST_IS_EMPTY = 137;

/**
 * @brief Incoming TLS connection establishment failed because one or more of the following roles are missing:
 * 1. TlsWebServerAuthentication (1.3.6.1.5.5.7.3.1)
 * 2. TlsWebClientAuthentication (1.3.6.1.5.5.7.3.2)
 * 3. SdcServiceProvider (1.2.840.10004.20701.1.1)
 * 4. SdcServiceConsumer (1.2.840.10004.20701.1.2).
 *
 * @details
 * Function:
 * SSL accept has failed due to the missing roles.
 *
 * Solution:
 * Check if the peer certificate has the following roles:
 * 1. TlsWebServerAuthentication (1.3.6.1.5.5.7.3.1)
 * 2. TlsWebClientAuthentication (1.3.6.1.5.5.7.3.2)
 * 3. SdcServiceProvider (1.2.840.10004.20701.1.1)
 * 4. SdcServiceConsumer (1.2.840.10004.20701.1.2).
 */
static const unsigned int REMOS_ERR_SSL_ACCEPT_ERROR_DUE_TO_MISSING_ROLES = 138;

/**
 * @brief Outgoing TLS connection establishment failed because one or more of the following roles are missing:
 * 1. TlsWebServerAuthentication (1.3.6.1.5.5.7.3.1)
 * 2. TlsWebClientAuthentication (1.3.6.1.5.5.7.3.2)
 * 3. SdcServiceProvider (1.2.840.10004.20701.1.1) or SdcServiceConsumer (1.2.840.10004.20701.1.2).
 *
 * @details
 * Function:
 * SSL Connect has failed due to the missing roles.
 *
 * Solution:
 * Check if the peer certificate has the following roles:
 * 1. TlsWebServerAuthentication (1.3.6.1.5.5.7.3.1)
 * 2. TlsWebClientAuthentication (1.3.6.1.5.5.7.3.2)
 * 3. SdcServiceProvider (1.2.840.10004.20701.1.1) or SdcServiceConsumer (1.2.840.10004.20701.1.2).
 */
static const unsigned int REMOS_ERR_SSL_CONNECT_ERROR_DUE_TO_MISSING_ROLES = 139;

/**
 * @brief The client has established a subscription to a remote data provider.
 *
 * @details
 * Function:
 * Client Subscription established to remote data provider.
 */
static const unsigned int REMOS_ERR_CLIENT_SUBSCRIPTION_STARTED = 140;

/**
 * @brief The client has cancelled a subscription to a remote data provider.
 *
 * @details
 * Function:
 * Client Subscription cancelled to remote data provider.
 */
static const unsigned int REMOS_ERR_CLIENT_SUBSCRIPTION_ENDED = 141;

/**
 * @brief This software (as build or configured) is not for clinical use.
 *
 * @details
 * Function:
 * Software is not allowed for clinical use.
 *
 * Solution:
 * Check is the software is a release build and properly configured.
 */
static const unsigned int REMOS_ERR_NOT_FOR_CLINICAL_USE = 142;

} // end namespace S31::Error::RemosCodes

#endif
