#include<stdio.h>
int main()
{
	int number[10]={0};//��������ĵڶ��ַ�ʽ
	int i=0,x=1;
	//for(i=0;i<10;i++)//��������ĵ�һ�ַ�ʽ 
	//{
	//	number[i]=0;
	//}
	while(x!=-1)
	{
		scanf("%d",&x);
		if(x>0&&x<10)
		{
			number[x]++;
		}
	}
	for(x=0;x<10;x++)//����������ؽ���Ľ� 
	{
		printf("%d���ֵĴ�����%d\n",x,number[x]);
	}
	return 0;
}
