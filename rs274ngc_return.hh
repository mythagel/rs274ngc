   /************************************************************************

       Copyright 2008 Mark Pictor

   This file is part of RS274NGC.

   RS274NGC is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   RS274NGC is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with RS274NGC.  If not, see <http://www.gnu.org/licenses/>.

   This software is based on software that was produced by the National
   Institute of Standards and Technology (NIST).

   ************************************************************************/

#ifndef RS274NGC_RETURN_H
#define RS274NGC_RETURN_H

enum
{
    RS274NGC_OK = 0,
    RS274NGC_EXIT = 1,
    RS274NGC_EXECUTE_FINISH = 2,
    RS274NGC_ENDFILE = 3,
    NCE_A_FILE_IS_ALREADY_OPEN = 4,
    NCE_ALL_AXES_MISSING_WITH_G92 = 5,
    NCE_ALL_AXES_MISSING_WITH_MOTION_CODE = 6,
    NCE_ARC_RADIUS_TOO_SMALL_TO_REACH_END_POINT = 7,
    NCE_ARGUMENT_TO_ACOS_OUT_OF_RANGE = 8,
    NCE_ARGUMENT_TO_ASIN_OUT_OF_RANGE = 9,
    NCE_ATTEMPT_TO_DIVIDE_BY_ZERO = 10,
    NCE_ATTEMPT_TO_RAISE_NEGATIVE_TO_NON_INTEGER_POWER = 11,
    NCE_BAD_CHARACTER_USED = 12,
    NCE_BAD_FORMAT_UNSIGNED_INTEGER = 13,
    NCE_BAD_NUMBER_FORMAT = 14,
    NCE_BUG_BAD_G_CODE_MODAL_GROUP_0 = 15,
    NCE_BUG_CODE_NOT_G0_OR_G1 = 16,
    NCE_BUG_CODE_NOT_G17_G18_OR_G19 = 17,
    NCE_BUG_CODE_NOT_G20_OR_G21 = 18,
    NCE_BUG_CODE_NOT_G28_OR_G30 = 19,
    NCE_BUG_CODE_NOT_G2_OR_G3 = 20,
    NCE_BUG_CODE_NOT_G40_G41_OR_G42 = 21,
    NCE_BUG_CODE_NOT_G43_OR_G49 = 22,
    NCE_BUG_CODE_NOT_G4_G10_G28_G30_G53_OR_G92_SERIES = 23,
    NCE_BUG_CODE_NOT_G61_G61_1_OR_G64 = 24,
    NCE_BUG_CODE_NOT_G90_OR_G91 = 25,
    NCE_BUG_CODE_NOT_G93_OR_G94 = 26,
    NCE_BUG_CODE_NOT_G98_OR_G99 = 27,
    NCE_BUG_CODE_NOT_IN_G92_SERIES = 28,
    NCE_BUG_CODE_NOT_IN_RANGE_G54_TO_G593 = 29,
    NCE_BUG_CODE_NOT_M0_M1_M2_M30_M60 = 30,
    NCE_BUG_DISTANCE_MODE_NOT_G90_OR_G91 = 31,
    NCE_BUG_FUNCTION_SHOULD_NOT_HAVE_BEEN_CALLED = 32,
    NCE_BUG_IN_TOOL_RADIUS_COMP = 33,
    NCE_BUG_PLANE_NOT_XY_YZ_OR_XZ = 34,
    NCE_BUG_SIDE_NOT_RIGHT_OR_LEFT = 35,
    NCE_BUG_UNKNOWN_MOTION_CODE = 36,
    NCE_BUG_UNKNOWN_OPERATION = 37,
    NCE_CANNOT_CHANGE_AXIS_OFFSETS_WITH_CUTTER_RADIUS_COMP = 38,
    NCE_CANNOT_CHANGE_UNITS_WITH_CUTTER_RADIUS_COMP = 39,
    NCE_CANNOT_CREATE_BACKUP_FILE = 40,
    NCE_CANNOT_DO_G1_WITH_ZERO_FEED_RATE = 41,
    NCE_CANNOT_DO_ZERO_REPEATS_OF_CYCLE = 42,
    NCE_CANNOT_MAKE_ARC_WITH_ZERO_FEED_RATE = 43,
    NCE_CANNOT_MOVE_ROTARY_AXES_DURING_PROBING = 44,
    NCE_CANNOT_OPEN_BACKUP_FILE = 45,
    NCE_CANNOT_OPEN_VARIABLE_FILE = 46,
    NCE_CANNOT_PROBE_IN_INVERSE_TIME_FEED_MODE = 47,
    NCE_CANNOT_PROBE_WITH_CUTTER_RADIUS_COMP_ON = 48,
    NCE_CANNOT_PROBE_WITH_ZERO_FEED_RATE = 49,
    NCE_CANNOT_PUT_A_B_IN_CANNED_CYCLE = 50,
    NCE_CANNOT_PUT_A_C_IN_CANNED_CYCLE = 51,
    NCE_CANNOT_PUT_AN_A_IN_CANNED_CYCLE = 52,
    NCE_CANNOT_TURN_CUTTER_RADIUS_COMP_ON_OUT_OF_XY_PLANE = 53,
    NCE_CANNOT_TURN_CUTTER_RADIUS_COMP_ON_WHEN_ON = 54,
    NCE_CANNOT_USE_A_WORD = 55,
    NCE_CANNOT_USE_AXIS_VALUES_WITH_G80 = 56,
    NCE_CANNOT_USE_AXIS_VALUES_WITHOUT_A_G_CODE_THAT_USES_THEM = 57,
    NCE_CANNOT_USE_B_WORD = 58,
    NCE_CANNOT_USE_C_WORD = 59,
    NCE_CANNOT_USE_G28_OR_G30_WITH_CUTTER_RADIUS_COMP = 60,
    NCE_CANNOT_USE_G53_INCREMENTAL = 61,
    NCE_CANNOT_USE_G53_WITH_CUTTER_RADIUS_COMP = 62,
    NCE_CANNOT_USE_TWO_G_CODES_THAT_BOTH_USE_AXIS_VALUES = 63,
    NCE_CANNOT_USE_XZ_PLANE_WITH_CUTTER_RADIUS_COMP = 64,
    NCE_CANNOT_USE_YZ_PLANE_WITH_CUTTER_RADIUS_COMP = 65,
    NCE_COMMAND_TOO_LONG = 66,
    NCE_CONCAVE_CORNER_WITH_CUTTER_RADIUS_COMP = 67,
    NCE_COORDINATE_SYSTEM_INDEX_PARAMETER_5220_OUT_OF_RANGE = 68,
    NCE_CURRENT_POINT_SAME_AS_END_POINT_OF_ARC = 69,
    NCE_CUTTER_GOUGING_WITH_CUTTER_RADIUS_COMP = 70,
    NCE_D_WORD_WITH_NO_G41_OR_G42 = 71,
    NCE_DWELL_TIME_MISSING_WITH_G4 = 72,
    NCE_DWELL_TIME_P_WORD_MISSING_WITH_G82 = 73,
    NCE_DWELL_TIME_P_WORD_MISSING_WITH_G86 = 74,
    NCE_DWELL_TIME_P_WORD_MISSING_WITH_G88 = 75,
    NCE_DWELL_TIME_P_WORD_MISSING_WITH_G89 = 76,
    NCE_EQUAL_SIGN_MISSING_IN_PARAMETER_SETTING = 77,
    NCE_F_WORD_MISSING_WITH_INVERSE_TIME_ARC_MOVE = 78,
    NCE_F_WORD_MISSING_WITH_INVERSE_TIME_G1_MOVE = 79,
    NCE_FILE_ENDED_WITH_NO_PERCENT_SIGN = 80,
    NCE_FILE_ENDED_WITH_NO_PERCENT_SIGN_OR_PROGRAM_END = 81,
    NCE_FILE_NAME_TOO_LONG = 82,
    NCE_FILE_NOT_OPEN = 83,
    NCE_G_CODE_OUT_OF_RANGE = 84,
    NCE_H_WORD_WITH_NO_G43 = 85,
    NCE_I_WORD_GIVEN_FOR_ARC_IN_YZ_PLANE = 86,
    NCE_I_WORD_MISSING_WITH_G87 = 87,
    NCE_I_WORD_WITH_NO_G2_OR_G3_OR_G87_TO_USE_IT = 88,
    NCE_J_WORD_GIVEN_FOR_ARC_IN_XZ_PLANE = 89,
    NCE_J_WORD_MISSING_WITH_G87 = 90,
    NCE_J_WORD_WITH_NO_G2_OR_G3_OR_G87_TO_USE_IT = 91,
    NCE_K_WORD_GIVEN_FOR_ARC_IN_XY_PLANE = 92,
    NCE_K_WORD_MISSING_WITH_G87 = 93,
    NCE_K_WORD_WITH_NO_G2_OR_G3_OR_G87_TO_USE_IT = 94,
    NCE_L_WORD_WITH_NO_CANNED_CYCLE_OR_G10 = 95,
    NCE_LEFT_BRACKET_MISSING_AFTER_SLASH_WITH_ATAN = 96,
    NCE_LEFT_BRACKET_MISSING_AFTER_UNARY_OPERATION_NAME = 97,
    NCE_LINE_NUMBER_GREATER_THAN_99999 = 98,
    NCE_LINE_WITH_G10_DOES_NOT_HAVE_L2 = 99,
    NCE_M_CODE_GREATER_THAN_99 = 100,
    NCE_MIXED_RADIUS_IJK_FORMAT_FOR_ARC = 101,
    NCE_MULTIPLE_A_WORDS_ON_ONE_LINE = 102,
    NCE_MULTIPLE_B_WORDS_ON_ONE_LINE = 103,
    NCE_MULTIPLE_C_WORDS_ON_ONE_LINE = 104,
    NCE_MULTIPLE_D_WORDS_ON_ONE_LINE = 105,
    NCE_MULTIPLE_F_WORDS_ON_ONE_LINE = 106,
    NCE_MULTIPLE_H_WORDS_ON_ONE_LINE = 107,
    NCE_MULTIPLE_I_WORDS_ON_ONE_LINE = 108,
    NCE_MULTIPLE_J_WORDS_ON_ONE_LINE = 109,
    NCE_MULTIPLE_K_WORDS_ON_ONE_LINE = 110,
    NCE_MULTIPLE_L_WORDS_ON_ONE_LINE = 111,
    NCE_MULTIPLE_P_WORDS_ON_ONE_LINE = 112,
    NCE_MULTIPLE_Q_WORDS_ON_ONE_LINE = 113,
    NCE_MULTIPLE_R_WORDS_ON_ONE_LINE = 114,
    NCE_MULTIPLE_S_WORDS_ON_ONE_LINE = 115,
    NCE_MULTIPLE_T_WORDS_ON_ONE_LINE = 116,
    NCE_MULTIPLE_X_WORDS_ON_ONE_LINE = 117,
    NCE_MULTIPLE_Y_WORDS_ON_ONE_LINE = 118,
    NCE_MULTIPLE_Z_WORDS_ON_ONE_LINE = 119,
    NCE_MUST_USE_G0_OR_G1_WITH_G53 = 120,
    NCE_NEGATIVE_ARGUMENT_TO_SQRT = 121,
    NCE_NEGATIVE_D_WORD_TOOL_RADIUS_INDEX_USED = 122,
    NCE_NEGATIVE_F_WORD_USED = 123,
    NCE_NEGATIVE_G_CODE_USED = 124,
    NCE_NEGATIVE_H_WORD_TOOL_LENGTH_OFFSET_INDEX_USED = 125,
    NCE_NEGATIVE_L_WORD_USED = 126,
    NCE_NEGATIVE_M_CODE_USED = 127,
    NCE_NEGATIVE_OR_ZERO_Q_VALUE_USED = 128,
    NCE_NEGATIVE_P_WORD_USED = 129,
    NCE_NEGATIVE_SPINDLE_SPEED_USED = 130,
    NCE_NEGATIVE_TOOL_ID_USED = 131,
    NCE_NESTED_COMMENT_FOUND = 132,
    NCE_NO_CHARACTERS_FOUND_IN_READING_REAL_VALUE = 133,
    NCE_NO_DIGITS_FOUND_WHERE_REAL_NUMBER_SHOULD_BE = 134,
    NCE_NON_INTEGER_VALUE_FOR_INTEGER = 135,
    NCE_NULL_MISSING_AFTER_NEWLINE = 136,
    NCE_OFFSET_INDEX_MISSING = 137,
    NCE_P_VALUE_NOT_AN_INTEGER_WITH_G10_L2 = 138,
    NCE_P_VALUE_OUT_OF_RANGE_WITH_G10_L2 = 139,
    NCE_P_WORD_WITH_NO_G4_G10_G82_G86_G88_G89 = 140,
    NCE_PARAMETER_FILE_OUT_OF_ORDER = 141,
    NCE_PARAMETER_NUMBER_OUT_OF_RANGE = 142,
    NCE_Q_WORD_MISSING_WITH_G83 = 143,
    NCE_Q_WORD_WITH_NO_G83 = 144,
    NCE_QUEUE_IS_NOT_EMPTY_AFTER_PROBING = 145,
    NCE_R_CLEARANCE_PLANE_UNSPECIFIED_IN_CYCLE = 146,
    NCE_R_I_J_K_WORDS_ALL_MISSING_FOR_ARC = 147,
    NCE_R_LESS_THAN_X_IN_CYCLE_IN_YZ_PLANE = 148,
    NCE_R_LESS_THAN_Y_IN_CYCLE_IN_XZ_PLANE = 149,
    NCE_R_LESS_THAN_Z_IN_CYCLE_IN_XY_PLANE = 150,
    NCE_R_WORD_WITH_NO_G_CODE_THAT_USES_IT = 151,
    NCE_RADIUS_TO_END_OF_ARC_DIFFERS_FROM_RADIUS_TO_START = 152,
    NCE_RADIUS_TOO_SMALL_TO_REACH_END_POINT = 153,
    NCE_REQUIRED_PARAMETER_MISSING = 154,
    NCE_SELECTED_TOOL_SLOT_NUMBER_TOO_LARGE = 155,
    NCE_SLASH_MISSING_AFTER_FIRST_ATAN_ARGUMENT = 156,
    NCE_SPINDLE_NOT_TURNING_CLOCKWISE_IN_G84 = 157,
    NCE_SPINDLE_NOT_TURNING_IN_G86 = 158,
    NCE_SPINDLE_NOT_TURNING_IN_G87 = 159,
    NCE_SPINDLE_NOT_TURNING_IN_G88 = 160,
    NCE_SSCANF_FAILED = 161,
    NCE_START_POINT_TOO_CLOSE_TO_PROBE_POINT = 162,
    NCE_TOO_MANY_M_CODES_ON_LINE = 163,
    NCE_TOOL_LENGTH_OFFSET_INDEX_TOO_BIG = 164,
    NCE_TOOL_MAX_TOO_LARGE = 165,
    NCE_TOOL_RADIUS_INDEX_TOO_BIG = 166,
    NCE_TOOL_RADIUS_NOT_LESS_THAN_ARC_RADIUS_WITH_COMP = 167,
    NCE_TWO_G_CODES_USED_FROM_SAME_MODAL_GROUP = 168,
    NCE_TWO_M_CODES_USED_FROM_SAME_MODAL_GROUP = 169,
    NCE_UNABLE_TO_OPEN_FILE = 170,
    NCE_UNCLOSED_COMMENT_FOUND = 171,
    NCE_UNCLOSED_EXPRESSION = 172,
    NCE_UNKNOWN_G_CODE_USED = 173,
    NCE_UNKNOWN_M_CODE_USED = 174,
    NCE_UNKNOWN_OPERATION = 175,
    NCE_UNKNOWN_OPERATION_NAME_STARTING_WITH_A = 176,
    NCE_UNKNOWN_OPERATION_NAME_STARTING_WITH_M = 177,
    NCE_UNKNOWN_OPERATION_NAME_STARTING_WITH_O = 178,
    NCE_UNKNOWN_OPERATION_NAME_STARTING_WITH_X = 179,
    NCE_UNKNOWN_WORD_STARTING_WITH_A = 180,
    NCE_UNKNOWN_WORD_STARTING_WITH_C = 181,
    NCE_UNKNOWN_WORD_STARTING_WITH_E = 182,
    NCE_UNKNOWN_WORD_STARTING_WITH_F = 183,
    NCE_UNKNOWN_WORD_STARTING_WITH_L = 184,
    NCE_UNKNOWN_WORD_STARTING_WITH_R = 185,
    NCE_UNKNOWN_WORD_STARTING_WITH_S = 186,
    NCE_UNKNOWN_WORD_STARTING_WITH_T = 187,
    NCE_UNKNOWN_WORD_WHERE_UNARY_OPERATION_COULD_BE = 188,
    NCE_X_AND_Y_WORDS_MISSING_FOR_ARC_IN_XY_PLANE = 189,
    NCE_X_AND_Z_WORDS_MISSING_FOR_ARC_IN_XZ_PLANE = 190,
    NCE_X_VALUE_UNSPECIFIED_IN_YZ_PLANE_CANNED_CYCLE = 191,
    NCE_X_Y_AND_Z_WORDS_ALL_MISSING_WITH_G38_2 = 192,
    NCE_Y_AND_Z_WORDS_MISSING_FOR_ARC_IN_YZ_PLANE = 193,
    NCE_Y_VALUE_UNSPECIFIED_IN_XZ_PLANE_CANNED_CYCLE = 194,
    NCE_Z_VALUE_UNSPECIFIED_IN_XY_PLANE_CANNED_CYCLE = 195,
    NCE_ZERO_OR_NEGATIVE_ARGUMENT_TO_LN = 196,
    NCE_ZERO_RADIUS_ARC = 197,
    NCE_I_WORD_MISSING_IN_ABSOLUTE_CENTER_ARC = 198,
    NCE_J_WORD_MISSING_IN_ABSOLUTE_CENTER_ARC = 199,
    NCE_K_WORD_MISSING_IN_ABSOLUTE_CENTER_ARC = 200,
    NCE_S_WORD_MISSING_WITH_G96 = 201
};

enum
{
    RS274NGC_MIN_ERROR = 3,
    RS274NGC_MAX_ERROR = 201
};

#endif                                            /* RS274NGC_RETURN_H */