#include<stdio.h>
int main()
{
	char word1[8];//[8]����˸����� ��������7���ַ�������0��β 
	char word2[8];
	scanf("%7s",word1);//7�����ã�����ֻ��7���ַ�����Ķ�����һ��scanf 
	scanf("%7s",word2);
	printf("%s##%s##\n",word1,word2);
	return 0;
}

//     %s���ã������ʣ��Կո�����س���Ϊ��׼ 
