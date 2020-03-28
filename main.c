#include "stdio.h"

int coolfunction(int, int);

int main()
{
	int a=5;
	int b=7;
	int i;
	for (i=0;i<5;i++)
	{
		printf("The result of coolfunction is: %i\n\n",coolfunction(a,b));
		a++;
	}
	return 0;
}
