#include<stdio.h>
int main()
{
	int x;
	printf("请输入一个整数：\n");
	scanf("%d",&x);
	int isprime=1;
	int i;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		{
			isprime=0;
			break;
			
		}
	}if(isprime==1){
		printf("%d是素数\n",x);
	}else{
		printf("%d不是素数\n",x);
	}
	return 0;
}
