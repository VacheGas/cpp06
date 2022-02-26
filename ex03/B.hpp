#ifndef B_HPP 
#define B_HPP
#include "Base.hpp"
class B : public Base
{
private:
	/* data */
public:
	B();
	virtual ~B();
	B(const B &copy);
	B &operator=(const B &equal);
};

#endif