#include <stdio.h>

int face(int a)
{
	if(a == 1)
		return 1;
	else
		return a*face(a-1);
}


int main(int argc, const char *argv[])
{
	printf("%d\n", face(5));
	
	return 0;
}
