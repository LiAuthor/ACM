#include<stdio.h>
int main()
{
	int x=100;
	int i=0;
	
	while(x>0){
		x/=2;
		i++;
	}
	printf("����%d�Ρ�\n",i);
	return 0;
}
