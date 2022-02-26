#ifndef BASE_HPP 
#define BASE_HPP
#include <iostream>

class Base
{
public:
    Base();
    virtual ~Base();
    Base(const Base &copy);
	Base &operator=(const Base &equal);
};
#endif