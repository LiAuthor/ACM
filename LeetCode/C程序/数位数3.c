#include<stdio.h>
int main()
{
	int x;
	int count=0;
	
	printf("������һ��������");
	scanf("%d",&x);
	
	do{
		x/=10;
		count++;
	} while(x>1);
	printf("���������%dλ��\n",count);
	return 0;
}
