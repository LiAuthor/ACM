#include<stdio.h>
int main()
{
	void transpose();
	transpose();
}
void transpose()
{
		int i,j,k,m;
	printf("�������к��С�\n");
	scanf("%d %d",&i,&j);
	int a[i][j],b[j][i];
	printf("�밴���е�˳��������������е�Ԫ��:\n");
	for(k=0;k<i;k++){
		for(m=0;m<j;m++){
			scanf("%d",&a[k][m]);
			b[m][k]=a[k][m];
		}
		printf("\n");
	}
	printf("�������ʼ����Ϊ:\n");
	for(k=0;k<i;k++){
		for(m=0;m<j;m++){ 
			printf("%3d",a[k][m]);
		}
		printf("\n");
    }
    printf("ת������Ϊ:\n");
    for(i=0;i<m;i++){
    	for(j=0;j<k;j++){
    		printf("%3d",b[i][j]);
    	}
    	printf("\n");
    }
}

