#include<stdio.h>
int main(void)
{
	int i=0;
	int p;
	p=(int)&i;//ǿ��ת��      //ȥ��(int)�Կɵõ���ͬ���  һ��warning 
	printf("0x%p\n",p);
	printf("%p\n",&i);//%p��ַ
	printf("%lu\n",sizeof(int));//�������int���ֽ���   64λ����intΪ4  &iΪ8     �� 
	printf("%lu\n",sizeof(&i));//���&i���ֽ���      32λ��������int��&i�ֽ������ 
	return 0;
}
