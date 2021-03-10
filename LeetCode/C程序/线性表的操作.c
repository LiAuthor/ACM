#include<stdio.h>
#include<stdlib.h>
typedef struct{
	ElementType Date[MAXSIZE];
	int Last;
}List;
List L,*PtrL;

List MakeEmpty();
//��ʼ��һ�������Ա�L
void input(List L);
//�ڿ����Ա�L�д������
void output(List L);
//��ӡ���Ա�L�е����� 
ElementType FindKth(int K,List L);
//����λ��K��������Ӧ��Ԫ�� 
int Find(ElementType X,int i,List L);
//�����Ա�L�в���X�ĵ�һ�γ��ֵ�λ�� 
void Insret(ElementType X,int i,List L);
//��λ��iǰ����һ���µ�Ԫ��X 
void Delete(int i,List L);
//ɾ��ָ��λ��i��Ԫ�� 
int Length(List L);
//�������Ա�L�ĳ���n 

int main()
{
	 makeempty();
	 input(L);
	 output(L);
	 
}

List *MakeEmpty()
{
	List *PtrL;
	PtrL=(List *)malloc(sizeof(List));
	PtrL->Last=-1;
	return PtrL;
}

void input(List L)
{
	scanf("%d",&PtrL->Data);
	while(*PtrL->List)
	{
		scanf("%d",&PtrL->Data);
		PtrL->List++;
		PtrL->Data++;
	}
}

void output(List L)
{
	int n;
	for(n=0;n<PreL->last;n++)
	{
		printf("%d",PtrL->Date);
		PtrL->Date++; 
	}
} 

int Find(ElementType X,List *PtrL)
{
	int i=0;
	while(i<=PtrL->List&&PtrL->Data[i]!=X)
    {
    	i++;
    }
	if(i>PtrL->Last) return -1;
	else return i;
}

void Insert(ElementType X,int i,List *PtrL)
{
	int j;
	if(PtrL->Last==MAXSIZE-1)
	{
		printf("����");
		return;
	}
	if(i<1||i>PtrL->Last+2)//ΪʲôΪLast+2 
	{
		printf("λ�ò��Ϸ�");
		return;
	}
	for(j=PtrL->Last;j>=i-1;j--)
	{
		PtrL->Data[i+1]=PreL->Data[j];
	}
	PreL->Data[i-1]=X;
	PreL->Last++;
	return; 
}

void Delete(int i,List *PtrL)
{
	int j;
	if(i<1||i>PtrL->Last+1)
	{
		printf("������%d��Ԫ��",i);
		return; 
	}
	for(j=i;j<=PtrL->Last;j++)
	{
		PtrL->Date[j-1]=PtrL->Data[j];
	}
	PtrL->Last--;
	return;
}
