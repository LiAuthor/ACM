#include<stdio.h>  
#include<stdlib.h>   
typedef struct LNode 
{  
    int data;  
    struct LNode *next;
}LNode,*LinkList;  
LinkList Init_LNode()        
{  
    LNode *L;           
    L=(LinkList)malloc(sizeof(LNode));  
    if(L==NULL)  
    {  
        printf("初始化失败!\n");  
        exit(-1);           
    }  
    L->next=NULL;  
        return L;  
}  
/*
void Creat_List1(LNode *L)        //头插法  
{  
    int i,n,num;  
    LNode *pnew;  
      
    printf("请输入要输入的元素个数：n=");  
    scanf("%d",&n);  
    for(i=0;i<n;i++)  
    {  
        printf("请输入第%d个数：",i+1);  
        scanf("%d",&num);  
        pnew=(LinkList)malloc(sizeof(LNode));  
        pnew->data=num; 
        pnew->next=L->next; 
        L->next=pnew;                
    }
    printf("操作完成！\n");  
}  */
void Creat_List(LNode *L)        //尾插法  
{  
    int i,n,num;  
    LNode *p,*pnew;  
    p=L;                
    printf("请输入要输入的元素个数：n= ");  
    scanf("%d",&n);  
    for(i=0;i<n;i++)  
    {  
        printf("请输入第%d个数：",i+1);  
        scanf("%d",&num);  
        pnew = (LinkList)malloc(sizeof(LNode));  
        if(pnew ==  NULL)  
        {  
            printf("初始化失败!\n");  
            exit(-1);  
        }  
        pnew->data = num;  
        p->next = pnew;  
        p = pnew;               
    }  
    p->next =NULL; 
    printf("操作完成！\n");              
}
void Show_Linst(LNode *L)        //遍历  
{  
    LNode *p;  
    p=L->next;  
    while(p!=NULL)  
    {  
        printf("%d ",p->data);  
        p = p->next;      
    }  
    printf("\n");
    printf("操作完成！\n");   
}  
void Insert_List(LNode *L)        //插入  
{  
    int i,n,val; 
    LNode *p,*s;  
    p = L;                  
    i=1;  
    printf("请输入你要插入的位置：n=");  
    scanf("%d",&n);  
    printf("请输入你要插入的元素：val=");  
    scanf("%d",&val);  
    while(p&&i<n)  
    {  
        p=p->next;  
        ++i;  
    }  
    if(!p||i>n)  
        printf("无法插入!\n");  
    s = (LinkList)malloc(sizeof(LNode));  
    s->data=val;  
    s->next=p->next;  
    p->next=s;
    printf("操作完成！\n");   
}  
void Delete_List(LNode *L)        //删除  
{  
    int i,n;  
    LNode *p,*s;  
    p=L;  
    i=1;  
    printf("请输入你要删除的位置：n=");  
    scanf("%d",&n);  
    while(p&&i<n)  
    {  
        p=p->next;  
        ++i;  
    }  
    if(!(p->next)||i>n)  
        printf("删除的位置不合法!\n");  
//    p->next =p->next->next;  
    s=p->next;  
    p->next=s->next;  
    free(s); 
    printf("操作完成！\n");      
}  
void Query_List(LNode *L)        //查询  
{  
    int i,n,val;  
    LNode *p;  
    p=L->next;  
    i=1;  
    printf("请输入你要查询的位置：n=");  
    scanf("%d",&n);  
    while(p&&i<n)  
    {  
        p=p->next;  
        ++i;  
    }  
    if(!(p->next)||i>n)  
        printf("查询的元素不存在!\n");  
    val = p->data;  
    printf("你查询的元素值为：%d\n",val);
    printf("操作完成！\n");   
}  
void Destroy_List(LNode *L)        //销毁  
{  
    LinkList p,q;  
    p = L->next; 
    while(p)  
    {  
        q=p->next;  
        free(p);  
        p=q;  
    }  
    L->next=NULL;
    printf("操作完成！\n");   
}  
int Show_Menu()    
{  
    int num;   
    printf("请输入你的操作序号：");  
    if(scanf("%d",&num)==0)  
    {  
        printf("请重新输入!\n");  
    }  
    return num;   
}  
int main(int argc,char *argv[])  
{    
    printf("\n  1.创建            2.插入\n");  
    printf("\n  3.删除            4.查询\n");
    printf("\n  5.遍历            6.退出\n");
    printf("\n");    
    LinkList S;  
    int val;  
    S = Init_LNode();  
    if(S==NULL)  
    { printf("初始化失败!\n"); }  
    while(val!=6)  
    {  
    val=Show_Menu();  
    switch(val)  
    {  
    case 1:  
            Creat_List(S);        //尾插法  
            //Creat_List1(S);    //头插法  
            break;  
    case 2:  
            Insert_List(S);        //插入  
            break;  
    case 3:  
            Delete_List(S);        //删除  
            break;  
    case 4:  
            Query_List(S);        //查询  
            break;  
    case 5:  
            Show_Linst(S);        //显示  
            break;  
    case 6:  
            Destroy_List(S);    //销毁  
            exit(0);  
            break;  
    }  
    }  
}  