#include <iostream>

int main (int argc, char **argv)
{
	if(argc > 1)
		for (int i = 1; i < argc; i++)
			for(int c = 0; argv[i][c]; c++)
				{
					char upperChar = static_cast<char>(std::toupper(static_cast<unsigned char>(argv[i][c])));
					std::cout << upperChar;
				}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}