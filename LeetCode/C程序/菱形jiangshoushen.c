#include<stdio.h> 
int main()
{
	int a,b,i,j,k,n;
	printf("�����������иߣ�\n");
	scanf("%d",&n);      //�����û�����߶�
	 a=(n+1)/2;
	 b=(n+1)/2-1;         //�����η�Ϊ�������벿�� 
	 
	for (i=0;i<=a;i++)
	{
		for(j=a;j>i;j--)
		printf(" ");     //�����ϰ벿�ֿհ��� 
		for(k=0;k<=2*i-2;k++)  //�����ϰ벿����������� 
		printf("*");
		printf("\n"); 
	 }                   //�������ϰ벿�ֽ������ 
	 
	 
	 for (i=0;i<b;i++)
	 {
	 	for (j=0;j<=i;j++)
	    printf(" ");     //�����°벿�ֿհ��� 
		for (k=1;k<2*b-2*i;k++)  //�����°벿����������� 
		printf("*");
		printf("\n");
		 
	 }
	 
	return 0;
}

