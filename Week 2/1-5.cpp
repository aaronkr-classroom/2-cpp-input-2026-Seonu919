#include <iostream>
#include <string>


int main() {
	//1-5
	{
		std::string s = "a string";
		{
			std::string x = s + ", really";
			std::cout << s << std::endl;
		}
		std::cout << x << std::endl;
		std::cout << "-----------------------------------" << std::endl;

	}
	return 0;

}