#include <stdio.h>

int main(int argc, const char *argv[])
{
	int day = 0;

	float money = 0;
	int a;

	for(a = 2; a < 100; day++, a*=2)
	{
		money = a*0.8+money;
	}

	printf("%d %f\n" , day, money/day);
	return 0;
}



