#include <iostream>
#include <cstdlib>

std::string	getChar(std::string str)
{
    std::string ret;

	if (is_float(str))
	{

	}
    int i = std::stoi(str);
    float f = std::stof(str);
    double d = std::stod(str);

    std::cout << std::endl << i << std::endl;
    std::cout << std::endl << f << std::endl;
    std::cout << std::endl << d << std::endl;
    return (ret);
}

int main(int argc, char **argv)
{
    std::string number;

    if (argc > 1)
    {
        number = argv[1];
        if (number.length() > 0)
        {
            std::cout << "char : " << getChar(number) << std::endl;
            /*
            std::cout << "int : " << getInt(number);
            std::cout << "float : " << getFloat(number);
            std::cout << "double : " << getDouble(number);
            */
        }
    }
    return 0;
}