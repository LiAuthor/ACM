# include<stdio.h>
int main()
{
int beishu(int x,int y);
int yueshu(int x,int y);
int a,b;
printf("������������:\n");
scanf("%d %d",&a,&b);
printf("���Լ����:%d\n",beishu(a,b));
printf("��С��������:%d\n",yueshu(a,b));

return 0;
}

int beishu(int x,int y)
{
int j=1,i;
   for(i=1;i<=(x<y?x:y);i++)
   {
   if(x%i==0 && y%i==0) j=i;
   }
return j;
}

int yueshu(int x,int y)
{
int i;
   for(i=x;i<=(x*y);i++)
   {
   if(i%x==0 && i%y==0) break;
   }
return i;
} 

