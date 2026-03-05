#include "expressions.h"
#include <cmath>

stair_result stairs(int height_stairs, int vertical_step, int horizontal_step)
{
    stair_result result;
    result.height_stairs = height_stairs;
    result.vertical_step = vertical_step;
    result.n_stairs = std::ceil((double)height_stairs / vertical_step);
    result.horizontal_step = horizontal_step;
    result.length_stairs = result.n_stairs * horizontal_step;

    int comfort = horizontal_step + 2 * vertical_step;

    result.rule_valid = (comfort > 550 && comfort < 700);

    return result;
}
