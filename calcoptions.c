#include<stdio.h>

int main()
{
	printf("\nMenu\n\tA-Addition \n\tS-Subtraction \n\tM-Multiplication \n\tD-Division \n\n\n\tEnter your choice : ");
	char ch;
	scanf("%c",&ch);
	int a,b;
	printf("\n\t\tInput two numbers : ");
	scanf("%d %d",&a,&b);
	if(ch=='A')
	{
		printf("\n\t\tResult of Addition :  %d",a+b);
	}
	else if(ch=='S')
	{
		printf("\n\t\tResult of Subtraction : %d",a-b); 
	}
	else if(ch=='M')
	{
		printf("\n\t\tResult of Multiplication : %d",a*b);
	}
	else if(ch=='D')
	{
		printf("\n\t\tResult of Division : %f",(float)a/(float)b);
	}
	else
	{
		printf("\n\t\tInvalid Choice!");
	}
	printf("\n\n\n");
	return 0;
}
