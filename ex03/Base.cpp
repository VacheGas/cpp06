#include "Base.hpp"

Base::Base()
{
}

Base::~Base()
{
}

Base::Base(const Base &copy)
{
    (void)copy;
    std::cout << "copy" << std::endl; 
}
Base &Base::operator=(const Base &equal)
{
    (void)equal;
    std::cout << "equal" << std::endl;
    return (*this);
}