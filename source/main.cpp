#include "expressions.h"
#include "io.h"

int main()
{
    double height_floor = 3.06;
    int height_stairs = height_floor / 2 * 1000;
    int vertical_step = 180;
    int horizontal_step = 250;

    stair_result result = stairs(height_stairs, vertical_step, horizontal_step);

    write_result("result.txt", result);

    return 0;
}
