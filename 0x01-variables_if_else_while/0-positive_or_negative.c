#include <stdlib.h>
#include <time.h>

/**
*main - Entry point
*Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0){
    Printf("is positive\n");
  }
  if (n==0){
    Printf("is zero\n");
  }
   if (n<0){
    Printf("is negative\n");
  }
  
	return (0);
}