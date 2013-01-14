#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){

	srand(time(0));

	int r0=rand();

	/* a + rand() % ((b + 1) -a) */
	int rangeA=5;
	int rangeB=15;
	int r1= rangeA + rand() % ((rangeB + 1) - rangeA);

	std::cout << "rand with no range: " << r0 << std::endl;
	std::cout << "rand with range [" << rangeA << "," << rangeB << "] :" << r1 << std::endl;

	return 0;
}
