#include<stdio.h>
int main()
{
	int a[10],i;
	int *p;
	printf("please enter 10 numbers:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	//for(p=a;p<(a+10);p++)                       //a�����һ��Ԫ�صĵ�ַ 
	//{
	//	printf("%3d",*p);
	//}
	for(i=0;i<10;i++)
	{
		printf("%3d",*(a+i));                     //(a+i)�ǵ�ַ��*(a+i)�Ƕ�ӦԪ�� 
	}
	printf("\n");
	return 0;
}
