#include<stdio.h>
#include<string.h>
typedef struct{
	char Data[30];
	char Firstletter;
	char Lastletter;
}Word;
typedef struct{
	Word *elem;
	int length;
}SeqList;
	int a,i,x=0;//x��ʾ����ָ����±�
	printf("������������鵥��:\n");
	scanf("%d",&a); 
	int array[a];
int InitList(SeqList &L)
{
	L.elem=new Word[30];
	L.length=0;
	printf("\n��ʼ���������\n");
	return 0; 
}
int CreateList(SeqList &L)
{
	int t=0,x=0,y=0;//y��ʾ�����ַ���������±� 
	char Emptyword;//����һ���յĴ洢��Ԫ�������ѡ���� 
	//printf("������������鵥��:\n");
	//scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		//printf("\n���ʵ�%d����Ҫ������ٸ�����:\n",i+1);
		//scanf("%d",&b);
		for(i=0;i<array[t++];i++,x++)
		{
			printf("�������%d������:",i+1);
			scanf("%s",&L.elem[x].Data);
			++L.length;
			L.elem[x].Firstletter=L.elem[x].Data[0];
			while(L.elem[x].Data[y++]!='\0')
			L.elem[x].Lastletter=L.elem[x].Data[y];
		}
		Emptyword='E';
		L.elem[x+1].Data=Emptyword;
		++length;++x;
	}
	printf("����������:\n");
	return 0;
}
int ArrangeList(SeqList &L)
{
	int t=0,x=0;
	Word Pointword;//ָ��һ������ 
	char Pointletter;//ָ��һ����ĸ 
	for(i=0;i<a;i++)
	{
		for(i=0;i<array[t];t++,i++,x++)//i��ʾ����������t��ʾ���������������±� 
		{
			Pointword=L.elem[x];	
			while(L.elem[x+1].Data!='e')
			L.elem[x]=L.elem[x+1];
			Pointword.Lastletter
		}
	}
}
int main()
{
	for(i=0;i<a;i++)
	{
		printf("���ʵ�%d��Ҫ������ٸ�����:\n",i+1");
		scanf("%d",&array[i]);
	}
	SeqList list;
	InitList(list);
	CreateList(list);
	ArrangeList(list);
}
