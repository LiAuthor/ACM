#include<stdio.h>
#define MAXSIZE 100
typedef struct{	 
	//char name[10];
	int price;
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
int CreateList(SeqList L)
{
	int i,n;
	printf("�����������������:\n");
	scanf("%d",&n);
	printf("�����ΰ�˳����������:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&L.elem[i]);
        L.length++;
    }
    printf("��������������\n");
    return 0;
} 
int OutList(SeqList L)
{
	int i;
	for(i=0;i<L.length;i++)
	{
		printf("%d",L.elem[i]);
	}
	printf("��������������\n");
	return 0;
}
int main()
{
	SeqList list;
	InitList(list);
	CreateList(list);
	OutList(list);
	return 0;
}
