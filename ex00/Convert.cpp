#include "Convert.hpp"

Convert::Convert()
{
	std::cout << "Convert is create" << std::endl;
}

Convert::~Convert()
{
}

Convert & Convert::operator=(const Convert &equal)
{
	std::cout<<"Assignation operator called"<<std::endl;
	if(this == &equal)
		return (*this);
	return (*this);
}

Convert::Convert(const Convert &conv)
{
	*this = conv;
}

void Convert::to_char(const char *num)
{
	int i;
	std::cout << "char = ";
	i = 0;
	if (strlen(num) == 1 && !(num[0] >= 48 && num[0] <= 57))
	{
		std::cout << static_cast<char>(num[0]) << std::endl;
		return ;
	}
	i = atof(num);
	if(i == INT_MIN || i == INT_MAX || i < 0 || i > 127)
		std::cout << "impossible"<< std::endl;
	else if (i > 31)
		std::cout<< static_cast<char>(i)<< std::endl;
	else
		std::cout << " Non displayable"<< std::endl;
	
}

void Convert::to_int(const char *num)
{
	int i;

	std::cout << "int = ";
	i = static_cast<int>(atof(num));
	if (strlen(num) == 1 && !(num[0] >= 48 && num[0] <= 57))
		std::cout << static_cast<int>(num[0])<< std::endl;
	else if (i == INT_MIN || i == INT_MAX)
		std::cout << "impossible"<< std::endl;
	else
		std::cout << static_cast<int>(std::atof(num))<< std::endl;
}

void Convert::to_double(const char *num)
{
	std::cout << "double = ";
	if (strlen(num) == 1 && !(num[0] >= 48 && num[0] <= 57))
		std::cout << static_cast<int>(num[0]) << ".0"<< std::endl;
	else
		std::cout <<std::fixed<<std::setprecision(1)<< static_cast<double>(std::atof(num))<< std::endl;
}

void Convert::to_float(const char *num)
{
	std::cout << "float = ";
	if (strlen(num) == 1 && !(num[0] >= 48 && num[0] <= 57))
		std::cout << static_cast<int>(num[0]) << ".0f"<< std::endl;
	else
		std::cout <<std::fixed<<std::setprecision(1) << static_cast<float>(std::atof(num)) << "f" <<std::endl;
}