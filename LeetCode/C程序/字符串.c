#include<stdio.h>
int main()
{
	char MaxChar(char str[10]);//�������� 
	
	char str1[10];//�����ַ��� 
	char str2[10];
	
	gets(str1);//�����ַ������� 
	gets(str2);
	
	if(strcmp(str1,str2)>0)//�ַ����ȽϺ��� 
	printf("Yes!\n");//���str1����str2�����yes 
	
	printf("%s\n",strcat(str1,str2));//�ַ������Ӻ��� 
	
	MaxChar(str1);//���ú��� 
	MaxChar(str2);
//	int MaxChar=str1[0];
//	int i;
//	for(i=0;i<10;i++){
//		if(str1[i]>str1[0]){
//			MaxChar=str1[i];
//		}
//	} 
//	printf("MaxChar=%c",MaxChar);
	
	return 0;
}
char MaxChar(char str[10])
{
	int max=str[0];
	int i;
	for(i=0;i<10;i++){
		if(str[i]>str[0]){
			max=str[i];
		}
	}
	printf("MaxChar=%c\n",max);
}
