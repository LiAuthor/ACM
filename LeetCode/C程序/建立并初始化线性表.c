#include<stdio.h>
#include<stdlib.h>
# define MAXSIZE 50
typedef struct{
int ElenemtTypeData[MAXSIZE];
int Last;
}List;
List L,*PtrL;
List *MakeEmpty();

int main()
{
	MakeEmpty();
	return 0;
	
}
List *MakeEmpty()
{
	List *PtrL;
	PtrL=(List *)malloc(sizeof(List));
	PtrL->Last=-1;
	return PtrL;
} 



/*#include <stdio.h>
#include <stdlib.h>
typedef  int  elemtype;  
typedef struct xianxing
{
   struct xianxing *next;
   elemtype number;
}ST;
ST *Init_SequenList()//ʵ�ֳ�ʼ��һ�����Ա�ĺ���
{
   ST *L;
   L = (ST *)malloc(sizeof(ST));
   L->next = NULL;
   return L;
}
ST * add_head(ST *head)//ʵ����������������ֺ���   ������˳��� 
{
   ST *q ,*p;
   p = head;
   q = (ST *)malloc(sizeof(ST));
   printf("��������Ҫ��ӵ���:");
   scanf("%d",&q->number);
   if(p->next == NULL)
   {
      q->next = p->next;
	 p->next = q;
   }
   else
   {
      while(p->next->number < q->number)//�Ƚϴ�С �ҵ������λ��
	 {
	    p = p->next;
	 }
	 q->next = p->next;
	 p->next = q;
   }
   return head;
}
void show_head(ST *head)//��ʾ����
{
   ST *p;
   p = head;
   while(p->next)
   {
      printf("%d\n",p->next->number);
      p = p->next;
   }
}
void main()
{
   ST *head;
   int n ;//n��Ԫ��
   printf("��������Ҫ��������Ԫ��:");
   scanf("%d",&n);
   head = Init_SequenList();//��ʼ��һ�����Ա�
   while(n)
   {
     head = add_head(head);//�����Ա�������� 
	n--;
   }
   show_head(head);//��ʾ����
}*/
