#include <search.h>

static const uint8_t array[200] = {
	0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
	10, 11, 12, 14, 15, 17, 18, 19,
	20, 22, 24, 25, 26, 27, 28, 30,
	31, 32, 33, 35, 36, 37, 38, 39,
	40, 41, 42, 43, 44, 45, 46, 47,
	49, 50, 52, 53, 55, 56, 57, 58,
	59, 60, 61, 62, 63, 64, 65, 66,
	68, 69, 74, 75, 77, 78, 79, 80,
	81, 83, 84, 85, 86, 89, 90, 91,
	92, 93, 94, 95, 96, 98, 100, 101,
	102, 103, 104, 105, 106, 107, 108,
	109, 111, 113, 114, 115, 116, 117,
	119, 120, 122, 123, 126, 127, 128,
	129, 130, 132, 134, 135, 136, 137,
	138, 139, 140, 141, 142, 143, 146,
	148, 150, 154, 155, 156, 157, 158,
	159, 160, 161, 163, 164, 165, 166,
	167, 168, 169, 170, 171, 172, 173,
	175, 179, 180, 181, 182, 183, 184,
	187, 188, 190, 191, 192, 193, 194,
	195, 196, 198, 199, 201, 202, 203,
	204, 207, 208, 209, 211, 213, 214,
	215, 218, 219, 220, 221, 222, 223,
	224, 225, 226, 228, 230, 231, 232,
	233, 234, 235, 236, 237, 238, 240,
	241, 242, 243, 244, 245, 246, 247,
	248, 249, 250, 252, 254, 255
};
