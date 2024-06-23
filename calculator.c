#include<stdio.h>

int main()
{
	int number1, number2;
	char op;

	printf("Enter number1: ");
	scanf("%d",&number1);

	printf("Enter number2: ");
	scanf("%d",&number2);



	printf("Choose Operator from list : [+, -, *, /, &, |, ~] : ");
	scanf(" %c",&op);

	if(op == '+')
	{
		printf("Resultant: %d", number1+number2);
	}
	else if(op == '-')
	{
		printf("Resultant: %d ", number1-number2);
	}
	else if(op == '*')
	{
		printf("Resultant: %d", number1*number2);
	}
	else if(op == '/')
	{
		printf("Resultant: %d", number1/number2);
	}
	else if(op == '&')
	{
		printf("Resultant: %d", number1&number2);
	}
	else if(op == '|')
	{
		printf("Resultant: %d", number1|number2);
	}
	else if(op == '~')
	{
		printf("Resultant: %d", ~number1);
	}
	else
	{
		printf("Invalid Operator Provided");
	}
	printf("\n\n");

	return 0;
}

