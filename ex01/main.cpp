#include <iostream>
struct Data
{
	std::string str;
	int			i;
};

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*> (raw));
}
uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t> (ptr));
}
int main()
{
	Data Data;
	uintptr_t a;
	Data.str = "hello";
	Data.i = 4;
	a =  serialize(&Data);
	std::cout << a << std::endl;
	Data = *deserialize(a);
	std::cout << Data.str << " " << Data.i<< std::endl;
}