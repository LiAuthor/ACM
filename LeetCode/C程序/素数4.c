#include<stdio.h>
int main()
{
	int x;
	int isprime=1;
	int i;
	printf("������һ������\n",x);
	scanf("%d",&x);
	for(i=2;i<x;i++)
	{
		if(x%1==0)
		{
			isprime=0;
			break;
		}	
	} if(isprime==1)
	        {
			printf("%d������\n",x);
			}
			else{
				printf("%d��������\n",x);
			}return 0;
	
}
