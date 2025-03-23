#include <iostream>

static constexpr int BUILD_NUM = 1; 

int main(int, char **) {
	std::cout << "build " << BUILD_NUM << std::endl;
	std::cout << "Hello, World!" << std::endl;
	return 0;
}