#include<stdio.h>
int main()
{
	int max(float x,float y);
	float a,b,c;
	
	scanf("%f %f",&a,&b);
	c=max(a,b);//���ʽ����� 
	printf("max is %f\n",c);
	return 0;
}
int max(float x,float y)
{
	float z;
	z=x>y?x:y;//���ʽ����� 
	return (z);
}
