#include <stdio.h>  
int main()  
{  
    int n,a[101][101]={0},x,y,c=0;
	printf("�������ȣ�\n");  
    scanf("%d",&n);  
    x=0;y=n-1;  
    c=a[x][y]=1;  
    while (c<n*n)//�����Ϊn*n  
    {  
        while (x+1<n&&!a[x+1][y])//����  
            a[++x][y]=++c;  
        while (y-1>=0&&!a[x][y-1])//����  
            a[x][--y]=++c;  
        while (x-1>=0&&!a[x-1][y])//����  
            a[--x][y]=++c;  
        while (y+1<n&&!a[x][y+1])//����  
            a[x][++y]=++c;  
    }     
    for (x=0;x<n;x++)  
    {  
        for (y=0;y<n;y++)
        {
          printf("%4d ",a[x][y]);
	    }
    printf("\n");
    }
    return 0;
} 
/*#include <stdio.h>  
int main()  
{  
    int n,a[10][10]={0},i=1,j,x=1,y=0,t,c=1;  
    a[0][0]=1;
	printf("�������ȣ�\n");  
    scanf("%d",&n);//����  
    while (i<n)   //i�ӵ�2�п�ʼ  
    {  
        x=i;y=0;  
        while (y<i||y==i)    
        {  
            a[x--][y++]=++c;  
        }  
        i++;  
    }  
    for (i=0;i<n;i++)  
    {  
        for(j=0;j<n-i;j++)  
            printf("%5d",a[i][j]);  
        printf("\n");  
    }
	return 0;  
}   */
