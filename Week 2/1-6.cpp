#include <iostream>
#include <string>

int main() {
	//1-6
	{
		std::cout << "What is your name? ";
		std::string name;
		std::cin >> name;
		std::cout << "-----------------------------------" << std::endl;
		std::cout << "Hello, " << name << std::endl << "And what is yours? ";
		std::cin >> name;
		std::cout << "-----------------------------------" << std::endl;
		std::cout << "Hello, " << name << "; nice to meet you too!" << std::endl;
	}


	return 0;

}

