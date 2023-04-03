#include <fancy_function.h>

std::string
fancy_function::be_fancy(int scale) const
{
    return "I am fancy one a level of " + std::to_string(scale);
}
