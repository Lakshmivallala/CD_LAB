#include<stdio.h>
#include<stdlib.h> //for built-in function exit

void main()
{
	int state=0; //start state
	int i=0;
	char token,input[20];
	printf("Enter the input string: \n");
	scanf("%s",input); //inputing our string
	while((token=input[i++])!='\0') //while string != null
	{
		switch(state)
		{
			case 0:
			if(token=='0')
				state=1;
			else if(token=='1')
				state=2;
			else
			{
				printf("Invalid token");
				exit(0);
			}
			break;

			case 1:
			if(token=='0')
				state=0;
			else if(token=='1')
				state=3;
			else
			{
				printf("Invalid token");
				exit(0);
			}
			break;

			case 2:
			if(token=='0')
				state=3;
			else if(token=='1')
				state=0;
			else
			{
				printf("Invalid token");
				exit(0);
			}
			break;

			case 3:
			if(token=='0')
				state=2;
			else if(token=='1')
				state=1;
			else
			{
				printf("Invalid token");
				exit(0);
			}
			break;
		}
	}
	if(state==0)
		printf("String has been accepted.");
	else
		printf("String has not been accepted.");
}










// #include<stdio.h>
// int swap(int,int);

// void main()
// {
// 	int a=73,b=79;
// 	swap(a,b);
// 	printf("jre %d %d",a,b);
// }
// int swap(int x,int y)
// {
// 	int temp;
// 	temp=x;
// 	x=y;
// 	y=temp;
// 	return (0);
// }