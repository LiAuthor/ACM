#include<stdio.h>
int main()
{
	int a[10];
	
	printf("%p\n",a);
	printf("%p\n",&a);          //a��&a��&a[0]�����ͬ 
	printf("%p\n",&a[0]);
    printf("%p\n",&a[1]);
	printf("%p\n",&a[2]);
	return 0;
} 
