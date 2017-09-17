#include <stdio.h>

int main(int argc, const char *argv[])
{
	int a=2;
	printf("%d", (a=3*5,a=5+3,a=7*8));
	return 0;
}
