#include<stdio.h>
enum COLOR {RED,YELLOW,GREEN,NumCOLORS};
int main()
{
	int color=-1;
	char *ColorNames[NumCOLORS]={"red","yellow","green"};
	char *colorNames=NULL;
	char colorName;
	
	printf("��������ϲ������ɫ�Ĵ���:");
	scanf("%d",&color);
	if(color>=0&&color<NumCOLORS) {
		colorName=ColorNames[color];
	}else{
		colorName="unknow";
	}
	printf("��ϲ������ɫ��%s\n",colorName);
	return 0;
}
