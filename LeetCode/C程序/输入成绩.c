#include<stdio.h>
struct Student{
	char name[20];
	int score[3];
};
//����һ��ѧ�������� 
 Student* student_input(Student *pStudent);
//���һ��ѧ�������ݰ���ƽ���ɼ� 
 void student_print(const Student *pStudent);
//����ѧ����ÿ��ƽ���ɼ� 
 double student_average(const Student *pStudent);
//���ѧ����һ���ɼ� 
 int student_get_score(const Student *pStudent,int idx);
 int main()
 {
 	int i=0;
 	student_input();
 	student_print();
 	studrnt_average();
 	student_get_score();
 	return 0;
 }
 Student* student_input(Student *pStudent)
 {
 	for(i=0;i<5;i++)
 	{
 	 scanf("%s",&p.name);
	 scanf("%d %d %d",&Student.score[0],&Student.score[1],&Student.score[2]);
	 return p;
    }
 }
 void student_print(const Student *pStudent)
 {
 	int t=0;
 	for(t=0;t<5;t++)
 	{
 	 int num=0;
 	 double average=0;
 	 for(i=0;i<3;i++)
 	 {
 	 	num=+score[i];
 	 }
 	 average=num/3;
 	 printf("%s",name);
 	 printf("%d %d %d %d\n",score[0],score[1],score[2],average);
     }
 	return 0;
 } 
 double student_average(const Student *pStudent)
 {
    
 }
 int student_get_score(const Student *pStudent,int idx) 
 {
 	
 } 
