#include<stdio.h>
#define N 3
struct Student{
	int number;
	char name[20];
	float score[3];
	float aver;
};
    void input(struct Student stu[]);
	struct Student max(struct Student stu[]);
	void print(struct Student stu[]);
int main()
{
	/*void input(struct Student stu[]);
	struct Student max(struct Student stu[]);
	void print(struct Student stu[]);*/
	
	struct Student *p;
	struct Student stu[N];
	p=stu;
	
	input(p);
	max(p);
	print(p);
	
	return 0;
}
void input(struct Student stu[])
{
	int i;
	for(i=0;i<N;i++)
	{
		printf("�������ѧ������Ϣ:ѧ�ţ����������ſεĳɼ�\n");
		scanf("%d %s %d %f %f %f",
		&stu[i].number,&stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
		
		stu[i].aver=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3.0;
	}
}
struct Student max(struct Student stu[])
{
	int i,m=0;
	for(i=0;i<N;i++)
	{
		if(stu[i].aver>stu[m].aver)m=i;
		return stu[m];
	}
}
void print(struct Student stu)
{
	printf("\n�ɼ���ߵ�ѧ����:\n");
	printf("ѧ��:%d\n����:%s\n���ſγɼ�:%5f %5f %5f\nƽ���ɼ�:%5f\n",
	stu.number,stu.name,stu.score[0],stu.score[1],stu.score[2],stu.aver);
}
