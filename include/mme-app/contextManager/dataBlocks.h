
/*
 * Copyright 2019-present, Infosys Limited.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef DGM_BLOCKSTRUCTURES_H
#define DGM_BLOCKSTRUCTURES_H
/**************************************
 *
 * This is an auto generated file.
 * Please do not edit this file.
 * All edits to be made through template source file
 * <TOP-DIR/scripts/SMCodeGen/templates/ctxtManagerTmpls/dataBlocks.h.tt>
 ***************************************/
#include "permDataBlock.h"
#include "tempDataBlock.h"
#include <structs.h>
#include <utils/mmeCauseTypes.h>
#include <utils/mmeProcedureTypes.h>

namespace mme
{
	class UEContext;
	class MmContext;
	class SessionContext;
	class BearerContext;
	class MmeProcedureCtxt;
	class MmeAttachProcedureCtxt;
	class MmeDetachProcedureCtxt;
	class MmeS1RelProcedureCtxt;
	class MmeSvcReqProcedureCtxt;
	class MmeTauProcedureCtxt;
	class S1HandoverProcedureContext;
	 
	class UEContext:public SM::PermDataBlock
	{
		public:
	
			/****************************************
			* UEContext
			*    constructor
			****************************************/
			UEContext();
			
			/****************************************
			* ~UEContext
			*    destructor
			****************************************/
			~UEContext();
			
			/****************************************
			* setEnbFd
			*    set enbFd to UEContext
			****************************************/
			void setEnbFd(int enbFd_i);
			
			/****************************************
			* getEnbFd
			*    get enbFd from UEContext
			****************************************/
			int getEnbFd()const;				
			
			/****************************************
			* setS1apEnbUeId
			*    set s1apEnbUeId to UEContext
			****************************************/
			void setS1apEnbUeId(int s1apEnbUeId_i);
			
			/****************************************
			* getS1apEnbUeId
			*    get s1apEnbUeId from UEContext
			****************************************/
			int getS1apEnbUeId()const;				
			
			/****************************************
			* setSubscriptionStatus
			*    set subscriptionStatus to UEContext
			****************************************/
			void setSubscriptionStatus(int subscriptionStatus_i);
			
			/****************************************
			* getSubscriptionStatus
			*    get subscriptionStatus from UEContext
			****************************************/
			int getSubscriptionStatus()const;				
			
			/****************************************
			* setNetAccessMode
			*    set netAccessMode to UEContext
			****************************************/
			void setNetAccessMode(int netAccessMode_i);
			
			/****************************************
			* getNetAccessMode
			*    get netAccessMode from UEContext
			****************************************/
			int getNetAccessMode()const;				
			
			/****************************************
			* setContextID
			*    set contextID to UEContext
			****************************************/
			void setContextID(uint32_t contextID_i);
			
			/****************************************
			* getContextID
			*    get contextID from UEContext
			****************************************/
			uint32_t getContextID()const;				
			
			/****************************************
			* setRauTauTimer
			*    set rauTauTimer to UEContext
			****************************************/
			void setRauTauTimer(unsigned int rauTauTimer_i);
			
			/****************************************
			* getRauTauTimer
			*    get rauTauTimer from UEContext
			****************************************/
			unsigned int getRauTauTimer()const;				
			
			/****************************************
			* setAccessRestrictionData
			*    set accessRestrictionData to UEContext
			****************************************/
			void setAccessRestrictionData(unsigned int accessRestrictionData_i);
			
			/****************************************
			* getAccessRestrictionData
			*    get accessRestrictionData from UEContext
			****************************************/
			unsigned int getAccessRestrictionData()const;				
			
			/****************************************
			* setImsi
			*    set imsi to UEContext
			****************************************/
			void setImsi(const DigitRegister15& imsi_i);
			
			/****************************************
			* getImsi
			*    get imsi from UEContext
			****************************************/
			const DigitRegister15& getImsi()const;				
			
			/****************************************
			* setMsisdn
			*    set msisdn to UEContext
			****************************************/
			void setMsisdn(const DigitRegister15& msisdn_i);
			
			/****************************************
			* getMsisdn
			*    get msisdn from UEContext
			****************************************/
			const DigitRegister15& getMsisdn()const;				
			
