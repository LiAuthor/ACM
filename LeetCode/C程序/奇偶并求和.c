#include<stdio.h>
void estimate(int a[]);
int main()
{
	int b[5];
	int i=0; 
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<5;i++)
	{
		estimate(b[i]);
	}
	return 0;
}
void estimate(int a[])
{
	if(a[]/2=0)
	{printf("%d��ż��\n",a[]);}
	else
	{printf("%d������\n",a[]);}
}
