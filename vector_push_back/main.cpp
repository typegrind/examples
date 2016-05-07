
#include "typegrind/logger/buffered_binary.h"

#include <vector>
#include <iostream>


int main(int argc, char** argv)
{
    std::vector< int > v;

    for(int i =0; i < 1000000000 ; ++i)
    {
        v.push_back(i);
    }

    std::cout << *(--v.end()) << std::endl;

    return 0;
}
