#include<stdio.h>
int main()
{
	int x;
	int count[6];
	int number=1;
	scanf("%d",&x);
	if(x<0){                              //�жϸ�������� 
		printf("fu");
		x=-x;
	}
	int t=x,q=x,y;
	while(t>0){                           //�������ֽ� 
		t=t/10;
		y=q%10;
		q=t;
		count[number]=y;                  //��ÿλ���������� 
		number++;
	}
	while(number>1){                      //����ѭ������ 
	number--;
	switch(count[number])
	{
	case 1:	printf(" yi");
	break;
	case 2:	printf(" er");
	break;
	case 3:	printf(" san");
	break;
	case 4:	printf(" si");
	break;
	case 5:	printf(" wu");
	break;
	case 6:	printf(" liu");
	break;
	case 7:	printf(" qi");
	break;
	case 8:	printf(" ba");
	break;
	case 9:	printf(" jiu");
	break;
	}	
	}
	return 0;
}
