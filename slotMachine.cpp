/* slot machine test */
/*
 * create a slot machine, the program sohould start the playor off with 1000.00 bucks
 *
 * how a slot machine works
 * after the player inout his bet. the promagram must calculate 3 random numbers in the range 2,7 and output them neatly on the screen.
 *
 * if all three numbers are 7, the the player wins ten times their betting money.
 * if the three numbers are all the same, but not sevens, the player win five times
 * if two out of the tree numbers are the same, then the player wins three times
 * else the player looses his bet
 */

// todo: fix the bug from cin fail and switch default
#include <iostream>
#include <cstdlib>
#include <ctime>
int main(){

	srand(time(0));
	

	int betMoney=1000;
//	bool continue=false;
	int choice, bet;
	
//	std::cout << betMoney;
	std::cout << "#### Welcome to freemanmtc' Slot Machine ! ##### \n## Have Fun ##\n";

	while(true){
		std::cout << "what you want to do? \n(1)Play (2)Go home\n";
		std::cin >> choice;

		switch(choice){
			case 1:
				std::cout << "so, lets start the game!!!\n";
				
				while(betMoney>0){
					std::cout << "you have " << betMoney << " bucks to bet.\n" << "how much money you want to bet?\n";
	
					std::cin >> bet;
					if(bet>betMoney){
						std::cout << "you do not have this amount of money! \n Try another amount.\n";
						std::cin >> bet;	
					}else if(bet<=0){
						std::cout << "your bet need to be more than 0 bucks budy!\nTry it again!\n";
						std::cin >> bet;
					
					}else{
						std::cout << "you are betting "<< bet << "bucks.\nso lets roll the gears!\n";
						int r1= 2 + rand() % ((7 + 1) - 2);
						int r2= 2 + rand() % ((7 + 1) - 2);
						int r3= 2 + rand() % ((7 + 1) - 2);
						std::cout << r1 << " | " << r2 << " | " << r3 << " | " << std::endl;
						//betMoney=betMoney+(bet*10); // all 7
						//betMoney=betMoney+(bet*5); // all same
						//betMoney=betMoney+(bet*3); // 2 on tree
						
					}
							
				}	

				std::cout << "you have no money, go home!\n";
				break;
			case 2:
				std::cout << "bye bye !\n";
				return 0;
				break;
			default:
				if(std::cin.fail()){
					std::cin.clear();
					std::cin.ignore(10,'\n');
				}
				std::cout << "you have just two options here man\n";
				break;
		}
	}
	std::cin.get();
	return 0;
}
