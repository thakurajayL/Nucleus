/*
 * Copyright 2020-present Infosys Limited
 *
 * SPDX-License-Identifier: Apache-2.0
 */
 
 /******************************************************
 * s1HoWfModifyBearerResponse.h
 * This is an auto generated file.
 * Please do not edit this file.
 * All edits to be made through template source file
 * <TOP-DIR/scripts/SMCodeGen/templates/stateMachineTmpls/state.h.tt>
 ******************************************************/
 
#ifndef __S1HoWfModifyBearerResponse__
#define __S1HoWfModifyBearerResponse__

#include "state.h"

namespace mme {

	class S1HoWfModifyBearerResponse : public SM::State
	{
		public:
			/******************************************
			* Instance 
			*    Creates static instance for the state
			*******************************************/
			static S1HoWfModifyBearerResponse* Instance();

			/****************************************
			* S1HoWfModifyBearerResponse
			*    Destructor
			****************************************/
			~S1HoWfModifyBearerResponse();			
			
			/******************************************
			* initialize
			*  Initializes action handlers for the state
			* and next state
			******************************************/
			void initialize();
	
		private:
			/****************************************
			* S1HoWfModifyBearerResponse
			*    Private constructor
			****************************************/
			S1HoWfModifyBearerResponse();  
	};
};
#endif // __S1HoWfModifyBearerResponse__
