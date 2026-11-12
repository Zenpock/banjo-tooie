#ifndef __CORE2_1E76360_H__
#define __CORE2_1E76360_H__

#include <ultra64.h>

#include "common.h"
#include "ba/playerstate.h"
#include "bs/state.h"
#include "bs.h"
/*
#include "bs/stand.h"
#include "bs/walk.h"
#include "bs/jump.h"
#include "bs/crouch.h"
#include "bs/claw.h"
#include "bs/mum.h"
#include "bs/rest.h"
#include "bs/ledge.h"
#include "bs/begghead.h"
#include "bs/beggass.h"
#include "bs/snowball.h"
#include "bs/ban/shack.h"
#include "bs/ban/sack.h"
#include "bs/ban/snooze.h"
#include "bs/bbuster.h"
#include "bs/bpeck.h"
#include "bs/bflap.h"
#include "bs/bflip.h"
#include "bs/bbarge.h"
#include "bs/btrot.h"
#include "bs/bfly.h"
#include "bs/bwhirl.h"
#include "bs/hock.h"
#include "bs/blongleg.h"
#include "bs/twirl.h"
#include "bs/washer.h"
#include "bs/jig.h"
#include "bs/carry.h"
#include "bs/die.h"
#include "bs/silowait.h"
#include "bs/sub.h"
#include "bs/kaz/stilt.h"
#include "bs/climb.h"
#include "bs/timeout.h"
#include "bs/rebound.h"
#include "bs/kaz/paddle.h"
#include "bs/kaz/eggass.h"
#include "bs/kaz/egghead.h"
#include "bs/splitup.h"
#include "bs/statue.h"
#include "bs/splat.h"
#include "bs/swim.h"
#include "bs/beemain.h"
#include "bs/kaz/still.h"
#include "bs/babykaz.h"
#include "bs/firstp.h"
#include "bs/stonehead.h"
#include "bs/mum/swim.h"
#include "bs/mum/attack.h"
#include "bs/mum/splat.h"
#include "bs/kaz/ow.h"
#include "bs/kaz/die.h"
#include "bs/crashout.h"
#include "bs/chokedie.h"
#include "bs/ride.h"
#include "bs/trexsmall.h"
#include "bs/trexlarge.h"
#include "bs/kaz/torpedo.h"
#include "bs/kaz/fly.h"
#include "bs/kaz/shoesspringjump.h"
#include "bs/kaz/shoessuckspline.h"
#include "bs/breegullbash.h"
#include "bs/bkflamethrower.h"
*/
extern BsScript _bsstand_entrypoint_3(BsScriptType);
extern BsScript _bswalk_entrypoint_9(BsScriptType);
extern BsScript _bswalk_entrypoint_13(BsScriptType);
extern BsScript _bswalk_entrypoint_17(BsScriptType);
extern BsScript _bsjump_entrypoint_3(BsScriptType);
extern BsScript _bsclaw_entrypoint_3(BsScriptType);
extern BsScript _bscrouch_entrypoint_3(BsScriptType);
extern BsScript _bsbtrot_entrypoint_15(BsScriptType);
extern BsScript _bsbegghead_entrypoint_3(BsScriptType);
extern BsScript _bsbeggass_entrypoint_3(BsScriptType);
extern BsScript _bsturn_entrypoint_3(BsScriptType);
extern BsScript _bstimeout_entrypoint_7(BsScriptType);
extern BsScript _bsow_entrypoint_3(BsScriptType);
extern BsScript _bsbbuster_entrypoint_0(BsScriptType);
extern BsScript _bsbflap_entrypoint_3(BsScriptType);
extern BsScript _bsbpeck_entrypoint_3(BsScriptType);
extern BsScript _bsbflip_entrypoint_3(BsScriptType);
extern BsScript _bsbbarge_entrypoint_0(BsScriptType);
extern BsScript _bsbtrot_entrypoint_3(BsScriptType);
extern BsScript _bsbtrot_entrypoint_7(BsScriptType);
extern BsScript _bsbtrot_entrypoint_11(BsScriptType);
extern BsScript _bsbtrot_entrypoint_19(BsScriptType);
extern BsScript _bsbfly_entrypoint_7(BsScriptType);
extern BsScript _bsbswim_entrypoint_2(BsScriptType);
extern BsScript _bsbwhirl_entrypoint_3(BsScriptType);
extern BsScript _bsbwhirl_entrypoint_7(BsScriptType);
extern BsScript _bsbwhirl_entrypoint_11(BsScriptType);
extern BsScript _bsbwhirl_entrypoint_15(BsScriptType);
extern BsScript _bsbwhirl_entrypoint_19(BsScriptType);
extern BsScript _bswalk_entrypoint_5(BsScriptType);
extern BsScript _bsstand_entrypoint_7(BsScriptType);
extern BsScript _bsbshock_entrypoint_3(BsScriptType);
extern BsScript _bsbshock_entrypoint_7(BsScriptType);
extern BsScript _bsbfly_entrypoint_0(BsScriptType);
extern BsScript _bsbfly_entrypoint_1(BsScriptType);
extern BsScript _bsblongleg_entrypoint_3(BsScriptType);
extern BsScript _bsblongleg_entrypoint_7(BsScriptType);
extern BsScript _bsblongleg_entrypoint_11(BsScriptType);
extern BsScript _bsblongleg_entrypoint_19(BsScriptType);
extern BsScript _bsblongleg_entrypoint_15(BsScriptType);
extern BsScript _bsbfly_entrypoint_2(BsScriptType);
extern BsScript _bsbswim_entrypoint_0(BsScriptType);
extern BsScript _bsbswim_entrypoint_1(BsScriptType);
extern BsScript _bsswim_entrypoint_0(BsScriptType);
extern BsScript _bsswim_entrypoint_1(BsScriptType);
extern BsScript _bsjump_entrypoint_7(BsScriptType);
extern BsScript _bsbswim_entrypoint_7(BsScriptType);
extern BsScript _bstwirl_entrypoint_0(BsScriptType);
extern BsScript _bswasher_entrypoint_9(BsScriptType);
extern BsScript _bswasher_entrypoint_5(BsScriptType);
extern BsScript _bsjig_entrypoint_11(BsScriptType);
extern BsScript _bswasher_entrypoint_4(BsScriptType);
extern BsScript _bswasher_entrypoint_3(BsScriptType);
extern BsScript _bswasher_entrypoint_10(BsScriptType);
extern BsScript _bswasher_entrypoint_11(BsScriptType);
extern BsScript _bsbswim_entrypoint_3(BsScriptType);
extern BsScript _bscarry_entrypoint_1(BsScriptType);
extern BsScript _bscarry_entrypoint_2(BsScriptType);
extern BsScript _bstalk_entrypoint_3(BsScriptType);
extern BsScript _bsjump_entrypoint_20(BsScriptType);
extern BsScript _bswasher_entrypoint_6(BsScriptType);
extern BsScript _bsjump_entrypoint_15(BsScriptType);
extern BsScript _bscarry_entrypoint_3(BsScriptType);
extern BsScript _bsdie_entrypoint_3(BsScriptType);
extern BsScript _bssilowait_entrypoint_0(BsScriptType);
extern BsScript _bswasher_entrypoint_1(BsScriptType);
extern BsScript _bsjig_entrypoint_6(BsScriptType);
extern BsScript _bsbtrot_entrypoint_23(BsScriptType);
extern BsScript _bssub_entrypoint_5(BsScriptType);
extern BsScript _bskazstilt_entrypoint_3(BsScriptType);
extern BsScript _bskazstilt_entrypoint_7(BsScriptType);
extern BsScript _bskazstilt_entrypoint_11(BsScriptType);
extern BsScript _bskazstilt_entrypoint_19(BsScriptType);
extern BsScript _bskazstilt_entrypoint_15(BsScriptType);
extern BsScript _bsbswim_entrypoint_10(BsScriptType);
extern BsScript _bskazstilt_entrypoint_23(BsScriptType);
extern BsScript _bskazstilt_entrypoint_27(BsScriptType);
extern BsScript _bsclimb_entrypoint_3(BsScriptType);
extern BsScript _bsclimb_entrypoint_7(BsScriptType);
extern BsScript _bsjump_entrypoint_11(BsScriptType);
extern BsScript _bstimeout_entrypoint_3(BsScriptType);
extern BsScript _bsbswim_entrypoint_8(BsScriptType);
extern BsScript _bsblongleg_entrypoint_23(BsScriptType);
extern BsScript _bsrebound_entrypoint_0(BsScriptType);
extern BsScript _bsbfly_entrypoint_3(BsScriptType);
extern BsScript _bsbfly_entrypoint_4(BsScriptType);
extern BsScript _bsbfly_entrypoint_5(BsScriptType);
extern BsScript _bsthrow_entrypoint_3(BsScriptType);
extern BsScript _bskazstilt_entrypoint_31(BsScriptType);
extern BsScript _bswasher_entrypoint_2(BsScriptType);
extern BsScript _bsbanshack_entrypoint_4(BsScriptType);
extern BsScript _bsbanshack_entrypoint_5(BsScriptType);
extern BsScript _bsbansnooze_entrypoint_3(BsScriptType);
extern BsScript _bsbansnooze_entrypoint_4(BsScriptType);
extern BsScript _bsblongleg_entrypoint_27(BsScriptType);
extern BsScript _bstntswim_entrypoint_4(BsScriptType);
extern BsScript _bstntswim_entrypoint_3(BsScriptType);
extern BsScript _bskazpaddle_entrypoint_4(BsScriptType);
extern BsScript _bskazpaddle_entrypoint_5(BsScriptType);
extern BsScript _bskazegghead_entrypoint_3(BsScriptType);
extern BsScript _bskazeggass_entrypoint_3(BsScriptType);
extern BsScript _bssplitup_entrypoint_19(BsScriptType);
extern BsScript _bssplitup_entrypoint_15(BsScriptType);
extern BsScript _bsbeemain_entrypoint_10(BsScriptType);
extern BsScript _bsbanbflip_entrypoint_3(BsScriptType);
extern BsScript _bsbanswim_entrypoint_0(BsScriptType);
extern BsScript _bsbansack_entrypoint_6(BsScriptType);
extern BsScript _bstaxi_entrypoint_6(BsScriptType);
extern BsScript _bsstatue_entrypoint_5(BsScriptType);
extern BsScript _bsbtrot_entrypoint_27(BsScriptType);
extern BsScript _bssplat_entrypoint_1(BsScriptType);
extern BsScript _bsrest_entrypoint_4(BsScriptType);
extern BsScript _bsrest_entrypoint_12(BsScriptType);
extern BsScript _bsrest_entrypoint_8(BsScriptType);
extern BsScript _bsbfly_entrypoint_8(BsScriptType);
extern BsScript _bsswim_entrypoint_2(BsScriptType);
extern BsScript _bsbswim_entrypoint_9(BsScriptType);
extern BsScript _bsbtrot_entrypoint_31(BsScriptType);
extern BsScript _bswalk_entrypoint_21(BsScriptType);
extern BsScript _bsbtrot_entrypoint_35(BsScriptType);
extern BsScript _bsride_entrypoint_0(BsScriptType);
extern BsScript _bsbansack_entrypoint_4(BsScriptType);
extern BsScript _bsbansack_entrypoint_5(BsScriptType);
extern BsScript _bsbswim_entrypoint_4(BsScriptType);
extern BsScript _bsbansack_entrypoint_7(BsScriptType);
extern BsScript _bsbanswim_entrypoint_1(BsScriptType);
extern BsScript _bsbanswim_entrypoint_2(BsScriptType);
extern BsScript _bssub_entrypoint_4(BsScriptType);
extern BsScript _bsbswim_entrypoint_14(BsScriptType);
extern BsScript _bsbeemain_entrypoint_0(BsScriptType);
extern BsScript _bsbeemain_entrypoint_1(BsScriptType);
extern BsScript _bsbeemain_entrypoint_2(BsScriptType);
extern BsScript _bsbeemain_entrypoint_3(BsScriptType);
extern BsScript _bsbeemain_entrypoint_7(BsScriptType);
extern BsScript _bsbeemain_entrypoint_9(BsScriptType);
extern BsScript _bsbeefly_entrypoint_0(BsScriptType);
extern BsScript _bsbeefly_entrypoint_1(BsScriptType);
extern BsScript _bsbeefly_entrypoint_2(BsScriptType);
extern BsScript _bswasher_entrypoint_7(BsScriptType);
extern BsScript _bskazstill_entrypoint_10(BsScriptType);
extern BsScript _bsbanswim_entrypoint_3(BsScriptType);
extern BsScript _bsbfly_entrypoint_6(BsScriptType);
extern BsScript _bswasher_entrypoint_8(BsScriptType);
extern BsScript _bskazstill_entrypoint_9(BsScriptType);
extern BsScript _bsbabykaz_entrypoint_12(BsScriptType);
extern BsScript _bsbtrot_entrypoint_47(BsScriptType);
extern BsScript _bsswim_entrypoint_3(BsScriptType);
extern BsScript _bsbswim_entrypoint_11(BsScriptType);
extern BsScript _bsstand_entrypoint_12(BsScriptType);
extern BsScript _bsbfly_entrypoint_9(BsScriptType);
extern BsScript _bsbtrot_entrypoint_39(BsScriptType);
extern BsScript _bsblongleg_entrypoint_31(BsScriptType);
extern BsScript _bsbtrot_entrypoint_43(BsScriptType);
extern BsScript _bsbeemain_entrypoint_11(BsScriptType);
extern BsScript _bsclimb_entrypoint_11(BsScriptType);
extern BsScript _bscarry_entrypoint_0(BsScriptType);
extern BsScript _bscarry_entrypoint_4(BsScriptType);
extern BsScript _bsfirstp_entrypoint_31(BsScriptType);
extern BsScript _bsbswim_entrypoint_6(BsScriptType);
extern BsScript _bsbeemain_entrypoint_8(BsScriptType);
extern BsScript _bsbwhirl_entrypoint_23(BsScriptType);
extern BsScript _bsbwhirl_entrypoint_27(BsScriptType);
extern BsScript _bsledge_entrypoint_4(BsScriptType);
extern BsScript _bsledge_entrypoint_3(BsScriptType);
extern BsScript _bsledge_entrypoint_2(BsScriptType);
extern BsScript _bsledge_entrypoint_0(BsScriptType);
extern BsScript _bsledge_entrypoint_1(BsScriptType);
extern BsScript _bsstonehead_entrypoint_7(BsScriptType);
extern BsScript _bsstonehead_entrypoint_11(BsScriptType);
extern BsScript _bsstonehead_entrypoint_15(BsScriptType);
extern BsScript _bsstonehead_entrypoint_19(BsScriptType);
extern BsScript _bsstonehead_entrypoint_27(BsScriptType);
extern BsScript _bsstonehead_entrypoint_31(BsScriptType);
extern BsScript _bsstonehead_entrypoint_35(BsScriptType);
extern BsScript _bsstonehead_entrypoint_23(BsScriptType);
extern BsScript _bsstonehead_entrypoint_43(BsScriptType);
extern BsScript _bsstonehead_entrypoint_3(BsScriptType);
extern BsScript _bsstonehead_entrypoint_39(BsScriptType);
extern BsScript _bsbbilldrill_entrypoint_3(BsScriptType);
extern BsScript _bsride_entrypoint_2(BsScriptType);
extern BsScript _bssplitup_entrypoint_11(BsScriptType);
extern BsScript _bssplitup_entrypoint_3(BsScriptType);
extern BsScript _bssplitup_entrypoint_7(BsScriptType);
extern BsScript _bskazstill_entrypoint_3(BsScriptType);
extern BsScript _bskazmove_entrypoint_4(BsScriptType);
extern BsScript _bskazjump_entrypoint_3(BsScriptType);
extern BsScript _bskazglide_entrypoint_0(BsScriptType);
extern BsScript _bsbswim_entrypoint_5(BsScriptType);
extern BsScript _bsbeefly_entrypoint_3(BsScriptType);
extern BsScript _bskazshock_entrypoint_8(BsScriptType);
extern BsScript _bskazwingwhack_entrypoint_1(BsScriptType);
extern BsScript _bskazshock_entrypoint_4(BsScriptType);
extern BsScript _bskazwingwhack_entrypoint_0(BsScriptType);
extern BsScript _bskazhatch_entrypoint_0(BsScriptType);
extern BsScript _bskazspring_entrypoint_0(BsScriptType);
extern BsScript _bskazmove_entrypoint_10(BsScriptType);
extern BsScript _bsfirstp_entrypoint_19(BsScriptType);
extern BsScript _bsfirstp_entrypoint_22(BsScriptType);
extern BsScript _bsfirstp_entrypoint_35(BsScriptType);
extern BsScript _bsfirstp_entrypoint_20(BsScriptType);
extern BsScript _bsfirstp_entrypoint_21(BsScriptType);
extern BsScript _bsfirstp_entrypoint_23(BsScriptType);
extern BsScript _bsfirstp_entrypoint_24(BsScriptType);
extern BsScript _bsfirstp_entrypoint_32(BsScriptType);
extern BsScript _bsfirstp_entrypoint_33(BsScriptType);
extern BsScript _bsfirstp_entrypoint_36(BsScriptType);
extern BsScript _bsfirstp_entrypoint_34(BsScriptType);
extern BsScript _bsfirstp_entrypoint_8(BsScriptType);
extern BsScript _bsfirstp_entrypoint_29(BsScriptType);
extern BsScript _bsfirstp_entrypoint_9(BsScriptType);
extern BsScript _bsfirstp_entrypoint_11(BsScriptType);
extern BsScript _bsfirstp_entrypoint_15(BsScriptType);
extern BsScript _bsfirstp_entrypoint_16(BsScriptType);
extern BsScript _bsfirstp_entrypoint_17(BsScriptType);
extern BsScript _bskazcrouch_entrypoint_4(BsScriptType);
extern BsScript _bskazstill_entrypoint_8(BsScriptType);
extern BsScript _bskazjump_entrypoint_7(BsScriptType);
extern BsScript _bskazjump_entrypoint_15(BsScriptType);
extern BsScript _bskazjump_entrypoint_11(BsScriptType);
extern BsScript _bsbanpackwhack_entrypoint_3(BsScriptType);
extern BsScript _bsmumstill_entrypoint_1(BsScriptType);
extern BsScript _bsmummove_entrypoint_4(BsScriptType);
extern BsScript _bsmummove_entrypoint_3(BsScriptType);
extern BsScript _bsmum_entrypoint_6(BsScriptType);
extern BsScript _bsmum_entrypoint_5(BsScriptType);
extern BsScript _bsmum_entrypoint_7(BsScriptType);
extern BsScript _bsmum_entrypoint_3(BsScriptType);
extern BsScript _bsmum_entrypoint_11(BsScriptType);
extern BsScript _bsbswim_entrypoint_13(BsScriptType);
extern BsScript _bsmum_entrypoint_14(BsScriptType);
extern BsScript _bsmumstill_entrypoint_0(BsScriptType);
extern BsScript _bsmumswim_entrypoint_4(BsScriptType);
extern BsScript _bsmumswim_entrypoint_5(BsScriptType);
extern BsScript _bsmumswim_entrypoint_6(BsScriptType);
extern BsScript _bsmumswim_entrypoint_7(BsScriptType);
extern BsScript _bsmumswim_entrypoint_3(BsScriptType);
extern BsScript _bsmum_entrypoint_4(BsScriptType);
extern BsScript _bsmum_entrypoint_12(BsScriptType);
extern BsScript _bsmumattack_entrypoint_0(BsScriptType);
extern BsScript _bsstatue_entrypoint_7(BsScriptType);
extern BsScript _bsstatue_entrypoint_8(BsScriptType);
extern BsScript _bsstatue_entrypoint_9(BsScriptType);
extern BsScript _bsstatue_entrypoint_3(BsScriptType);
extern BsScript _bsstatue_entrypoint_4(BsScriptType);
extern BsScript _bsstatue_entrypoint_6(BsScriptType);
extern BsScript _bsstatue_entrypoint_2(BsScriptType);
extern BsScript _bsmumsplat_entrypoint_0(BsScriptType);
extern BsScript _bskazow_entrypoint_0(BsScriptType);
extern BsScript _bskazdie_entrypoint_3(BsScriptType);
extern BsScript _bsdie_entrypoint_7(BsScriptType);
extern BsScript _bsdie_entrypoint_11(BsScriptType);
extern BsScript _bstnt_entrypoint_5(BsScriptType);
extern BsScript _bstnt_entrypoint_6(BsScriptType);
extern BsScript _bstnt_entrypoint_7(BsScriptType);
extern BsScript _bstnt_entrypoint_9(BsScriptType);
extern BsScript _bstnt_entrypoint_11(BsScriptType);
extern BsScript _bstnt_entrypoint_12(BsScriptType);
extern BsScript _bstnt_entrypoint_13(BsScriptType);
extern BsScript _bstnt_entrypoint_14(BsScriptType);
extern BsScript _bstnt_entrypoint_15(BsScriptType);
extern BsScript _bstnt_entrypoint_1(BsScriptType);
extern BsScript _bstnt_entrypoint_0(BsScriptType);
extern BsScript _bstntswim_entrypoint_1(BsScriptType);
extern BsScript _bstntswim_entrypoint_2(BsScriptType);
extern BsScript _bstntswim_entrypoint_0(BsScriptType);
extern BsScript _bsvan_entrypoint_4(BsScriptType);
extern BsScript _bsvan_entrypoint_5(BsScriptType);
extern BsScript _bsvan_entrypoint_6(BsScriptType);
extern BsScript _bsvan_entrypoint_7(BsScriptType);
extern BsScript _bsvan_entrypoint_10(BsScriptType);
extern BsScript _bsvan_entrypoint_11(BsScriptType);
extern BsScript _bsvan_entrypoint_12(BsScriptType);
extern BsScript _bsvan_entrypoint_13(BsScriptType);
extern BsScript _bsvan_entrypoint_14(BsScriptType);
extern BsScript _bsvanswim_entrypoint_1(BsScriptType);
extern BsScript _bsvanswim_entrypoint_2(BsScriptType);
extern BsScript _bsvanswim_entrypoint_0(BsScriptType);
extern BsScript _bsmumcast_entrypoint_4(BsScriptType);
extern BsScript _bscrashout_entrypoint_3(BsScriptType);
extern BsScript _bschokedie_entrypoint_3(BsScriptType);
extern BsScript _bsvan_entrypoint_16(BsScriptType);
extern BsScript _bstaxi_entrypoint_10(BsScriptType);
extern BsScript _bstaxi_entrypoint_22(BsScriptType);
extern BsScript _bstaxi_entrypoint_31(BsScriptType);
extern BsScript _bstaxi_entrypoint_35(BsScriptType);
extern BsScript _bstaxi_entrypoint_18(BsScriptType);
extern BsScript _bstaxi_entrypoint_26(BsScriptType);
extern BsScript _bstaxi_entrypoint_5(BsScriptType);
extern BsScript _bstaxi_entrypoint_14(BsScriptType);
extern BsScript _bsride_entrypoint_1(BsScriptType);
extern BsScript _bsride_entrypoint_3(BsScriptType);
extern BsScript _bssub_entrypoint_2(BsScriptType);
extern BsScript _bssub_entrypoint_3(BsScriptType);
extern BsScript _bssub_entrypoint_0(BsScriptType);
extern BsScript _bssub_entrypoint_6(BsScriptType);
extern BsScript _bssub_entrypoint_1(BsScriptType);
extern BsScript _bssub_entrypoint_7(BsScriptType);
extern BsScript _bsbabykaz_entrypoint_2(BsScriptType);
extern BsScript _bsbabykaz_entrypoint_7(BsScriptType);
extern BsScript _bsbabykaz_entrypoint_8(BsScriptType);
extern BsScript _bsbabykaz_entrypoint_10(BsScriptType);
extern BsScript _bsbabykaz_entrypoint_11(BsScriptType);
extern BsScript _bsbabykaz_entrypoint_9(BsScriptType);
extern BsScript _bsbabykaz_entrypoint_6(BsScriptType);
extern BsScript _bsfirstp_entrypoint_30(BsScriptType);
extern BsScript _bskazow_entrypoint_1(BsScriptType);
extern BsScript _bstrexsmall_entrypoint_0(BsScriptType);
extern BsScript _bstrexsmall_entrypoint_4(BsScriptType);
extern BsScript _bstrexsmall_entrypoint_5(BsScriptType);
extern BsScript _bstrexsmall_entrypoint_6(BsScriptType);
extern BsScript _bstrexsmall_entrypoint_8(BsScriptType);
extern BsScript _bstrexsmall_entrypoint_9(BsScriptType);
extern BsScript _bstrexsmall_entrypoint_10(BsScriptType);
extern BsScript _bstrexsmall_entrypoint_11(BsScriptType);
extern BsScript _bstrexsmall_entrypoint_12(BsScriptType);
extern BsScript _bstrexsmall_entrypoint_13(BsScriptType);
extern BsScript _bstrexsmall_entrypoint_14(BsScriptType);
extern BsScript _bstrexsmall_entrypoint_15(BsScriptType);
extern BsScript _bstrexlarge_entrypoint_0(BsScriptType);
extern BsScript _bstrexlarge_entrypoint_4(BsScriptType);
extern BsScript _bstrexlarge_entrypoint_5(BsScriptType);
extern BsScript _bstrexlarge_entrypoint_6(BsScriptType);
extern BsScript _bstrexlarge_entrypoint_8(BsScriptType);
extern BsScript _bstrexlarge_entrypoint_9(BsScriptType);
extern BsScript _bstrexlarge_entrypoint_10(BsScriptType);
extern BsScript _bstrexlarge_entrypoint_11(BsScriptType);
extern BsScript _bstrexlarge_entrypoint_12(BsScriptType);
extern BsScript _bstrexlarge_entrypoint_13(BsScriptType);
extern BsScript _bstrexlarge_entrypoint_14(BsScriptType);
extern BsScript _bstrexlarge_entrypoint_15(BsScriptType);
extern BsScript _bskaztorpedo_entrypoint_0(BsScriptType);
extern BsScript _bskaztorpedo_entrypoint_1(BsScriptType);
extern BsScript _bskaztorpedo_entrypoint_2(BsScriptType);
extern BsScript _bskaztorpedo_entrypoint_3(BsScriptType);
extern BsScript _bsbswim_entrypoint_12(BsScriptType);
extern BsScript _bskaztorpedo_entrypoint_4(BsScriptType);
extern BsScript _bskaztorpedo_entrypoint_5(BsScriptType);
extern BsScript _bskaztorpedo_entrypoint_6(BsScriptType);
extern BsScript _bskazglide_entrypoint_1(BsScriptType);
extern BsScript _bskazglide_entrypoint_2(BsScriptType);
extern BsScript _bskazpaddle_entrypoint_2(BsScriptType);
extern BsScript _bskazpaddle_entrypoint_1(BsScriptType);
extern BsScript _bskazpaddle_entrypoint_3(BsScriptType);
extern BsScript _bskazpaddle_entrypoint_0(BsScriptType);
extern BsScript _bskazfly_entrypoint_0(BsScriptType);
extern BsScript _bskazfly_entrypoint_1(BsScriptType);
extern BsScript _bsbansack_entrypoint_1(BsScriptType);
extern BsScript _bsbansack_entrypoint_2(BsScriptType);
extern BsScript _bsbansack_entrypoint_9(BsScriptType);
extern BsScript _bsbansack_entrypoint_8(BsScriptType);
extern BsScript _bsbansack_entrypoint_0(BsScriptType);
extern BsScript _bskaztorpedo_entrypoint_7(BsScriptType);
extern BsScript _bsbansack_entrypoint_3(BsScriptType);
extern BsScript _bsbanshack_entrypoint_0(BsScriptType);
extern BsScript _bsbanshack_entrypoint_1(BsScriptType);
extern BsScript _bsbanshack_entrypoint_6(BsScriptType);
extern BsScript _bsbanshack_entrypoint_3(BsScriptType);
extern BsScript _bsbanshack_entrypoint_2(BsScriptType);
extern BsScript _bsbansnooze_entrypoint_5(BsScriptType);
extern BsScript _bsbansnooze_entrypoint_2(BsScriptType);
extern BsScript _bsbansnooze_entrypoint_0(BsScriptType);
extern BsScript _bsbansnooze_entrypoint_1(BsScriptType);
extern BsScript _bskazfly_entrypoint_7(BsScriptType);
extern BsScript _bskazfly_entrypoint_2(BsScriptType);
extern BsScript _bskazfly_entrypoint_3(BsScriptType);
extern BsScript _bskazfly_entrypoint_4(BsScriptType);
extern BsScript _bskazfly_entrypoint_5(BsScriptType);
extern BsScript _bskazfly_entrypoint_8(BsScriptType);
extern BsScript _bskazfly_entrypoint_6(BsScriptType);
extern BsScript _bskazfly_entrypoint_9(BsScriptType);
extern BsScript _bsbtrot_entrypoint_55(BsScriptType);
extern BsScript _bsbtrot_entrypoint_51(BsScriptType);
extern BsScript _bssnowball_entrypoint_11(BsScriptType);
extern BsScript _bssnowball_entrypoint_7(BsScriptType);
extern BsScript _bssnowball_entrypoint_6(BsScriptType);
extern BsScript _bssnowball_entrypoint_5(BsScriptType);
extern BsScript _bssnowball_entrypoint_8(BsScriptType);
extern BsScript _bssnowball_entrypoint_3(BsScriptType);
extern BsScript _bssnowball_entrypoint_4(BsScriptType);
extern BsScript _bssnowball_entrypoint_9(BsScriptType);
extern BsScript _bssnowball_entrypoint_10(BsScriptType);
extern BsScript _bskazshoesspringjump_entrypoint_3(BsScriptType);
extern BsScript _bskazshoessuckspline_entrypoint_8(BsScriptType);
extern BsScript _bskazshoessuckspline_entrypoint_4(BsScriptType);
extern BsScript _bsbreegullbash_entrypoint_3(BsScriptType);
extern BsScript _bsbkflamethrower_entrypoint_4(BsScriptType);
extern BsScript _bskazflamethrower_entrypoint_4(BsScriptType);
extern BsScript _bsbeefly_entrypoint_4(BsScriptType);
extern BsScript _bskazglide_entrypoint_3(BsScriptType);
extern BsScript _bskazglide_entrypoint_4(BsScriptType);
extern BsScript _bsledge_entrypoint_8(BsScriptType);

s32 func_8009CA70(PlayerState *, BanjoStateId, s32);
void (*func_8009CAAC(PlayerState*, BanjoStateId))(PlayerState*);
void (*func_8009CAF8(PlayerState*, BanjoStateId))(PlayerState*);
void (*func_8009CB44(PlayerState*, BanjoStateId))(PlayerState*);
void (*bs_getStateUpdateFunc(PlayerState*, BanjoStateId))(PlayerState*);
s32 func_8009CBDC(PlayerState*, s32);
void func_8009CBFC(PlayerState*);

#endif // __CORE2_1E76360_H__
