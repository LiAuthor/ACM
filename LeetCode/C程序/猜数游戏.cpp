#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	srand (time(0));
	int number=rand()%100+1;
	int count=0;
	int a=0;
	//�������
	printf("���Ѿ������һ��1��100֮�����,");
	do{
		printf("����²��������\n");
		scanf("%d",&a);
		count++;
		if(a>number){
			printf("��������µ������ˡ�");
	
		}else if(a<number){
			printf("��������µ���С�ˡ�");
		}
	} while(a!=number);
	//do-whileѭ�� 
	printf("̫���ˣ�������%d�βµ��˴𰸡�\n",count);
	return 0;
}
