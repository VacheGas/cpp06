#include "C.hpp"

C::C()
{
}

C::~C()
{
}

C::C(const C &copy)
{
    (void)copy;
    std::cout << "copy" << std::endl; 
}
C &C::operator=(const C &equal)
{
    (void)equal;
    std::cout << "equal" << std::endl;
    return (*this);
}