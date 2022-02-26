#include "A.hpp"

A::A()
{
}

A::~A()
{
}

A::A(const A &copy)
{
    (void)copy;
    std::cout << "copy" << std::endl; 
}

A &A::operator=(const A &equal)
{
    (void)equal;
    std::cout << "equal" << std::endl;
    return (*this);
}