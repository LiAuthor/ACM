#include<stdio.h>
int main()
{
	int x;
	int cnt=0;
	int sushu=1;
	int count[100];
	for(x=2;cnt<100;x++){
		int i;
		int isprime=1;
		for(i=2;i<x;i++){
			if(x%i==0){
				isprime=0;
				break;
			}
		}
		if(isprime==1){
			printf("%d ",x);
			cnt++; 
			count[sushu]=x;
			sushu++;
		}
 }  
	printf("\n");
	int a,b;
	int sum=0;
	sushu=1;
	printf("����Ϊǰ100�������������������������:\n");
	scanf("%d %d",&a,&b);
	if(a<b&&a>=1&&b<=100)
	{
		int begin;
		for(begin=a;begin<=b;begin++){
			sum+=count[begin];	
		}
		printf("������Ϊ%d\n",sum);
	}
	return 0;
}
