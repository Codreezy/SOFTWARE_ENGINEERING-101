#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
	//We are telling the random no. generator where to get the seed value from & that is time
	srand(time(NUll));
	//This is where we will get our random number from the rand()
	//You will notice we use the modulus operator to get the numbers generated within our range of 0-5
	int randomNumber = rand() % 6;
	printf("Guess a number 0-5: ");
	int number;
	scanf("%d", &number);
	if (number == randomNumber)
	{
		printf("You win!/n");
	}
	else 
	{
		printf("You did not win! Try again/n");
	}
	return (0)
}

	
			