			/****************************************
			* setUeState
			*    set ueState to UEContext
			****************************************/
			void setUeState(UE_State_e ueState_i);
			
			/****************************************
			* getUeState
			*    get ueState from UEContext
			****************************************/
			UE_State_e getUeState()const;				
			
			/****************************************
			* setTai
			*    set tai to UEContext
			****************************************/
			void setTai(const Tai& tai_i);
			
			/****************************************
			* getTai
			*    get tai from UEContext
			****************************************/
			const Tai& getTai()const;				
			
			/****************************************
			* setUtranCgi
			*    set utranCgi to UEContext
			****************************************/
			void setUtranCgi(const Cgi& utranCgi_i);
			
			/****************************************
			* getUtranCgi
			*    get utranCgi from UEContext
			****************************************/
			const Cgi& getUtranCgi()const;				
			
			/****************************************
			* setMsNetCapab
			*    set msNetCapab to UEContext
			****************************************/
			void setMsNetCapab(const Ms_net_capab& msNetCapab_i);
			
			/****************************************
			* getMsNetCapab
			*    get msNetCapab from UEContext
			****************************************/
			const Ms_net_capab& getMsNetCapab()const;				
			
			/****************************************
			* setUeNetCapab
			*    set ueNetCapab to UEContext
			****************************************/
			void setUeNetCapab(const Ue_net_capab& ueNetCapab_i);
			
			/****************************************
			* getUeNetCapab
			*    get ueNetCapab from UEContext
			****************************************/
			const Ue_net_capab& getUeNetCapab()const;				
			
			/****************************************
			* setUeSecInfo
			*    set ueSecInfo to UEContext
			****************************************/
			void setUeSecInfo(Secinfo& ueSecInfo_i);
			
			/****************************************
			* getUeSecInfo
			*    get ueSecInfo from UEContext
			****************************************/
			Secinfo& getUeSecInfo();
			
			/****************************************
			* setAmbr
			*    set ambr to UEContext
			****************************************/
			void setAmbr(const Ambr& ambr_i);
			
			/****************************************
			* getAmbr
			*    get ambr from UEContext
			****************************************/
			const Ambr& getAmbr()const;				
			
			/****************************************
			* setAiaSecInfo
			*    set aiaSecInfo to UEContext
			****************************************/
			void setAiaSecInfo(const E_utran_sec_vector& aiaSecInfo_i);
			
			/****************************************
			* getAiaSecInfo
			*    get aiaSecInfo from UEContext
			****************************************/
			const E_utran_sec_vector& getAiaSecInfo()const;				
			
			/****************************************
			* setMTmsi
			*    set mTmsi to UEContext
			****************************************/
			void setMTmsi(uint32_t mTmsi_i);
			
			/****************************************
			* getMTmsi
			*    get mTmsi from UEContext
			****************************************/
			uint32_t getMTmsi()const;				
			
			/****************************************
			* setSubscribedApn
			*    set subscribedApn to UEContext
			****************************************/
			void setSubscribedApn(const Apn_name& subscribedApn_i);
			
			/****************************************
			* getSubscribedApn
			*    get subscribedApn from UEContext
			****************************************/
			const Apn_name& getSubscribedApn()const;				
			
			/****************************************
			* setPdnAddr
			*    set pdnAddr to UEContext
			****************************************/
			void setPdnAddr(const Paa& pdnAddr_i);
			
			/****************************************
			* getPdnAddr
			*    get pdnAddr from UEContext
			****************************************/
			const Paa& getPdnAddr()const;
			
			/****************************************
			* setMmContext
			*    set MmContext to UEContext
			****************************************/
			void setMmContext( MmContext* MmContextp ) ;
			
			/****************************************
			* getMmContext
			*    get MmContext to UEContext
			****************************************/
			MmContext* getMmContext();
			
			/****************************************
			* setSessionContext
			*    set SessionContext to UEContext
			****************************************/
			void setSessionContext( SessionContext* SessionContextp ) ;
			
			/****************************************
			* getSessionContext
			*    get SessionContext to UEContext
			****************************************/
			SessionContext* getSessionContext();
			
		
		private:
		
			// DataName
			int enbFd_m;
			
			// DataName
			int s1apEnbUeId_m;
			
