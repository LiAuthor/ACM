#include<stdio.h>
int main()
{
	int a;
	int count=0;
	
	printf("������һ��������");
	scanf("%d",&a);
	do{
		a/=10;
		count++;
	}while(a>=1);
	printf("����������������%dλ����\n",count);
	return 0;
}
