#include <stdio.h>
#include <stdlib.h>
int main()
{
	float score;
	printf("Enter your test score: ");
	scanf("Your score is %f", &score);
	if (score =>85 && score =<100)
	{
		printf("Your score is A");
	}
	else if (score =>80 && score <85)
	{
		printf("Your score is B");
	
	}
	else if (score =>70 && score <80)
	{
		printf("Your score is C");
	
	}
	else if (score =>60 && score <70)
	{
		printf("Your score is D");
	
	}
	else if (score =>50 && score <60)
	{
		printf("Your score is E");
	}
	else (score < 50)
	{
		printf("You need to redo the test!");
	}
	return (0);
}
