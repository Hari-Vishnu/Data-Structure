#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7};
	int len,i;
	len=sizeof(arr)/sizeof(arr[0]);
	int num;
	printf("enter the number to be searched:");
	scanf("%d",&num);
	for(i=0;i<len;i++)
	{
		if (arr[i]==num)
		{
			printf("the number %d is found at %d position",num,i+1);
		}
	}
}
