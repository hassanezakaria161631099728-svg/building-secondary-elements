#pragma once
struct stair_result
{
    int height_stairs;
    int vertical_step;
    int n_stairs;
    int horizontal_step;
    int length_stairs;
    bool rule_valid;
};

stair_result stairs(int height_stairs, int vertical_step,int horizontal_step);
