#include<stdio.h>
	void sum(int begin,int end);//���� 
	int main()
	{
	sum(10,20);                //���� 
	sum(1,5);
	sum(5,10);
	return 0;
    }
    void sum(int begin,int end)//���� 
	{
	int sum=0;
	int i;
	for(i=begin;i<=end;i++)
	{
		sum+=i;
	}
	printf("%d��%d�ĺ���%d\n",begin,end,sum);
	}
	
