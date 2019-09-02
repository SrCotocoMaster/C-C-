#include<stdio.h>


int num;
int n;

int main()
{
	scanf("%d", &n);
	
	for(num = 1;n >1;n = n -1)
	{
	
	num = num * n;
		
	}
	printf ("\n %d \n",num);
	return 0;
}

