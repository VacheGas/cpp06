#include "Convert.hpp"
//#include <iostream>

int ret_error_mess()
{
	std::cout << "enter one argument please" << std::endl;
	return (0); 
}
int main(int argc, char *argv[])
{
	Convert converter;
   if (argc != 2)
		return (ret_error_mess());
	converter.to_char(argv[1]);
	converter.to_int(argv[1]);
	converter.to_double(argv[1]);
	converter.to_float(argv[1]);
} /*  std::cout << (float)atof(argv[1])<< std::endl;
   int i = (int)atof(argv[1]) == INT_MIN ;
   std::cout << i<< std::endl;
   std::cout << i<< std::endl;*/