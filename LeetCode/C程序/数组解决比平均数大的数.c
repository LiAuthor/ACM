#include<stdio.h>
int main()
{
	int x;
	int cnt=0;
	double sum;
	int number[100];
	scanf("%d",&x);
	while(x!=-1){
		number[cnt]=x;
		sum+=x;
		cnt++;
		scanf("%d",&x);
	}
	if(cnt>0){
		double average;
		average=sum/cnt;
		printf("ƽ�����ǣ�%f\n",average);
		printf("��ƽ���������Ϊ��\n");
		int i;
		for(i=1;i<cnt;i++){
			if(number[i]>average){
				printf(" %d",number[i]);
			}
		}
	}
	return 0;
}
