#include <stdio.h>

int main(int argc, const char *argv[])
{
	int i;

	for(i=10; i<33; i++)
	{
		int a=(i*i)%10;
		int b=((i*i)/10)%10;
		int c=((i*i)/100)%10;

		if(a==b||a==c||b==c)
		{
			printf("%d,%d,%d\n", a,b,c);
			printf("%d\n", i*i);
		}

	}
}

/*

三位数个位，十位，百位相同的数都列出

*/

