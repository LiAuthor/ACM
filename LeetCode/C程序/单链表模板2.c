#include<stdio.h>  
#include<stdlib.h> 
  
typedef struct LNode{  
    int data;  
    struct LNode *next;
}LNode,*LinkList;  
LinkList Init_LNode()        
{  
    LNode *L;			
    L=(LinkList)malloc(sizeof(LNode));  
    if(L==NULL)  
    {  
        printf("��ʼ��ʧ��!\n");  
        exit(-1); 					
    }  
    L->next=NULL;  
    return L;  
} 
/*void Creat_List1(LNode *L)   
{  
    int i,n,num;  
    LNode *pnew; 
      
    printf("������Ҫ�����Ԫ�ظ�����");  
    scanf("%d",&n);  
    for(i=0;i<n;i++)  
    {  
        printf("�������%d������",i+1);  
        scanf("%d",&num);  
        pnew=(LinkList)malloc(sizeof(LNode));  
        pnew->data=num; 
        pnew->next=L->next; 
        L->next=pnew;				 
    }
	printf("������ɣ�\n");  
}  */
void Creat_List(LNode *L)    
{  
    int i,n,num;  
    LNode *p,*pnew;  
    p=L;  				
    printf("������Ҫ�����Ԫ�ظ���:");  
    scanf("%d",&n);  
    for(i=0;i<n;i++)  
    {  
    	pnew=(LinkList)malloc(sizeof(LNode));
        printf("�������%d����:",i+1);  
        scanf("%d",&pnew->data);      
        /*if(pnew==NULL)  
        {  
            printf("��ʼ��ʧ��!\n");  
            exit(-1);  
        }  
        pnew->data=num;*/  
        p->next=pnew;  
        p=pnew;  				
    }  
    p->next=NULL; 
	printf("�������!\n");  			
}
void Show_Linst(LNode *L)        
{  
    LNode *p;  
    p=L->next;  
    while(p!=NULL)  
    {  
        printf("%3d",p->data);  
        p=p->next;      
    }  
    printf("\n");
	printf("������ɣ�\n");   
}  
void Insert_List(LNode *L) 
{  
    int i=1,n,val,length=0; 
    LNode *p,*s;  
    p=L;
	while(p->next!=NULL) 
	{
		p=p->next; 
		++length;
	}
    printf("��������Ҫ�����λ��:\n");  
    scanf("%d",&n);  
    while(length<n)  
    {  
    	printf("λ�ò��Ϸ�,����������:\n");
    	scanf("%d",&n);  
    }
	p=L;  
    while(p&&i<n)
	{
		p=p->next;  
        ++i;			
	} 
	printf("��������Ҫ�����Ԫ��:\n");  
    scanf("%d",&val);  
    s=(LinkList)malloc(sizeof(LNode));  
    s->data=val;  
    s->next=p->next;  
    p->next=s;
	printf("����������!\n");   
}  
void Delete_List(LNode *L)  
{  
    int i=1,n;  
    LNode *p,*s;  
    p=L;   
    printf("��������Ҫɾ����λ��:");  
    scanf("%d",&n);  
    while(p&&i<n)  
    {  
        p=p->next;  
        ++i;  
    }  
    if(!(p->next)||i>n)  
    printf("ɾ����λ�ò��Ϸ�!\n");  
//    p->next =p->next->next;  
    s=p->next;  
    p->next=s->next;  
    free(s); 
	printf("ɾ���������!\n");      
}  
void Query_List(LNode *L)    
{  
    int i=1,n,val;  
    LNode *p;  
    p=L->next;  
    printf("��������Ҫ��ѯ��λ�ã�n=");  
    scanf("%d",&n);  
    while(p&&i<n)  
    {  
        p=p->next;  
        ++i;  
    }  
    if(!(p->next)||i>n)  
    printf("��ѯ��Ԫ�ز�����!\n");  
    val = p->data;  
    printf("���ѯ��Ԫ��ֵΪ��%d\n",val);
	printf("��ѯ�������!\n");   
}  
void Destroy_List(LNode *L)       
{  
    LinkList p,q;  
    p=L->next; 
    while(p)  
    {  
        q=p->next;  
        free(p);  
        p=q;  
    }  
    L->next=NULL;
	printf("���ٲ������!\n");   
}  
int Show_Menu()    
{  
    int num;   
    printf("��������Ĳ������:");  
    if(scanf("%d",&num)==0)  
    printf("����������!\n");  
    return num;   
}  
int main()  
{    
    printf("\n  1.����            2.����\n");  
    printf("\n  3.ɾ��            4.��ѯ\n");
    printf("\n  5.����            6.�˳�\n");
	printf("\n");    
    LinkList S;  
    int val;  
    S=Init_LNode();  
    if(S==NULL)  
    printf("��ʼ��ʧ��!\n"); 
    while(val!=6)  
    {  
    	val=Show_Menu();  
    	switch(val)  
    	{  
    		case 1:  Creat_List(S);break;    //β�巨    Creat_List1(S);ͷ�巨              
    		case 2:  Insert_List(S);break;   
    		case 3:  Delete_List(S);break;  
    		case 4:  Query_List(S);break;    
    		case 5:  Show_Linst(S);break;   
    		case 6:  Destroy_List(S);break;   
    	}  
    }  
}  

