#include<stdio.h>
void sum(int x,int y);
int main()
{
	int a,b;
	printf("��������:\n");
	scanf("%d %d",&a,&b);
	sum(a,b);
	return 0;
} 
void sum(int x,int y)
{
	int i=0,sum=0; 
	for(i=x;i<=y;i++)
	{
		sum+=i;
	}
	printf("%d��%d�ĺ�Ϊ%d",x,y,sum);
}
