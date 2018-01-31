/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.8 at Tue Oct 24 20:47:17 2017. */

#include "at_setting.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t PB_AtSmsSetting_fields[5] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, PB_AtSmsSetting, csmpFo, csmpFo, 0),
    PB_FIELD(  2, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSmsSetting, csdhShow, csmpFo, 0),
    PB_FIELD(  3, MESSAGE , REPEATED, CALLBACK, OTHER, PB_AtSmsSetting, smsInfo, csdhShow, &PB_AtSmsSetting_AtSmsInfo_fields),
    PB_FIELD(  4, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSmsSetting, smsFormat, smsInfo, 0),
    PB_LAST_FIELD
};

const pb_field_t PB_AtSmsSetting_AtSmsInfo_fields[14] = {
    PB_FIELD(  1, MESSAGE , REQUIRED, STATIC  , FIRST, PB_AtSmsSetting_AtSmsInfo, sCnmi, sCnmi, &PB_AtSmsSetting_AtSmsInfo_AtCnMi_fields),
    PB_FIELD(  2, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSmsSetting_AtSmsInfo, nStorage1, sCnmi, 0),
    PB_FIELD(  3, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSmsSetting_AtSmsInfo, nStorage2, nStorage1, 0),
    PB_FIELD(  4, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSmsSetting_AtSmsInfo, nStorage3, nStorage2, 0),
    PB_FIELD(  5, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSmsSetting_AtSmsInfo, nTotal1, nStorage3, 0),
    PB_FIELD(  6, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSmsSetting_AtSmsInfo, nTotal2, nTotal1, 0),
    PB_FIELD(  7, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSmsSetting_AtSmsInfo, nTotal3, nTotal2, 0),
    PB_FIELD(  8, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSmsSetting_AtSmsInfo, nUsed1, nTotal3, 0),
    PB_FIELD(  9, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSmsSetting_AtSmsInfo, nUsed2, nUsed1, 0),
    PB_FIELD( 10, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSmsSetting_AtSmsInfo, nUsed3, nUsed2, 0),
    PB_FIELD( 11, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSmsSetting_AtSmsInfo, nServType, nUsed3, 0),
    PB_FIELD( 12, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSmsSetting_AtSmsInfo, nOverflowCtrl, nServType, 0),
    PB_FIELD( 13, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSmsSetting_AtSmsInfo, nOverflowMode, nOverflowCtrl, 0),
    PB_LAST_FIELD
};

const pb_field_t PB_AtSmsSetting_AtSmsInfo_AtCnMi_fields[6] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, PB_AtSmsSetting_AtSmsInfo_AtCnMi, nMode, nMode, 0),
    PB_FIELD(  2, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSmsSetting_AtSmsInfo_AtCnMi, nMt, nMode, 0),
    PB_FIELD(  3, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSmsSetting_AtSmsInfo_AtCnMi, nBm, nMt, 0),
    PB_FIELD(  4, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSmsSetting_AtSmsInfo_AtCnMi, nDs, nBm, 0),
    PB_FIELD(  5, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSmsSetting_AtSmsInfo_AtCnMi, nBfr, nDs, 0),
    PB_LAST_FIELD
};

