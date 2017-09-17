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
			printf("%d\n", i*i);

	}
}
