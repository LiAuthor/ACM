#include <stdio.h>  
int main()  
{  
    int n,a[101][101]={0},x,y,c=0;
	printf("�������ȣ�\n");  
    scanf("%d",&n);  
    x=0;
	y=n-1;  
    a[x][y]=1;
	c=1;  
    while (c<n*n) 
    {  
        /*while (x+1<n)  
            a[++x][y]=++c;  
        while (y-1>=0)  
            a[x][--y]=++c;  
        while (x-1>=0)  
            a[--x][y]=++c;  
        while (y+1<n)  
            a[x][++y]=++c;*/
			
			
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