const pb_field_t PB_AtSetting_fields[51] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, PB_AtSetting, resultCodePresent, resultCodePresent, 0),
    PB_FIELD(  2, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting, resultCodeFormat, resultCodePresent, 0),
    PB_FIELD(  3, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting, commandEchoMode, resultCodeFormat, 0),
    PB_FIELD(  4, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting, nS3, commandEchoMode, 0),
    PB_FIELD(  5, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting, nS4, nS3, 0),
    PB_FIELD(  6, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting, nS5, nS4, 0),
    PB_FIELD(  7, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting, cmee, nS5, 0),
    PB_FIELD(  8, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting, cgreg, cmee, 0),
    PB_FIELD(  9, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting, crc, cgreg, 0),
    PB_FIELD( 10, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting, rxfc, crc, 0),
    PB_FIELD( 11, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting, txfc, rxfc, 0),
    PB_FIELD( 12, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting, icfFormat, txfc, 0),
    PB_FIELD( 13, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting, icfParity, icfFormat, 0),
    PB_FIELD( 14, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting, dtrData, icfParity, 0),
    PB_FIELD( 15, STRING  , REQUIRED, CALLBACK, OTHER, PB_AtSetting, cmerInd, dtrData, 0),
    PB_FIELD( 16, MESSAGE , REQUIRED, STATIC  , OTHER, PB_AtSetting, cfgInfo, cmerInd, &PB_AtSetting_PB_CfgInfo_fields),
    PB_FIELD( 17, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting, cc_VTD, cfgInfo, 0),
    PB_FIELD( 18, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting, cc_s0, cc_VTD, 0),
    PB_FIELD( 19, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting, gprsAuto, cc_s0, 0),
    PB_FIELD( 20, FIXED32 , REQUIRED, STATIC  , OTHER, PB_AtSetting, baudRate, gprsAuto, 0),
    PB_FIELD( 21, STRING  , REQUIRED, CALLBACK, OTHER, PB_AtSetting, operFormat, baudRate, 0),
    PB_FIELD( 22, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting, copsModeTemp, operFormat, 0),
    PB_FIELD( 23, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting, preferredOperFormat, copsModeTemp, 0),
    PB_FIELD( 24, STRING  , REQUIRED, CALLBACK, OTHER, PB_AtSetting, preferredOperator, preferredOperFormat, 0),
    PB_FIELD( 25, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting, preferredOperatorIndex, preferredOperator, 0),
    PB_FIELD( 26, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting, preferredOperatorCaller, preferredOperatorIndex, 0),
    PB_FIELD( 27, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting, pbkListEntryCaller, preferredOperatorCaller, 0),
    PB_FIELD( 28, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting, pbkCharacterSet, pbkListEntryCaller, 0),
    PB_FIELD( 29, FIXED32 , REQUIRED, STATIC  , OTHER, PB_AtSetting, tempStorage, pbkCharacterSet, 0),
    PB_FIELD( 30, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting, alphabet, tempStorage, 0),
    PB_FIELD( 31, MESSAGE , REQUIRED, STATIC  , OTHER, PB_AtSetting, smsSetting, alphabet, &PB_AtSmsSetting_fields),
    PB_FIELD( 32, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting, callWaitingPresentResultCode, smsSetting, 0),
    PB_FIELD( 33, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting, ussd, callWaitingPresentResultCode, 0),
    PB_FIELD( 34, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting, ucClip, ussd, 0),
    PB_FIELD( 35, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting, ucClir, ucClip, 0),
    PB_FIELD( 36, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting, ucColp, ucClir, 0),
    PB_FIELD( 37, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting, ucCSSU, ucColp, 0),
    PB_FIELD( 38, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting, ucCSSI, ucCSSU, 0),
    PB_FIELD( 39, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting, moniPara, ucCSSI, 0),
    PB_FIELD( 40, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting, monpPara, moniPara, 0),
    PB_FIELD( 41, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting, pmIndMark, monpPara, 0),
    PB_FIELD( 42, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting, vgrVolume, pmIndMark, 0),
    PB_FIELD( 43, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting, vgtVolume, vgrVolume, 0),
    PB_FIELD( 44, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting, cmutMute, vgtVolume, 0),
    PB_FIELD( 45, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting, audioTestMode, cmutMute, 0),
    PB_FIELD( 46, MESSAGE , REQUIRED, STATIC  , OTHER, PB_AtSetting, tcpip, audioTestMode, &PB_AtSetting_AtTcpipSetting_fields),
    PB_FIELD( 47, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting, secUartEnable, tcpip, 0),
    PB_FIELD( 48, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting, secUartBaud, secUartEnable, 0),
    PB_FIELD( 49, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting, secUartIcfFormat, secUartBaud, 0),
    PB_FIELD( 50, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting, secUartIcfParity, secUartIcfFormat, 0),
    PB_LAST_FIELD
};

const pb_field_t PB_AtSetting_PB_CfgInfo_fields[5] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, PB_AtSetting_PB_CfgInfo, ind_ctrl_mask, ind_ctrl_mask, 0),
    PB_FIELD(  2, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting_PB_CfgInfo, sind_ctrl_mask, ind_ctrl_mask, 0),
    PB_FIELD(  3, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting_PB_CfgInfo, te_chset, sind_ctrl_mask, 0),
    PB_FIELD(  4, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting_PB_CfgInfo, mt_chset, te_chset, 0),
    PB_LAST_FIELD
};

