#include "Base.hpp"
#include "C.hpp"
#include "B.hpp"
#include "A.hpp"

Base * generate(void)
{
	int     i;
	
	srand (time(NULL));
	i = rand() % 3 + 1;
	if (i == 1)
	{
		std::cout << "Select A class" << std::endl;
		return (new A);
	}
	else if (i == 2)
    {
        std::cout << "Select B class" << std::endl;
        return (new B);
    }
	else
	{
		std::cout << "Select C class" << std::endl;
        return (new C);
	}
}

void identify(Base* p)
{
	(void)p;
	std::cout << "Start pointer identify" << std::endl;
	if (A *a = dynamic_cast<A*>(p))
		std::cout << "its A" << std::endl;
	else if (B *b = dynamic_cast<B*>(p))
		std::cout << "its B" << std::endl;
	else if (C *c = dynamic_cast<C*>(p))
		std::cout << "its C" << std::endl;
}

void identify(Base& p)
{
	(void)p;
	std::cout << "Start reference identify" << std::endl;
	try
	{
		A &a =  dynamic_cast<A&>(p);
		(void)a;
		std::cout << "its A" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		B &b =  dynamic_cast<B&>(p);
		(void)b;
		std::cout << "its B" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		C &c =  dynamic_cast<C&>(p);
		(void)c;
		std::cout << "its C" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
	}
	
}
int main()
{
	Base *ptr;

	ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete ptr;
}