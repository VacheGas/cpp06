#ifndef CONVERT_HPP 
#define CONVERT_HPP
#include <iostream>
#include <iomanip> 
class Convert
{
private:

public:
	void to_int(const char *num);
	void to_float(const char *num);
	void to_char(const char *num);
	void to_double(const char *num);
	Convert();
	~Convert();
	Convert(const Convert &conv);
	Convert &operator=(const Convert &equal);
};

#endif