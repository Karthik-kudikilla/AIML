#include<stdio.h>
int main()
{
	printf("Welcome to the zoo park online ticket booking WARANGAL\n");
	printf("NOTE:1.The fees for those who's age is below 15 will be charged about Rs=10.\n");
		printf("NOTE:2.The fees for those who's age is above 15 and below 60 will be charged about Rs=15.\n");
			printf("NOTE:3.The fees for those who's age is above 60 will be charged about Rs=20.\n");
	int sum=0,i;
	int num,ans=0,fact=0;
	printf("How many tickets do u want :\n");
	scanf("%d",&num);
	int arr[num];
	printf("Enter the ages of each person one by one\n");
	for(i=1;i<=num;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=num;i++)
	{
		printf("The age of the %d st person is=%d\n",i,arr[i]);
	}
	for(i=1;i<=num;i++)
	{
		if(arr[i]<=15)
		{
			sum=sum+10;
		}
		else if(arr[i]>15&&arr[i]<=60)
		{
			ans=ans+15;
		}
		else
		{
			fact=fact+20;
		}
	}
	printf("###############\n");
	printf("The bill should be paid for children=%d\n",sum);
	printf("The bill should be paid for adults =%d\n",ans);
	printf("The bill should be paid for supercitizens=%d\n",fact);
	int totalfees=sum+ans+fact;
	printf("##################\n");
	printf("The total bill must be paid=%d",totalfees);
	
}