const pb_field_t PB_AtSetting_AtTcpipSetting_fields[28] = {
    PB_FIELD(  5, UINT32  , REQUIRED, STATIC  , FIRST, PB_AtSetting_AtTcpipSetting, cipSCONT_unSaved, cipSCONT_unSaved, 0),
    PB_FIELD(  6, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting_AtTcpipSetting, cipMux_multiIp, cipSCONT_unSaved, 0),
    PB_FIELD(  7, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting_AtTcpipSetting, cipHEAD_addIpHead, cipMux_multiIp, 0),
    PB_FIELD(  8, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting_AtTcpipSetting, cipSHOWTP_dispTP, cipHEAD_addIpHead, 0),
    PB_FIELD(  9, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting_AtTcpipSetting, cipSRIP_showIPPort, cipSHOWTP_dispTP, 0),
    PB_FIELD( 10, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting_AtTcpipSetting, cipATS_setTimer, cipSRIP_showIPPort, 0),
    PB_FIELD( 11, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting_AtTcpipSetting, cipATS_time, cipATS_setTimer, 0),
    PB_FIELD( 12, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting_AtTcpipSetting, cipSPRT_sendPrompt, cipATS_time, 0),
    PB_FIELD( 13, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting_AtTcpipSetting, cipQSEND_quickSend, cipSPRT_sendPrompt, 0),
    PB_FIELD( 14, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting_AtTcpipSetting, cipMODE_transParent, cipQSEND_quickSend, 0),
    PB_FIELD( 15, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting_AtTcpipSetting, cipCCFG_NmRetry, cipMODE_transParent, 0),
    PB_FIELD( 16, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting_AtTcpipSetting, cipCCFG_WaitTm, cipCCFG_NmRetry, 0),
    PB_FIELD( 17, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting_AtTcpipSetting, cipCCFG_SendSz, cipCCFG_WaitTm, 0),
    PB_FIELD( 18, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting_AtTcpipSetting, cipCCFG_esc, cipCCFG_SendSz, 0),
    PB_FIELD( 19, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting_AtTcpipSetting, cipCCFG_Rxmode, cipCCFG_esc, 0),
    PB_FIELD( 20, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting_AtTcpipSetting, cipCCFG_RxSize, cipCCFG_Rxmode, 0),
    PB_FIELD( 21, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting_AtTcpipSetting, cipCCFG_Rxtimer, cipCCFG_RxSize, 0),
    PB_FIELD( 22, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting_AtTcpipSetting, cipDPDP_detectPDP, cipCCFG_Rxtimer, 0),
    PB_FIELD( 23, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting_AtTcpipSetting, cipDPDP_interval, cipDPDP_detectPDP, 0),
    PB_FIELD( 24, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting_AtTcpipSetting, cipDPDP_timer, cipDPDP_interval, 0),
    PB_FIELD( 25, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting_AtTcpipSetting, cipCSGP_setGprs, cipDPDP_timer, 0),
    PB_FIELD( 26, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting_AtTcpipSetting, cipRDTIMER_rdsigtimer, cipCSGP_setGprs, 0),
    PB_FIELD( 27, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting_AtTcpipSetting, cipRDTIMER_rdmuxtimer, cipRDTIMER_rdsigtimer, 0),
    PB_FIELD( 28, UINT32  , REQUIRED, STATIC  , OTHER, PB_AtSetting_AtTcpipSetting, cipRXGET_manualy, cipRDTIMER_rdmuxtimer, 0),
    PB_FIELD( 29, STRING  , REQUIRED, CALLBACK, OTHER, PB_AtSetting_AtTcpipSetting, cipApn, cipRXGET_manualy, 0),
    PB_FIELD( 30, STRING  , REQUIRED, CALLBACK, OTHER, PB_AtSetting_AtTcpipSetting, cipUserName, cipApn, 0),
    PB_FIELD( 31, STRING  , REQUIRED, CALLBACK, OTHER, PB_AtSetting_AtTcpipSetting, cipPassWord, cipUserName, 0),
    PB_LAST_FIELD
};


/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(PB_AtSmsSetting_AtSmsInfo, sCnmi) < 65536 && pb_membersize(PB_AtSetting, cfgInfo) < 65536 && pb_membersize(PB_AtSetting, smsSetting) < 65536 && pb_membersize(PB_AtSetting, tcpip) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_PB_AtSmsSetting_PB_AtSmsSetting_AtSmsInfo_PB_AtSmsSetting_AtSmsInfo_AtCnMi_PB_AtSetting_PB_AtSetting_PB_CfgInfo_PB_AtSetting_AtTcpipSetting)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(PB_AtSmsSetting_AtSmsInfo, sCnmi) < 256 && pb_membersize(PB_AtSetting, cfgInfo) < 256 && pb_membersize(PB_AtSetting, smsSetting) < 256 && pb_membersize(PB_AtSetting, tcpip) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_PB_AtSmsSetting_PB_AtSmsSetting_AtSmsInfo_PB_AtSmsSetting_AtSmsInfo_AtCnMi_PB_AtSetting_PB_AtSetting_PB_CfgInfo_PB_AtSetting_AtTcpipSetting)
#endif


/* @@protoc_insertion_point(eof) */