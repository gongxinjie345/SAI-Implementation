/* Copyright (C) 2017-present. Mellanox Technologies, Ltd. ALL RIGHTS RESERVED.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * flextum_types autogenerated by P4 Compiler v1.0
 * From bmtor on March 26, 2019 04:24PM
 */

#ifndef FLEXTRUM_TYPES_H_
#define FLEXTRUM_TYPES_H_

#ifdef __cplusplus
extern "C"{
#endif

// Spectrum 1 specific HW limit
#define PORT_NUM 32
#define RIF_NUM 400 // TODO: max output for sdk_rif_iter_get
#define DEV_ID  1
// #define ACL_SIZE 100
#define NUM_OF_TC 8
#define NUM_OF_PRIO 8
#define MAX_TABLE_NAME_LEN 200

// Maps table name to P4 runtime table ID
typedef enum{
	FX_TABLE_INVALID_ID,
//---------FLEX tables------
	 CONTROL_IN_RIF_TABLE_BITMAP_CLASSIFICATION_ID = 33583305,
	 CONTROL_IN_RIF_TABLE_BITMAP_ROUTER_ID = 33606930,
	 CONTROL_OUT_RIF_TABLE_L3_VXLAN_ID = 33600566,
//---------FIXED tables------
} fx_table_id_t;

// Maps action name to P4 runtime action ID
typedef enum{
	FX_ACTION_INVALID_ID,
	CONTROL_IN_RIF_TO_CPU_ID = 16819019,
	CONTROL_IN_RIF_TO_LOCAL_ID = 16841981,
	CONTROL_IN_RIF_TO_NEXTHOP_ID = 16825799,
	CONTROL_OUT_RIF_TUNNEL_ENCAP_ID = 16812468,
	NOACTION_ID = 16800567,
	CONTROL_IN_RIF_DROP_ID = 16778278,
	CONTROL_IN_RIF_SET_METADATA_ID = 16786535,
} fx_action_id_t;

//---------action structs------
// struct action_noaction_t {
// }

// struct action_control_in_rif_set_metadata_t {
// 	bit<32>*		in_rif_metadata;
// }

// struct action_control_in_rif_to_nexthop_t {
// 	bit<32>*		next_hop;
// 	bit<12>*		tunnel_index;
// }

// struct action_control_in_rif_to_local_t {
// 	bit<32>*		router_interface;
// }

// struct action_control_in_rif_to_cpu_t {
// 	bit<8>*		trap_id;
// }

// struct action_control_in_rif_drop_t {
// }

// struct action_control_out_rif_tunnel_encap_t {
// 	bit<32>*		tunnel_id;
// 	bit<32>*		underlay_dip;
// }


#ifdef __cplusplus
}
#endif

#endif
