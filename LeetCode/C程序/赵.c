#include<stdio.h>
int main()
{
	int type,choose;
	printf("ѡһλ�����Ȥ�����Ѱ�!\n");
	printf("1:С��  2:С��  3:С��\n");
	scanf("%d",&type);
	switch(type)
	{
		case 1:
			printf("���������һ���������ˣ�\n");
			printf("  1:��Զ��    2:����\n");
			scanf("%d",&choose);
			if(choose==1){
				printf("��������߿����ˡ�\n"); 
			}else{
				printf("���ţ���Ҳ����ô���á�\n");
			}break;
		case 2:
			printf("����һ��ɹ�ɶ�£�\n");
			printf("  1:��ƹ����    2:һ��Թ���\n");
			scanf("%d",&choose);
			if(choose==2){
				printf("ʲô������ô��֪����\n"); 
			}else{
				printf("��֪��������ÿ�ζ������䡣\n");
			}break;
		case 3:
			printf("�㳭��������ҵ��\n");
			printf("  1:����      2:û����\n");
			scanf("%d",&choose);
			 if(choose==1){
				printf("����������ʵ��ʵ˵��\n"); 
			}else{
				printf("�찡�����Ǹ�ƭ�ӡ�\n");
			}break;
			default:
	            printf("������ѡ��");
	         break; 
		 
	}return 0;
}
