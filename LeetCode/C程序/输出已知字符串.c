#include<stdio.h>
int main()
{
	char c[15]={'I',' ','a','m',' ','a',' ','s','t','u','d','e','n','t'};
	int i;
	for(i=0;i<15;i++)
	{
		printf("%c",c[i]);//��ʽ��%c��������һ���ַ� 
	}
	printf("\n");
	
	char b[]={"China"};//��ʽ��%s���������ַ��� 
	printf("%s\n",b);//������ַ�������������\0 
	
	return 0;
}
