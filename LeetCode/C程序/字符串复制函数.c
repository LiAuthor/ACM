#include<stdio.h>
int main()
{
	char str1[15],str2[]="I am student.";
	char str3[10];
	strcpy(str1,str2);
	//strcpy(�ַ�����1,�ַ���2)��ʾ�ַ������ƺ���,���ַ���2���Ƶ��ַ�����1��ȥ 
	printf("%s\n",str1);
	
	strncpy(str3,str2,6);
	//strncpy(�ַ�����1,�ַ���2,�����ַ�����) ��ʾ���ַ���2��ǰn���ַ����Ƶ��ַ�����1��ȥ 
	printf("%s\n",str3);
	return 0;
}
