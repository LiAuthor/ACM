#include<stdio.h>
int main()
{
	int x;
	int i;
	int isprime=1;
	
	printf("������һ��������");
	scanf("%d",&x);
	
	for(i=2;i<x;i++){
		if(x%i==0){
			isprime=0;
		}
	}
	if(isprime==1){
		printf("%d������\n",x);
	}else{
	printf("%d��������\n",x);	
	}
	return 0;
}
