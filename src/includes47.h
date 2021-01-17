




/*
	File created by Chris Johnson.
	These were previously all in game.cpp.

	This file includes all the the enums, defines, and included headers required globally by all components.

	All code released under GNU GPL.
*/
#pragma once

#include "includes.h"
using namespace std;

#include "includesDeprecated.h"
#include "includesRandom.h"
/* This is declared again lower down, just needed here for this header. */
std::string tostring(long i);
//#include "vehicle/vehicletype.h"
//#include "vehicle/vehicle.h"


//just a float that is initialized to 0
#include "floatZero.h"
//Interrogation information for the InterrogationST system, to be
//dynamically created on capture and deleted when InterrogationST ends,
//referenced using a pointer typecast into one of the arguments
//of the target's current action.
#include "activityST.h"

//int get_associated_attribute(int skill_type);

enum BillStatus
{
	BILL_SIGNED = -2,
	BILL_OVERRIDE_VETO = -1,
	BILL_PASSED_CONGRESS = 0,
	BILL_FAILED = 1
};
#include "includesDeprecatedB.h"
const string CHOOSE_A_LIBERAL_TO = "Choose a Liberal squad member to ";

#include "../common/commondisplay.h"
#include "../sitemode/sitedisplay.h"

//const string CONST_TIMES = " times";
//const string CONST_FIVE_TIMES = " five times";
//const string CONST_FOUR_TIMES = " four times";
//const string CONST_THREE_TIMES = " three times";
//const string CONST_TWICE = " twice";

const string CONST_CLOSE_BRACKET = "]";
const string CONST_OPEN_BRACKET = "[";
const string CONST_S_TIMES = " times";
const string CONST_FIVE_TIMES = " five times";
const string CONST_FOUR_TIMES = " four times";
const string CONST_THREE_TIMES = " three times";
const string CONST_TWICE = " twice";
const string tag_value = "value";
const string tag_attribute = "attribute";
const string tag_skill = "skill";

const string CONST_53_SPACES = "                                                     ";
const string CONST_80_SPACES = "                                                                                ";
const string CONST_27_SPACES = "                           ";
const string CONST_LOOT_EXCLAMATION = "LOOT!";
const string CONST_ENCTR = "ENCTR";
const string CONST_LC_ENEMY = "enemy";
const string CONST_ENEMY = "ENEMY";
const string CONST_ALLCAPS_SQUAD = "SQUAD";
const string CONST_THE_OFFICE_OF_THE_PRESIDENT = "The Office of the President";
const string CONST_CCS_BOSS = "CCS Boss";
const string CONST_OH_WOW_SO_MUCH_MONEY = "Oh Wow So Much Money";
const string CONST_BANK_TELLER = "Bank Teller";
const string CONST_BANK_VAULT = "Bank Vault";
const string CONST_BENCH = "Bench";
const string CONST_COMPUTER = "Computer";
const string CONST_TABLE = "Table";
const string CONST_STAIRS_DOWN = "Stairs Down";
const string CONST_STAIRS_UP = "Stairs Up";
const string CONST_DISPLAY_CASE = "Display Case";
const string CONST_SIGN = "Sign";
const string CONST_LANDLORD_S_OFFICE = "Landlord's Office";
const string CONST_NEWS_BROADCAST_STUDIO = "News Broadcast Studio";
const string CONST_RADIO_BROADCAST_ROOM = "Radio Broadcast Room";
const string CONST_SAFE = "Safe";
const string CONST_CEO_S_STUDY = "CEO's Study";
const string CONST_ARMORY = "Armory";
const string CONST_FACTORY_EQUIPMENT = "Factory Equipment";
const string CONST_TEXTILE_EQUIPMENT = "Textile Equipment";
const string CONST_SUPERCOMPUTER = "Supercomputer";
const string CONST_CC_PRISON_CONTROL_ROOM = "Prison Control Room";
const string CONST_JURY_ROOM = "Jury Room";
const string CONST_COURTHOUSE_JAIL = "Courthouse Jail";
const string CONST_POLICE_DETENTION_ROOM = "Police Detention Room";
const string CONST_CAGED_QUOTE_ANIMALS_ENDQUOTE = "Caged \"Animals\"";
const string CONST_REACTOR_CONTROL_ROOM = "Reactor Control Room";
const string CONST_CAGED_ANIMALS = "Caged Animals";
const string CONST_ICE = "ICE";
const string CONST_UC_OFF = "OFF";
const string CONST_AL = "AL";
const string CONST_OV = "OV";
const string CONST_BOSS = "BOSS!";
const string CONST_TELER = "TELER";
const string CONST_VAULT = "VAULT";
const string CONST_CASE = "CASE";
const string CONST_GUARD = "GUARD";
const string CONST_METAL = "METAL";
const string CONST_UC_BENCH = "BENCH";
const string CONST_CPU = "CPU";
const string CONST_UC_TABLE = "TABLE";
const string CONST_SIGN_EXCLAIM = "SIGN!";
const string CONST_RENT_QUESTION = "RENT?";
const string CONST_STAGE = "STAGE";
const string CONST_MIC = "MIC";
const string CONST_SAFE_EXCLAIM = "SAFE!";
const string CONST_ARMRY = "ARMRY";
const string CONST_EQUIP = "EQUIP";
const string CONST_INTEL = "INTEL";
const string CONST_CTROL = "CTROL";
const string CONST_JURY = "JURY!";
const string CONST_CELLS = "CELLS";
const string CONST_CAGES = "CAGES";
const string CONST_POWER = "POWER";
const string CONST_TRAP = "TRAP!";
const string CONST_MONEY_ON_GROUND = "~$~";
const string CONST_EXT = "EXT";
const string CONST_LCS = "LCS";
const string CONST_CCS = "CCS";
const string CONST_GNG = "GNG";
const string CONST_H_27_LINE = "���������������������������";
const string CONST_V_LINE_26_SPACES_V_LINE = "�                         �";
const string CONST_LL_CORNER_26_SPACES_LR_CORNER = "���������������������������";
const string CONST_UL_CORNER_26_SPACES_UR_CORNER = "���������������������������";
const string CONST_LR_CORNER = "�";
const string CONST_LL_CORNER = "�";
const string CONST_UR_CORNER = "�";
const string CONST_UL_CORNER = "�";
const string CONST_H_DOUBLE_LINE = "�";
const string CONST_V_DOUBLE_LINE = "�";
const string tag_ARMOR = "ARMOR";
const string tag_MONEY = "MONEY";
const string tag_CEO = "CEO";
const string FROM_STATUS_LINE = "from status line";
const string TO_STATUS_LINE = "to status line";

const string CONST_RB = "rb";
const string CONST_WB = "wb";
const string CLEARTYPE_DAT = "cleartype.dat";
const string EN_US_CP437 = "en_US.CP437";
const string EN_US_UTF_8 = "en_US.UTF-8";
const string ENGLISH_UNITED_437 = "English_United States.437";
const string CONST_FSL = "fsl";
const string CONST_TSL = "tsl";
const string CONST_HS = "hs";
const string CONST_UTF_8 = "UTF-8";

//#include "../creature/newcreature.h"

#include "../creature/creature.h"
////

//#include "../creature/deprecatedCreatureA.h"
//#include "../creature/deprecatedCreatureB.h"

#include "../creature/deprecatedCreatureC.h"
//#include "../creature/deprecatedCreatureD.h"

////
#include "../common/getnames.h"

#include "../locations/locations.h"
#include "../pdcurses/curses.h"
#include "../log/log.h"

#include "../cursesAlternative.h"
#include "../customMaps.h"
