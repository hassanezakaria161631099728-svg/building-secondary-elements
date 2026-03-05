#include "io.h"
#include <fstream>

void write_result(const char* filename, const stair_result& result)
{
    std::ofstream file(filename);

    if(file.is_open())
    {
        file << "-----------------\n";
        file << "height_stairs " << result.height_stairs << "\n\n";
        file << "vertical_step " << result.vertical_step << "\n\n";
        file << "Number of stairs " << result.n_stairs << "\n\n";
        file << "horizontal_step " << result.horizontal_step << "\n\n";
        file << "Stair length " << result.length_stairs << "\n\n";

        if(result.rule_valid)
            file << "Comfort rule validated\n";
        else
            file << "Comfort rule NOT validated\n";

        file.close();
    }
}
