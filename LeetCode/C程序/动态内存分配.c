#include<stdio.h>
#include<stdlib.h>//ʹ��malloc����Ҫ�õ�ͷ�ļ� 
int main()
{
	int number;
	int *a;//����������int* a��int *a������
	//int* a��int *a��������ͬ����ʾaΪint��ָ�� 
	int i;
	printf("��������:");
	scanf("%d",&number);
	a=(int*)malloc(number*sizeof(int));
	//malloc��������������void*,��Ҫ����ת��Ϊ�Լ���Ҫ�����ͣ���int*
	//malloc����Ŀռ����ֽ�Ϊ��λ��number*sizeof(int)��ʾ��һ��int����ռ���ĸ��ֽ�
	//һ������number*4���ֽڿռ䣬number��int���� 
	for(i=0;i<number;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=number-1;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
	free(a);//malloc��ϵͳҪ��һ���ֿռ䣬ʹ�ù���Ҫʹ��free��������黹 
	return 0;
}
