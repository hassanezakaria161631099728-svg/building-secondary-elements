#include "expressions.h"
#include "io.h"
#include <iostream>
int main()
{
    // 1. Read TXT
    BuildingData d = readInput("input.txt");

    stair_result stair = stairs(d, d.height_floor, d.vertical_step, d.horizontal_step);

 RC_column_result  column = RC_column(d ,d.S, d.G1 , d.G2 , d.n_floors , d.fc28 , d.fe,
                            d.Q_rooftop ,d.Q_current_floor ,d.Q_ground_floor);

    write_result("result.txt", stair, column);

    return 0;
}
