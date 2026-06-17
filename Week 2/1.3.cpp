#include <iostream>
#include <string>


int main() {
	//1-3
	{
		const std::string s = "a string";
		std::cout << s << std::endl;
	}
	{
		const std::string s = "another string";
		std::cout << s << std::endl;
		std::cout << "-----------------------------------" << std::endl;
	}

	return 0;
}