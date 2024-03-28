#include <iostream>
#include <string>

int main()
{
	std::cout<<"Enter your name: "; 
	string name; //variable initialization
	std::cin >> name; //request value
        std::cout << "Hello World from " << name << std::endl; //prints hello world
        return 0;
}
