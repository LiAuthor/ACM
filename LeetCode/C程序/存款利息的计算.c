#include<stdio.h>
int main()
{
	int type,money;
	
	printf("1:һ���Դ������ڡ�\n");
	printf("2:�ȴ�2���ڣ����ں󽫱�Ϣ�ٴ�3�ꡣ\n");
	printf("3:�ȴ�3���ڣ����ں󽫱�Ϣ�ٴ�2�ꡣ\n");
	printf("4:��һ���ڣ����ں󽫱�Ϣ�ٴ�1���ڣ�������5�Ρ�\n");
	printf("5:����ڴ�\n");
	printf("��ѡ��������:\n");
	scanf("%d",&type);
	printf("���������\n");
	scanf("%d",&money);
	float r4,r3,r2,r1,r5;
    r4=0.0585;
    r3=0.0540;
    r2=0.0468;
    r1=0.0414;
    r5=0.0072;
	
	switch(type)
	{
	case 1:
	printf("�����ϢΪ%f",money*r1*5);
	break;
	case 2:
	printf("�����ϢΪ%f",money*(1+2*r2)*r3*3);
	break;
	case 3:
	printf("�����ϢΪ%f",money*(1+3*r3)*r2*2);
	break;
	case 4:
	printf("�����ϢΪ%f",money*(1+r1)*(1+r1)*(1+r1)*(1+r1)*(1+r1)-money);
	break;
	case 5:
	printf("�����ϢΪ%f",money*r5*20);
	break;
	default:
	printf("������ѡ��");
	break; 
	}
	
	return 0;
}
