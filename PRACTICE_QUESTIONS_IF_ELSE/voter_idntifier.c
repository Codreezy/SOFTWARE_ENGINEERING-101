#include <stdio.h>
#include <stdlib.h>
#include <time.>
#include <stdbool.h>

int main()
{
	int age;
	printf("Enter your age please: ");
	scanf("Age is %d", &age);
	if (age < 18)
	{
		printf("Sorry, you are not illegible to vote.");
	}
	else if (age > 18 && age < 70)
	{
		printf("You are elligible to vote, proceed to the voting booth.");
	}
	else (age > 70)
	{
		printf("You are elligible to vote, might you need assistance to vote?");
	}
	return (0);
}
