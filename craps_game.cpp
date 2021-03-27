/*
* Craps is a gamble played with two dices. The rules of the game are as follows:
* The player who rolls the dice plays the game against
* the casino. The total value of the two dice rolled
** If it is 7 or 11, the player wins.
** If it is 2, 3 or 12, the player loses. (This is called craps!)
** If the total value of the two dice is anything other than the above (i.e. 4, 5,
** 6, 8, 9, 10), the game continues as follows:
*
* The player rolls the dice again until he/she finds the same result. If the player
rolls a 7 (ie the total value of the two dice rolled is 7) before finding the same
result, the player loses. If the player manages to get the same result again
before getting 7, player wins.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ITERATION 100000 

int main()
{
	srand(time(NULL));

	int dice1 = 0;
	int dice2 = 0;
	int sum = 0;
	int user_win = 0;
	int casino_win = 0;

	for (int i = 0; i < ITERATION; i++) {
		int dice1 = rand() % 6 + 1;
		int dice2 = rand() % 6 + 1;
		int sum = dice1 + dice2;
		if (sum == 7 || sum == 11) {
			user_win++;
		}
		else if (sum == 2 || sum == 3 || sum == 12) {
			casino_win++;
		}
		else {
			for (int i = 0;; i++) {
				dice1 = rand() % 6 + 1;
				dice2 = rand() % 6 + 1;
				int new_sum = dice1 + dice2;

				if (new_sum == sum) {
					user_win++;
					break;
				}
				else if (new_sum == 7) {
					casino_win++;
					break;
				}
			}
		}
	}
	double userwin_ratio = (double)user_win / ITERATION;
	double casinowin_ratio = (double)casino_win / ITERATION;
	printf("Win ratio of user: %.2f\n", userwin_ratio);
	printf("Wi ratio of casino: %.2f\n", casinowin_ratio);

}