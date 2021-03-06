#pragma once

typedef enum
{
	COMMAND_TYPE_NONE = 0,
	COMMAND_TYPE_GCODE = 1,
	COMMAND_TYPE_DCODE = 2,
	COMMAND_TYPE_MCODE = 3
}COMMAND_TYPE;

typedef enum
{
	INTERPOLATION_LINEAR = 1,
	INTERPOLATION_CLOCKWISE = 2,
	INTERPOLATION_ANTICLOCK = 3
}PRIMARY_INTERPOLATION;
typedef enum
{
	OUTPUT_TEST = 0,
	OUTPUT_DXF = 1,
	OUTPUT_PNG = 2,
	OUTPUT_WKT = 3,
	OUTPUT_SQL = 4
}OUTPUT_TYPE;

