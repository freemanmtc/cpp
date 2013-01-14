#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){

	srand(time(0));

	int r0=rand(),rangeA,rangeB;

	/* a + rand() % ((b + 1) -a) */
	std::cout << "plz input the int for the start range: ";
	std::cin >> rangeA;
	std::cout << "start range value: " << rangeA << std::endl;
	std::cout << "plz input the int for the end range: ";
	std::cin >> rangeB;
	std::cout << "end range value: " << rangeB << std::endl;

	int r1= rangeA + rand() % ((rangeB + 1) - rangeA);

	std::cout << "rand with no range: " << r0 << std::endl;
	std::cout << "rand with range [" << rangeA << "," << rangeB << "]: " << r1 << std::endl;

	return 0;
}
