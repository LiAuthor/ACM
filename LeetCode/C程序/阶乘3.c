#include<stdio.h>
int main()
{
	int n;
	int i=1;
	int fact=1;
	
	printf("������һ��������");
	scanf("%d",&n);
	while(i<=n){
		fact*=i;
		i++; 
	}
	printf("%d!=%d",n,fact);
	return 0;
}
