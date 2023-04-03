#include <iostream>
#include <string>

#include <fancy_function.h>

int
main(int argc, char** argv)
{
    fancy_function ff;
    if (2 == argc) {
        std::cout << ff.be_fancy(std::stoi(argv[1])) << std::endl;
    } else {
        std::cout << "No input given. Assume 42." 
                << std::endl
                << ff.be_fancy(42) 
                << std::endl;
    }
    return 0;
}
