#include<stdio.h>
#include<string.h>
#define MAXSIZE 100
typedef struct{	 
	char name[10];
	float price;
}Book;
typedef struct{		 
	Book *elem;
	int length;
}SeqList;
int InitList(SeqList &L) 
{
	L.elem=new Book[MAXSIZE];
	L.length=0;
	printf("��ʼ���������\n");
	return 0; 
}
int CreateList(SeqList &L)
{
	int i,n;
	printf("������������ݵ�����:\n");
	scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	printf("�������%d��������ͼ۸�:\n",i+1);
    	scanf("%s %f",&L.elem[i].name,&L.elem[i].price);
        ++L.length;
    }
    printf("\n��������������\n");
    return 0;
} 
int InsertList(SeqList &L)
{
	int position,i;
	printf("������������ݵ�λ��:\n");
	scanf("%d",&position);
	while((position<1)||(position>L.length))
	{
		printf("�����λ�ò��Ϸ�,����������:\n");
		scanf("%d",&position);
	} 
	for(i=L.length;i>position-1;i--)
	L.elem[i]=L.elem[i-1];
	printf("������������ݵ������ͼ۸�:\n");
	scanf("%s %f",&L.elem[position-1].name,&L.elem[position-1].price);
	++L.length;
	printf("\n���ݲ���������\n");
}
int DeleteList(SeqList &L)
{
	int position,i;
	printf("�������ɾ�����ݵ�λ��:\n");
	scanf("%d",&position);
	while((position<1)||(position>L.length))
	{
		printf("ɾ����λ�ò��Ϸ�,����������:\n");
		scanf("%d",&position);
	}
	for(i=position;i<L.length-1;i++)
	L.elem[i-1]=L.elem[i];
	--L.length;
	printf("\n����ɾ���������\n");
}
int OutList(SeqList &L)
{
	int i;
	printf("L.length=%d\n",L.length);
	for(i=0;i<L.length;i++)
	{
		printf("%s\n",L.elem[i].name);
		printf("%f\n",L.elem[i].price);
	}
	printf("\n��������������\n");
	return 0;
}
int FindList(SeqList &L)
{
	int position,one,twe,i;
	printf("��ѡ����ҷ�ʽ:\n");
	printf("\n1.��֪λ����Ԫ��		2.��֪Ԫ����λ��\n");
	scanf("%d",&one);
	switch(one)
	{
		case 1:
		printf("������λ��:\n");
		scanf("%d",&position);
		printf("����Ϊ%s,�۸�Ϊ%f",L.elem[position-1].name,L.elem[position-1].price);
		printf("\n���Ҳ������\n");break;
		case 2:
		printf("����֪��һ��:\n");
		printf("\n1.��֪����		2.��֪�۸�\n");
		scanf("%d",&twe);
		switch(twe)
		{
			case 1:
			char FindName[10];
			printf("����������:\n");
			scanf("%s",&FindName);
			for(i=0;i<L.length;i++)
			{
				if(strcmp(FindName,L.elem[i].name)==0)
				printf("����ļ۸�Ϊ%f,λ��Ϊ%d\n",L.elem[i].price,i+1);
			}
			printf("\n���Ҳ������\n");break;
			case 2:
			float FindPrice;
			printf("������۸�:\n");
			scanf("%f",&FindPrice);
			for(i=0;i<L.length;i++)
			{
				if(FindPrice==L.elem[i].price)
				printf("λ��Ϊ%d,����Ϊ%s\n",i+1,L.elem[i].name);
			}
			printf("\n���Ҳ������\n");break;
		}break;
	}
 } 
int main()
{
	int x=0;
	SeqList list;
	InitList(list);
	CreateList(list);
	printf("1.����	2.ɾ��	3.����	4.��ӡ	5.�˳�\n");
	while(x!=5) 
	{
		printf("������������:\n");
		scanf("%d",&x);
		switch(x)
		{
			case 1:InsertList(list);break;
			case 2:DeleteList(list);break;
			case 3:FindList(list);break; 
			case 4:OutList(list);break;
			case 5:break;
		}
	}
	return 0;
}
