#include<stdio.h>
int main()
{
	double price,money=0;
	double money1=0;
	int num=0;
	
	printf("������۸�:\n");
	scanf("%lf",&price);
	printf("����������:\n");
	scanf("%d",&num);
	printf("���������:\n");
	scanf("%lf",&money1);
	
	printf("���㣺%lf",money1-num*price);
	
	return 0;
}
