#include<stdio.h>
int main()
{   
    void sum(int begin,int end);//����������ע��;�� 
	sum(10,20);//���ú��� 
	sum(20,30);
	return 0;
} 
void sum(int begin,int end)//�������Լ��������� 
{   int i,sum=0;//������ 
	for(i=begin;i<end;i++)
	{sum+=i;}
	printf("%d��%d�ĺ���:%d\n",begin,end,sum);
}