			// DataName
			int subscriptionStatus_m;
			
			// DataName
			int netAccessMode_m;
			
			// DataName
			uint32_t contextID_m;
			
			// DataName
			unsigned int rauTauTimer_m;
			
			// DataName
			unsigned int accessRestrictionData_m;
			
			// DataName
			DigitRegister15 imsi_m;
			
			// DataName
			DigitRegister15 msisdn_m;
			
			// DataName
			unsigned short dwnLnkSeqNo_m;
			
			// DataName
			unsigned short upLnkSeqNo_m;
			
			// DataName
			UE_State_e ueState_m;
			
			// DataName
			Tai tai_m;
			
			// DataName
			Cgi utranCgi_m;
			
			// DataName
			Ms_net_capab msNetCapab_m;
			
			// DataName
			Ue_net_capab ueNetCapab_m;
			
			// DataName
			Secinfo ueSecInfo_m;
			
			// DataName
			Ambr ambr_m;
			
			// DataName
			E_utran_sec_vector aiaSecInfo_m;
			
			// DataName
			uint32_t mTmsi_m;
			
			// DataName
			Apn_name subscribedApn_m;
			
			// DataName
			Paa pdnAddr_m;
			
			// MmContext
			MmContext* MmContext_mp;
			
			// SessionContext
			SessionContext* SessionContext_mp;
			
	};
	 
	class MmContext:public SM::PermDataBlock
	{
		public:
	
			/****************************************
			* MmContext
			*    constructor
			****************************************/
			MmContext();
			
			/****************************************
			* ~MmContext
			*    destructor
			****************************************/
			~MmContext();
			
			/****************************************
			* setMmState
			*    set mmState to MmContext
			****************************************/
			void setMmState(EmmState mmState_i);
			
			/****************************************
			* getMmState
			*    get mmState from MmContext
			****************************************/
			EmmState getMmState()const;				
			
			/****************************************
			* setEcmState
			*    set ecmState to MmContext
			****************************************/
			void setEcmState(EcmState ecmState_i);
			
			/****************************************
			* getEcmState
			*    get ecmState from MmContext
			****************************************/
			EcmState getEcmState()const;				
			
		
		private:
		
			// DataName
			EmmState mmState_m;
			
			// DataName
			EcmState ecmState_m;
			
	};
	 
	class SessionContext:public SM::PermDataBlock
	{
		public:
	
			/****************************************
			* SessionContext
			*    constructor
			****************************************/
			SessionContext();
			
			/****************************************
			* ~SessionContext
			*    destructor
			****************************************/
			~SessionContext();
			
			/****************************************
			* setSessionId
			*    set sessionId to SessionContext
			****************************************/
			void setSessionId(uint8_t sessionId_i);
			
			/****************************************
			* getSessionId
			*    get sessionId from SessionContext
			****************************************/
			uint8_t getSessionId()const;				
			
			/****************************************
			* setS11SgwCtrlFteid
			*    set s11SgwCtrlFteid to SessionContext
			****************************************/
			void setS11SgwCtrlFteid(const Fteid& s11SgwCtrlFteid_i);
			
			/****************************************
			* getS11SgwCtrlFteid
			*    get s11SgwCtrlFteid from SessionContext
			****************************************/
			const Fteid& getS11SgwCtrlFteid()const;				
			
			/****************************************
			* setS5S8PgwCtrlFteid
			*    set s5S8PgwCtrlFteid to SessionContext
			****************************************/
			void setS5S8PgwCtrlFteid(const Fteid& s5S8PgwCtrlFteid_i);
			
			/****************************************
			* getS5S8PgwCtrlFteid
			*    get s5S8PgwCtrlFteid from SessionContext
			****************************************/
			const Fteid& getS5S8PgwCtrlFteid()const;				
			
			/****************************************
			* setPdnAddr
			*    set pdnAddr to SessionContext
			****************************************/
			void setPdnAddr(const Paa& pdnAddr_i);
			
			/****************************************
			* getPdnAddr
			*    get pdnAddr from SessionContext
			****************************************/
			const Paa& getPdnAddr()const;				
			
			/****************************************
			* setAccessPtName
			*    set accessPtName to SessionContext
			****************************************/
			void setAccessPtName(const Apn_name& accessPtName_i);
			
