#include<stdio.h>
#include<string.h>//�ó���ֻ���ж��޴���Ԫ�ؼ�Ϊ��ȷ 
int myfind(char *Arrayone,char *Arraytwo,int Length);//�����жϺ��� 
int main()
{
	int length=0;
	const char originarray[3]={'l','j','k'};//������ʽ�涨��ȷ�� 
	//char newarray[3]={'l','j','k'};
	char newarray[10];//����������ʽ�Ĵ��д� 
	//int idx=0;
	//char e;
	printf("please enter 3 to 10 letters.\n"); 
	//while(newarray[idx]!=1)
	//{
	   scanf("%s",newarray);//���ַ�����ʽ������д�
	//   idx++;
	//   gets (array2[idx]);
	//   break;
	//}
	length=strlen(newarray);//ȡ�ô��д𰸵ĳ��� 
	myfind(originarray,newarray,length);//�����жϺ��� 
	return 0;
}
int myfind(char *Arrayone,char *Arraytwo,int Length)
{   
    //int judge(char *Array,int Length);
	int i,t,x,sum=0;
	int cntarray[3]={0};//�����ۼ����飬��ʾ��ȷ��������Ԫ�س��ִ��� 
	for(i=0;i<Length;i++)//Ƕ��ѭ���Ƚ���ȷ��������������� 
	{
		for(t=0;t<3;t++)
		{
			if(Arrayone[i]==Arraytwo[t])//������������Ԫ������ȷԪ�أ�
			                            //���ӦԪ�ص��ۼ������е�Ԫ�ؼ�һ 
			{
				cntarray[t]++;
			}
		}
	}
	for(x=0;x<3;x++)
	{
		sum+=cntarray[x];//sum��ʾ������������ȷԪ�س��ֵ��ܴ��� 
	}
	if(sum==Length)//��sum��length�ĳ�����ȣ������������ȷ 
	{
		printf("the answer is right.\n");
	}else
	{
		printf("the answer is wrong.\n");
	}
	//judge(*cntarray,length);
	return 0;
}
//int judge(char *Array,int Length)
//{
//	int x,sum=0;
//	for(x=0;x<3;x++)
//	{
//		sum+=Array[x];
//	}
//	if(sum==Length)
//	{
//		printf("the answer is right.\n");
//	}else
//	{
//		printf("the answer is wrong.\n")
//	}
//	return 0;
//}
