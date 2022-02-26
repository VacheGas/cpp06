#include "B.hpp"

B::B()
{
}

B::~B()
{
}

B::B(const B &copy)
{
    (void)copy;
    std::cout << "copy" << std::endl; 
}
B &B::operator=(const B &equal)
{
    (void)equal;
    std::cout << "equal" << std::endl;
    return (*this);
}