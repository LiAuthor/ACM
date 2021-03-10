#include <iostream>  
using namespace std;   
#define LIST_INIT_SIZE 100 //��ʼ��������   
#define LISTINCREMENT 10 //�洢�ռ�ķ�������   
 
typedef int Status;  
  
typedef int ElemType;  
  
typedef struct{  
  
    ElemType *elem;//����ռ��ַ  
  
    int length;//��ǰ����  
  
    int listsize;//��ǰ�ķ���Ĵ洢���� ����sizeof (ElemType)Ϊ��λ)  
}SqList;  
  
Status InitList_sq(SqList &L,int n){  
  
    L.elem = (ElemType *)malloc(LIST_INIT_SIZE *sizeof(ElemType));  
  
    if ( !L.elem)exit(1);//�洢����ʧ��  
  
    L.length = 0; //�ձ���Ϊ0  
  
    L.listsize =LIST_INIT_SIZE;//��ʼ��������  
  
    cout << "��������е�����" <<endl;  
  
  
  
    for ( int i = 0; i < n ; i ++)  
    {  
          
            cin >> L.elem[i];  
            ++L.length;  
   
            if(L.length>=L.listsize)  
  
            {  
  
            ElemType *newbase=(ElemType*)realloc(L.elem,(L.listsize+LISTINCREMENT)*sizeof(ElemType));  
    
                if(!newbase)  
  
                    exit(0);  
   
                L.elem=newbase;  
    
                L.listsize+=LISTINCREMENT;  
  
            }  
  }  
    return true;  
}  
  
  
Status ListInsert_Sq(SqList &L,int i,ElemType e)      
{      
    //��˳�����Ա�L�е�i��λ��֮ǰ�����µ�Ԫ��e        
    //i�ĺϷ�ֵΪ1<=i<=ListLength_Sq(L)+1        
    if(i <1 || i> L.length + 1)      
        return false;   //iֵ���Ϸ�        
    if(L.length >= L.listsize)   //��ǰ�洢�ռ����������ӷ���        
    {      
        ElemType *newbase = (ElemType *)realloc(L.elem,(L.listsize + LISTINCREMENT )* sizeof(ElemType));      
        if(!newbase)      
            exit(1);    //�洢����ʧ��        
        L.elem = newbase;//�»�ַ        
        L.listsize += LISTINCREMENT;    //���Ӵ洢����        
    }      
      
    ElemType *q = &(L.elem[i-1]);//qΪ����λ��        
      
    for(ElemType *p = &(L.elem[L.length-1]);p>=q;--p)      
        *(p+1) = *p;    //����λ�ü�֮���Ԫ������        
      
    *q = e;     //����e        
    ++L.length;     //����1     
      
    ElemType l = *q; //��һ���Զ���ı��� ����ָ��q����ָ����ֵ  
    return l;      
}   
  
 Status display_sq(SqList &L,int n){  
  
     for ( int i = 0; i <=n ; i ++)  
     {  
         cout << L.elem[i]<<endl;  
     }  
     return true;  
 }  
      
  
int main()      
{      
    SqList L;      
    
    InitList_sq(L,5);  
      
     ListInsert_Sq (L,1,78282822);  
      
    cout <<"����λ�ò���Ԫ�غ����Ա������±�ʾ "<<endl;  
   
     display_sq(L,5);  
      
    return 0;  
}    