			/****************************************
			* getAccessPtName
			*    get accessPtName from SessionContext
			****************************************/
			const Apn_name& getAccessPtName()const;				
			
			/****************************************
			* setApnConfigProfileCtxId
			*    set apnConfigProfileCtxId to SessionContext
			****************************************/
			void setApnConfigProfileCtxId(unsigned int apnConfigProfileCtxId_i);
			
			/****************************************
			* getApnConfigProfileCtxId
			*    get apnConfigProfileCtxId from SessionContext
			****************************************/
			unsigned int getApnConfigProfileCtxId()const;				
			
			/****************************************
			* setPti
			*    set pti to SessionContext
			****************************************/
			void setPti(uint8_t pti_i);
			
			/****************************************
			* getPti
			*    get pti from SessionContext
			****************************************/
			uint8_t getPti()const;				
			
			/****************************************
			* setBearerContext
			*    set BearerContext to SessionContext
			****************************************/
			void setBearerContext( BearerContext* BearerContextp ) ;
			
			/****************************************
			* getBearerContext
			*    get BearerContext to SessionContext
			****************************************/
			BearerContext* getBearerContext();
			
		
		private:
		
			// DataName
			uint8_t sessionId_m;
			
			// DataName
			Fteid s11SgwCtrlFteid_m;
			
			// DataName
			Fteid s5S8PgwCtrlFteid_m;
			
			// DataName
			Paa pdnAddr_m;
			
			// DataName
			Apn_name accessPtName_m;
			
			// DataName
			unsigned int apnConfigProfileCtxId_m;
			
			// DataName
			uint8_t pti_m;
			
			// BearerContext
			BearerContext* BearerContext_mp;
			
	};
	 
	class BearerContext:public SM::PermDataBlock
	{
		public:
	
			/****************************************
			* BearerContext
			*    constructor
			****************************************/
			BearerContext();
			
			/****************************************
			* ~BearerContext
			*    destructor
			****************************************/
			~BearerContext();
			
			/****************************************
			* setS1uSgwUserFteid
			*    set s1uSgwUserFteid to BearerContext
			****************************************/
			void setS1uSgwUserFteid(const Fteid& s1uSgwUserFteid_i);
			
			/****************************************
			* getS1uSgwUserFteid
			*    get s1uSgwUserFteid from BearerContext
			****************************************/
			const Fteid& getS1uSgwUserFteid()const;				
			
			/****************************************
			* setS5S8PgwUserFteid
			*    set s5S8PgwUserFteid to BearerContext
			****************************************/
			void setS5S8PgwUserFteid(const Fteid& s5S8PgwUserFteid_i);
			
			/****************************************
			* getS5S8PgwUserFteid
			*    get s5S8PgwUserFteid from BearerContext
			****************************************/
			const Fteid& getS5S8PgwUserFteid()const;				
			
			/****************************************
			* setS1uEnbUserFteid
			*    set s1uEnbUserFteid to BearerContext
			****************************************/
			void setS1uEnbUserFteid(const Fteid& s1uEnbUserFteid_i);
			
			/****************************************
			* getS1uEnbUserFteid
			*    get s1uEnbUserFteid from BearerContext
			****************************************/
			const Fteid& getS1uEnbUserFteid()const;				
			
			/****************************************
			* setBearerId
			*    set bearerId to BearerContext
			****************************************/
			void setBearerId(unsigned char bearerId_i);
			
			/****************************************
			* getBearerId
			*    get bearerId from BearerContext
			****************************************/
			unsigned char getBearerId()const;				
			
		
		private:
		
			// DataName
			Fteid s1uSgwUserFteid_m;
			
			// DataName
			Fteid s5S8PgwUserFteid_m;
			
			// DataName
			Fteid s1uEnbUserFteid_m;
			
			// DataName
			unsigned char bearerId_m;
			
	};
	 
	class MmeProcedureCtxt:public SM::TempDataBlock
	{
		public:
	
			/****************************************
			* MmeProcedureCtxt
			*    constructor
			****************************************/
			MmeProcedureCtxt();
			
			/****************************************
			* ~MmeProcedureCtxt
			*    destructor
			****************************************/
			~MmeProcedureCtxt();
			
