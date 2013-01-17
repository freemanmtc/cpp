#include <iostream>
int binSearch(int data[],int numElements,int searchKey);

int main(){

	int num;
	int elements[]={1,4,5,6,9,14,21,23,28,31,35,42,46,50,53,57,62,63,65,74,79,89,95};
	
	/* do the loop until a int or char x are tiped */
	while(std::cout << "enter the search key, x  to exit: " and !(std::cin >> num) ){
	
		/* clean the erro flag of cin */
		std::cin.clear();
		/* capture the tiped value and convert to char to we know if is that we want, i could do this with asc*/
		char inputedValue;
		inputedValue=std::cin.get();
		if(inputedValue=='x' or inputedValue=='X')
		{
			std::cout << "exiting \n";
			break;
		}
		else
		{
			std::cout << "ithe data type is not correct. just int and char x are accepted: \n";
			std::cin.get();
		}
	}	
		
	return 0;
}
