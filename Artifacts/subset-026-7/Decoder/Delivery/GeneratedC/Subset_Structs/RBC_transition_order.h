#ifndef NESTINGMARK_oETCS_Packet_TrackToTrain_RBC_transition_order
#define NESTINGMARK_oETCS_Packet_TrackToTrain_RBC_transition_order
/* =============================================================================
Formalization of Subset-026-7 (Chapter 7: ERTMS/ETCS language)

- Name: Subset-026-7 / TrackToTrain_RBC_transition_order
- Description: UNISIG SUBSET-026-7, ISSUE : 3.3.0, 3.5 ERTMS/ETCS language) 
- Copyright (c) Siemens AG, 2014, All Rights Reserved
 	
- Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl )
- Gist URL: none
- Cryptography: No
- Author(s): SiemensRailAutomation

Disclaimer:

The use of this software is limited to NON-vital applications. 
It has NOT been developed for vital operation purposes and MUST NOT be used for applications 
which may cause harm to people, physical accidents or financial loss. 

THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.  	
============================================================================= */
#include <stdint.h>
#include "opnETCS_Variables.h"

struct DATA_oETCS_TrackToTrain_RBC_transition_order {
  int vUsed_idx;                             // aktueller Fuellgrad von aPacket

  struct 
  {
          uint32_t v_TOccurence;            // Zeitpunkt des Empfangs
          uint64_t v_DOccurrence;           // Ort des Empfangs
          uint32_t vState;                  // Bearbeitungszustaende  
  } info;

  struct 
 { 
// TransmissionMedia=Balise, RBC
// Packet to order an RBC transition
// Packet Number = 131

	uint32_t               NID_PACKET;            		// # 8	
	T_q_dir                Q_DIR                 ;		// # 2	
	uint32_t               L_PACKET              ;		// # 13	
	T_q_scale              Q_SCALE               ;		// # 2	
	uint32_t               D_RBCTR               ;		// # 15	
	uint32_t               NID_C                 ;		// # 10		// 'Accepting' RBC identity
	uint32_t               NID_RBC               ;		// # 14	
	uint32_t               NID_RADIO             ;		// # 64		// 'Accepting' RBC radio subscriber number
	T_q_sleepsession       Q_SLEEPSESSION        ;		// # 1	
} 


   aPacket[2];       // Instanz der Sturkur mit dem content
};

// struct -> type
typedef struct DATA_oETCS_TrackToTrain_RBC_transition_order T_DATA_oETCS_TrackToTrain_RBC_transition_order;
// typ -> ptrtyp
typedef  T_DATA_oETCS_TrackToTrain_RBC_transition_order* TP_DATA_oETCS_TrackToTrain_RBC_transition_order;
// declaration of variable of ptrtyp
extern TP_DATA_oETCS_TrackToTrain_RBC_transition_order  oETCS_Packet_TrackToTrain_RBC_transition_order;
// instatiate this ptrtype variable like this: (get memory and fill memory)
// TP_DATA_oETCS_TrackToTrain_RBC_transition_order  oETCS_Packet_TrackToTrain_RBC_transition_order = new(T_DATA_oETCS_TrackToTrain_RBC_transition_order);
// and now fill in the content to start with ...
// Access variable like this: oETCS_Packet_TrackToTrain_RBC_transition_order->...
// maybe : memset(oETCS_Packet_TrackToTrain_RBC_transition_order, 0, sizeof(T_DATA_oETCS_Packet_TrackToTrain_RBC_transition_order));
// for complete 0 content.

#endif