			/****************************************
			* setCtxtType
			*    set ctxtType to MmeProcedureCtxt
			****************************************/
			void setCtxtType(ProcedureType ctxtType_i);
			
			/****************************************
			* getCtxtType
			*    get ctxtType from MmeProcedureCtxt
			****************************************/
			ProcedureType getCtxtType()const;				
			
			/****************************************
			* setMmeErrorCause
			*    set mmeErrorCause to MmeProcedureCtxt
			****************************************/
			void setMmeErrorCause(MmeErrorCause mmeErrorCause_i);
			
			/****************************************
			* getMmeErrorCause
			*    get mmeErrorCause from MmeProcedureCtxt
			****************************************/
			MmeErrorCause getMmeErrorCause()const;				
			
			/****************************************
			* setS1apCause
			*    set s1apCause to MmeProcedureCtxt
			****************************************/
			void setS1apCause(const S1apCause& s1apCause_i);
			
			/****************************************
			* getS1apCause
			*    get s1apCause from MmeProcedureCtxt
			****************************************/
			const S1apCause& getS1apCause()const;				
			
			/****************************************
			* setAuthRespStatus
			*    set authRespStatus to MmeProcedureCtxt
			****************************************/
			void setAuthRespStatus(int authRespStatus_i);
			
			/****************************************
			* getAuthRespStatus
			*    get authRespStatus from MmeProcedureCtxt
			****************************************/
			int getAuthRespStatus()const;				
			
			/****************************************
			* setAuts
			*    set auts to MmeProcedureCtxt
			****************************************/
			void setAuts(const Auts& auts_i);
			
			/****************************************
			* getAuts
			*    get auts from MmeProcedureCtxt
			****************************************/
			const Auts& getAuts()const;				
			
		
		private:
		
			// DataName
			ProcedureType ctxtType_m;
			
			// DataName
			MmeErrorCause mmeErrorCause_m;
			
			// DataName
			S1apCause s1apCause_m;
			
			// DataName
			int authRespStatus_m;
			
			// DataName
			Auts auts_m;
			
	};
	 
	class MmeAttachProcedureCtxt:public MmeProcedureCtxt
	{
		public:
	
			/****************************************
			* MmeAttachProcedureCtxt
			*    constructor
			****************************************/
			MmeAttachProcedureCtxt();
			
			/****************************************
			* ~MmeAttachProcedureCtxt
			*    destructor
			****************************************/
			~MmeAttachProcedureCtxt();
			
			/****************************************
			* setEsmInfoTxRequired
			*    set esmInfoTxRequired to MmeAttachProcedureCtxt
			****************************************/
			void setEsmInfoTxRequired(bool esmInfoTxRequired_i);
			
			/****************************************
			* getEsmInfoTxRequired
			*    get esmInfoTxRequired from MmeAttachProcedureCtxt
			****************************************/
			bool getEsmInfoTxRequired()const;				
			
			/****************************************
			* setAttachType
			*    set attachType to MmeAttachProcedureCtxt
			****************************************/
			void setAttachType(AttachType attachType_i);
			
			/****************************************
			* getAttachType
			*    get attachType from MmeAttachProcedureCtxt
			****************************************/
			AttachType getAttachType()const;				
			
			/****************************************
			* setPcoOptions
			*    set pcoOptions to MmeAttachProcedureCtxt
			****************************************/
			void setPcoOptions(const unsigned char* pcoOptions_i,uint16_t len);
			
			/****************************************
			* getPcoOptions
			*    get pcoOptions from MmeAttachProcedureCtxt
			****************************************/
			const unsigned char* getPcoOptions()const;							
			/****************************************
			* getPcoOptionsLen
			*    get pcoOptionsLen from MmeAttachProcedureCtxt
			****************************************/
			uint16_t getPcoOptionsLen()const;							
			
			/****************************************
			* setPti
			*    set pti to MmeAttachProcedureCtxt
			****************************************/
			void setPti(uint8_t pti_i);
			
			/****************************************
			* getPti
			*    get pti from MmeAttachProcedureCtxt
			****************************************/
			uint8_t getPti()const;				
			
