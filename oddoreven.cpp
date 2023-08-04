#include<stdio.h>
int main(){
	int len,j;
	int i[]={1,2,3,4,5,6,7};
	len=sizeof(i)/sizeof(i[0]);
	printf("even numbers:");
	for(j=0;j<len;j++)
	{
		if (i[j]%2==0)
		{
			printf("%d,",i[j]);
		}
	}
	printf("\nodd numbers:");
	for(j=0;j<len;j++)
	{
		if (i[j]%2!=0)
		{
			printf("%d,",i[j]);
		}
	}
}
