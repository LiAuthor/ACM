#include<stdio.h>
int main()
{
	int a;
	a=2;
	int b[5];
	printf("%lu\n",sizeof(b));//b��ռ���ֽ� 
	printf("%lu\n",sizeof(b[0]));//b�ĵ�һ����Ԫ�ж�� 
	printf("%lu\n",sizeof(b)/sizeof(b[0]));//�õ��������ж��ٸ�Ԫ�� 
	printf("%p\n",a);//a�ĵ�ַ 
	printf("0x%x\n",a);//a�ĵ�ַ 
	if(&b==b&&b==&b[0])//&����ָ�룬���ߵĵ�ַ��ͬ 
	{
		printf("YES!");
	}
	return 0;
}
