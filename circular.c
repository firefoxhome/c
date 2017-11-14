#include <stdio.h>
#include <ctype.h>

#define NMAX 8

int iput = 0;
int iget = 0;
int n = 0;

double buffer[NMAX];


int addring(int i)
{
	return (i+1) == NMAX ? 0: i+1;
}

double get(void)
{
	int pos;

	if(n>0)
	{
		pos = iget;
		iget = addring(iget);
		n--;
		return buffer[pos];
	}
	else
	{
		printf("BUffer is empty\n");
		return 0.0;
	}
}

void put(double z)
{
	if(n <  NMAX)
	{
		buffer[iput] = z;
		iput = addring(iput);
		n++;
	}
	else
	{
		printf("Buffer is full \n");
	}
}

int main(int argc, const char *argv[])
{
	char opera[5];
	double z;
	do{
		printf("Please input p|g|e?");
		scanf("%s", opera);

		switch(tolower(opera[0])) 
		{
		case 'p':
			printf("Please input a float number?");
			scanf("%lf", &z);
			put(z);
			break;

		case 'g':
			z = get();
			printf("%8.2f from Buffer \n",z);
			break;

		case 'e':
			printf("End\n");
			break;

		default:
			printf("%s - Operation command error!\n", opera);
		}

	}while(opera[0] != 'e');

	return 0;
}