			/****************************************
			* setRequestedApn
			*    set requestedApn to MmeAttachProcedureCtxt
			****************************************/
			void setRequestedApn(const Apn_name& requestedApn_i);
			
			/****************************************
			* getRequestedApn
			*    get requestedApn from MmeAttachProcedureCtxt
			****************************************/
			const Apn_name& getRequestedApn()const;				
			
		
		private:
		
			// DataName
			bool esmInfoTxRequired_m;
			
			// DataName
			AttachType attachType_m;
			
			// DataName
			uint16_t pcoOptionsLen_m;
			unsigned char pcoOptions_m[256];
			
			
			// DataName
			uint8_t pti_m;
			
			// DataName
			Apn_name requestedApn_m;
			
	};
	 
	class MmeDetachProcedureCtxt:public MmeProcedureCtxt
	{
		public:
	
			/****************************************
			* MmeDetachProcedureCtxt
			*    constructor
			****************************************/
			MmeDetachProcedureCtxt();
			
			/****************************************
			* ~MmeDetachProcedureCtxt
			*    destructor
			****************************************/
			~MmeDetachProcedureCtxt();
			
			/****************************************
			* setDetachType
			*    set detachType to MmeDetachProcedureCtxt
			****************************************/
			void setDetachType(DetachType detachType_i);
			
			/****************************************
			* getDetachType
			*    get detachType from MmeDetachProcedureCtxt
			****************************************/
			DetachType getDetachType()const;				
			
			/****************************************
			* setCancellationType
			*    set cancellationType to MmeDetachProcedureCtxt
			****************************************/
			void setCancellationType(CancellationType cancellationType_i);
			
			/****************************************
			* getCancellationType
			*    get cancellationType from MmeDetachProcedureCtxt
			****************************************/
			CancellationType getCancellationType()const;				
			
		
		private:
		
			// DataName
			DetachType detachType_m;
			
			// DataName
			CancellationType cancellationType_m;
			
	};
	 
	class MmeS1RelProcedureCtxt:public MmeProcedureCtxt
	{
		public:
	
			/****************************************
			* MmeS1RelProcedureCtxt
			*    constructor
			****************************************/
			MmeS1RelProcedureCtxt();
			
			/****************************************
			* ~MmeS1RelProcedureCtxt
			*    destructor
			****************************************/
			~MmeS1RelProcedureCtxt();
			
			/****************************************
			* setS1ReleaseTrigger
			*    set s1ReleaseTrigger to MmeS1RelProcedureCtxt
			****************************************/
			void setS1ReleaseTrigger(S1ReleaseTrigger s1ReleaseTrigger_i);
			
			/****************************************
			* getS1ReleaseTrigger
			*    get s1ReleaseTrigger from MmeS1RelProcedureCtxt
			****************************************/
			S1ReleaseTrigger getS1ReleaseTrigger()const;				
			
		
		private:
		
			// DataName
			S1ReleaseTrigger s1ReleaseTrigger_m;
			
	};
	 
	class MmeSvcReqProcedureCtxt:public MmeProcedureCtxt
	{
		public:
	
			/****************************************
			* MmeSvcReqProcedureCtxt
			*    constructor
			****************************************/
			MmeSvcReqProcedureCtxt();
			
			/****************************************
			* ~MmeSvcReqProcedureCtxt
			*    destructor
			****************************************/
			~MmeSvcReqProcedureCtxt();
			
			/****************************************
			* setDdnSeqNo
			*    set ddnSeqNo to MmeSvcReqProcedureCtxt
			****************************************/
			void setDdnSeqNo(uint32_t ddnSeqNo_i);
			
			/****************************************
			* getDdnSeqNo
			*    get ddnSeqNo from MmeSvcReqProcedureCtxt
			****************************************/
			uint32_t getDdnSeqNo()const;				
			
			/****************************************
			* setPagingTrigger
			*    set pagingTrigger to MmeSvcReqProcedureCtxt
			****************************************/
			void setPagingTrigger(PagingTrigger pagingTrigger_i);
			
			/****************************************
			* getPagingTrigger
			*    get pagingTrigger from MmeSvcReqProcedureCtxt
			****************************************/
			PagingTrigger getPagingTrigger()const;				
			
