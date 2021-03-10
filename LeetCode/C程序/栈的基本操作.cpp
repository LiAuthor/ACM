#include<stdio.h>
#define MAXSIZE 100
typedef struct{
	char name[10];
	float price;
}ElementType;
typedef struct{
	ElementType *base;
	ElementType *top;
	int stacksize;
}SqStack;
int InitStack(SqStack &S)
{
	S.base=new ElementType[MAXSIZE];//�ô�new�ĺ��� 
	S.top=S.base;
	S.stacksize=MAXSIZE;
	return 0;
}
/*PUSH����*/
int Push(SqStack &S)
{
	int x=0,i=0;
	printf("\n��ջ���������������:\n");
	scanf("%d",&x); 
	if(S.top-S.base==S.stacksize)
	{
		printf("\nջ����!\n");
		return 0;
	}
	while(i<x)
	{
		printf("\n�������%d�����ֺͼ۸�:\n",i);
		scanf("%s %f",&S.top->name,&S.top->price);
		i++;S.top+=sizeof(ElementType);
	}
	printf("\n���ݴ������\n");
	return 0;
} 
/*Pop����*/
int Pop(SqStack &S)
{
	int x=0,i=0;
	printf("\n��Ҫ��ջ������Ԫ��:\n");
	scanf("%d",&x);
	if(S.top==S.base)
	{
		printf("\nȫ��Ԫ�س�ջ���!\n");
		return 0;
	}
	printf("\n����Ԫ�ؽ���ջ:\n");
	while(i<x)
	{
		printf("%s %f\n",S.top->name,S.top->price);
		i++;S.top-=sizeof(ElementType);
	} 
	printf("\n��ջ���\n");
	return 0;
 } 
 int Out(SqStack &S)
 {
	while(S.top!=S.base)
	{
		printf("%s %f",S.top->name,S.top->price);
	}
	return 0;
 }
 int main()
 {
	SqStack S_one,S_twe,S_three;
	InitStack(S_one);
	//InitStack(S_twe);
	//InitStack(S_three);
	Push(S_one);
	//Push(S_twe);
	//Push(S_three);
	Pop(S_one);
	return 0;
 }
