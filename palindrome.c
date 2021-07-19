#include<stdio.h>
int main()
{
	int num , rem,temp,sum =0;
	printf("enter a number :");
	scanf("%d",&num);
	temp = num;
	while(num != 0)
	{
		rem = num%10;
		sum = sum*10 +rem;
		num = num/10;
	}
	if(sum == temp )
	printf("Palindrome number :");
	else
	printf("Not a palindrome number");
	return 0;
}