#pragma once
#include "expressions.h"
BuildingData readInput(const char* filename);

void write_result(const char* filename, const stair_result& stair,
                  const RC_column_result& column);

