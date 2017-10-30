#include <stdio.h>
#include <stdbool.h>

bool am_little_endian()
{
	unsigned short i=1;
	return (int)*((char *)(&i)) ? true : false;
}

int main(int argc, const char *argv[])
{
	if(am_little_endian())
	{
		printf("this pc is little\n");
	}
	else
	{
		printf("this pc is big\n");
	}

	return 0;
}