			/****************************************
			* setEpsBearerId
			*    set epsBearerId to MmeSvcReqProcedureCtxt
			****************************************/
			void setEpsBearerId(unsigned char epsBearerId_i);
			
			/****************************************
			* getEpsBearerId
			*    get epsBearerId from MmeSvcReqProcedureCtxt
			****************************************/
			unsigned char getEpsBearerId()const;				
			
			/****************************************
			* setArp
			*    set arp to MmeSvcReqProcedureCtxt
			****************************************/
			void setArp(const Arp& arp_i);
			
			/****************************************
			* getArp
			*    get arp from MmeSvcReqProcedureCtxt
			****************************************/
			const Arp& getArp()const;				
			
		
		private:
		
			// DataName
			uint32_t ddnSeqNo_m;
			
			// DataName
			PagingTrigger pagingTrigger_m;
			
			// DataName
			unsigned char epsBearerId_m;
			
			// DataName
			Arp arp_m;
			
	};
	 
	class MmeTauProcedureCtxt:public MmeProcedureCtxt
	{
		public:
	
			/****************************************
			* MmeTauProcedureCtxt
			*    constructor
			****************************************/
			MmeTauProcedureCtxt();
			
			/****************************************
			* ~MmeTauProcedureCtxt
			*    destructor
			****************************************/
			~MmeTauProcedureCtxt();
			
			/****************************************
			* setS1apEnbUeId
			*    set s1apEnbUeId to MmeTauProcedureCtxt
			****************************************/
			void setS1apEnbUeId(int s1apEnbUeId_i);
			
			/****************************************
			* getS1apEnbUeId
			*    get s1apEnbUeId from MmeTauProcedureCtxt
			****************************************/
			int getS1apEnbUeId()const;				
			
			/****************************************
			* setTai
			*    set tai to MmeTauProcedureCtxt
			****************************************/
			void setTai(const Tai& tai_i);
			
			/****************************************
			* getTai
			*    get tai from MmeTauProcedureCtxt
			****************************************/
			const Tai& getTai()const;				
			
			/****************************************
			* setEUtranCgi
			*    set eUtranCgi to MmeTauProcedureCtxt
			****************************************/
			void setEUtranCgi(const Cgi& eUtranCgi_i);
			
			/****************************************
			* getEUtranCgi
			*    get eUtranCgi from MmeTauProcedureCtxt
			****************************************/
			const Cgi& getEUtranCgi()const;				
			
			/****************************************
			* setEnbFd
			*    set enbFd to MmeTauProcedureCtxt
			****************************************/
			void setEnbFd(int enbFd_i);
			
			/****************************************
			* getEnbFd
			*    get enbFd from MmeTauProcedureCtxt
			****************************************/
			int getEnbFd()const;				
			
		
		private:
		
			// DataName
			int s1apEnbUeId_m;
			
			// DataName
			Tai tai_m;
			
			// DataName
			Cgi eUtranCgi_m;
			
			// DataName
			int enbFd_m;
			
	};
	 
	class S1HandoverProcedureContext:public MmeProcedureCtxt
	{
		public:
	
			/****************************************
			* S1HandoverProcedureContext
			*    constructor
			****************************************/
			S1HandoverProcedureContext();
			
			/****************************************
			* ~S1HandoverProcedureContext
			*    destructor
			****************************************/
			~S1HandoverProcedureContext();
			
			/****************************************
			* setHoType
			*    set hoType to S1HandoverProcedureContext
			****************************************/
			void setHoType(HoType hoType_i);
			
			/****************************************
			* getHoType
			*    get hoType from S1HandoverProcedureContext
			****************************************/
			HoType getHoType()const;				
			
			/****************************************
			* setTargetEnbContextId
			*    set targetEnbContextId to S1HandoverProcedureContext
			****************************************/
			void setTargetEnbContextId(int targetEnbContextId_i);
			
			/****************************************
			* getTargetEnbContextId
			*    get targetEnbContextId from S1HandoverProcedureContext
			****************************************/
			int getTargetEnbContextId()const;				
			
			/****************************************
			* setTargetS1apEnbUeId
			*    set targetS1apEnbUeId to S1HandoverProcedureContext
			****************************************/
			void setTargetS1apEnbUeId(int targetS1apEnbUeId_i);
			
