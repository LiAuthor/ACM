#include<stdio.h>
int main()
{
	int a=100,b=10;//�������ͱ�������ʼ�� 
	int *pointer_1,*pointer_2;//����ָ����� 
	pointer_1=&a;//�ѱ�����ַ����ָ����� 
	pointer_2=&b;
	printf("a=%d,b=%d\n",a,b);
	printf("*pointer_1=%d,*pointer_2=%d\n",*pointer_1,*pointer_2);
	return 0;
}
