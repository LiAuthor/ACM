#include<stdio.h>
int main()
{
	char str1[]="computer";
	char str2[]="compare";
	
	if(strcmp(str1,str2)>0)
	//strcmp(�ַ���1���ַ���2)���������ַ���������������ַ��Ƚϣ���ACKII��ֵ�Ƚϴ�С��
	//ֱ�����ֲ�ͬ���ַ�������'\0'Ϊֹ 
	{
		printf("Yes!");
	}
	return 0;
}