			/****************************************
			* getTargetS1apEnbUeId
			*    get targetS1apEnbUeId from S1HandoverProcedureContext
			****************************************/
			int getTargetS1apEnbUeId()const;				
			
			/****************************************
			* setTargetTai
			*    set targetTai to S1HandoverProcedureContext
			****************************************/
			void setTargetTai(const Tai& targetTai_i);
			
			/****************************************
			* getTargetTai
			*    get targetTai from S1HandoverProcedureContext
			****************************************/
			const Tai& getTargetTai()const;				
			
			/****************************************
			* setTargetCgi
			*    set targetCgi to S1HandoverProcedureContext
			****************************************/
			void setTargetCgi(const Cgi& targetCgi_i);
			
			/****************************************
			* getTargetCgi
			*    get targetCgi from S1HandoverProcedureContext
			****************************************/
			const Cgi& getTargetCgi()const;				
			
			/****************************************
			* setSrcToTargetTransContainer
			*    set srcToTargetTransContainer to S1HandoverProcedureContext
			****************************************/
			void setSrcToTargetTransContainer(const src_target_transparent_container& srcToTargetTransContainer_i);
			
			/****************************************
			* getSrcToTargetTransContainer
			*    get srcToTargetTransContainer from S1HandoverProcedureContext
			****************************************/
			const src_target_transparent_container& getSrcToTargetTransContainer()const;				
			
			/****************************************
			* setTargetToSrcTransContainer
			*    set targetToSrcTransContainer to S1HandoverProcedureContext
			****************************************/
			void setTargetToSrcTransContainer(const src_target_transparent_container& targetToSrcTransContainer_i);
			
			/****************************************
			* getTargetToSrcTransContainer
			*    get targetToSrcTransContainer from S1HandoverProcedureContext
			****************************************/
			const src_target_transparent_container& getTargetToSrcTransContainer()const;				
			
			/****************************************
			* setErabAdmittedItem
			*    set erabAdmittedItem to S1HandoverProcedureContext
			****************************************/
			void setErabAdmittedItem(const ERAB_admitted& erabAdmittedItem_i);
			
			/****************************************
			* getErabAdmittedItem
			*    get erabAdmittedItem from S1HandoverProcedureContext
			****************************************/
			const ERAB_admitted& getErabAdmittedItem()const;				
			
			/****************************************
			* setS1HoCause
			*    set s1HoCause to S1HandoverProcedureContext
			****************************************/
			void setS1HoCause(const S1apCause& s1HoCause_i);
			
			/****************************************
			* getS1HoCause
			*    get s1HoCause from S1HandoverProcedureContext
			****************************************/
			const S1apCause& getS1HoCause()const;				
			
			/****************************************
			* setSrcEnbContextId
			*    set srcEnbContextId to S1HandoverProcedureContext
			****************************************/
			void setSrcEnbContextId(int srcEnbContextId_i);
			
			/****************************************
			* getSrcEnbContextId
			*    get srcEnbContextId from S1HandoverProcedureContext
			****************************************/
			int getSrcEnbContextId()const;				
			
			/****************************************
			* setSrcS1apEnbUeId
			*    set srcS1apEnbUeId to S1HandoverProcedureContext
			****************************************/
			void setSrcS1apEnbUeId(int srcS1apEnbUeId_i);
			
			/****************************************
			* getSrcS1apEnbUeId
			*    get srcS1apEnbUeId from S1HandoverProcedureContext
			****************************************/
			int getSrcS1apEnbUeId()const;				
			
		
		private:
		
			// DataName
			HoType hoType_m;
			
			// DataName
			int targetEnbContextId_m;
			
			// DataName
			int targetS1apEnbUeId_m;
			
			// DataName
			Tai targetTai_m;
			
			// DataName
			Cgi targetCgi_m;
			
			// DataName
			src_target_transparent_container srcToTargetTransContainer_m;
			
			// DataName
			src_target_transparent_container targetToSrcTransContainer_m;
			
			// DataName
			ERAB_admitted erabAdmittedItem_m;
			
			// DataName
			S1apCause s1HoCause_m;
			
			// DataName
			int srcEnbContextId_m;
			
			// DataName
			int srcS1apEnbUeId_m;
			
	};
	
	
} // mme
#endif