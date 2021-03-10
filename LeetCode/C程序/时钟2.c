#include <graphics.h>
#include <conio.h>
#include <math.h>
 
void Draw(int hour, int minute, int second)
{
     double a_hour, a_min, a_sec;       // ʱ���֡�����Ļ���ֵ
     int x_hour, y_hour, x_min, y_min, x_sec, y_sec; // ʱ���֡������ĩ��λ��
     int x_hour1,y_hour1,x_min1,y_min1,x_sec1,y_sec1;
     // ����ʱ���֡�����Ļ���ֵ
     a_sec = second * 2 * PI / 60;
     a_min = minute * 2 * PI / 60 ;
     a_hour= hour * 2 * PI / 12 + a_min / 12;;
 
     // ����ʱ���֡��������ĩ��λ��
     x_sec = 320 + (int)(120 * sin(a_sec));
     y_sec = 240 - (int)(120 * cos(a_sec));
     x_min = 320 + (int)(100 * sin(a_min));
     y_min = 240 - (int)(100 * cos(a_min));
     x_hour= 320 + (int)(70 * sin(a_hour));
     y_hour= 240 - (int)(70 * cos(a_hour));
     x_sec1= 320 - (int)(15   * sin(a_sec));
     y_sec1= 240 + (int)(15   * cos(a_sec));
     x_min1= 320 - (int)(10   * sin(a_min));
     y_min1= 240 + (int)(10   * cos(a_min));
     x_hour1= 320 - (int)(5 * sin(a_hour));
     y_hour1= 240 + (int)(5 * cos(a_hour));
 
 
 
     // ��ʱ��
     setlinestyle(PS_SOLID, NULL, 7);
     setcolor(WHITE);
     line(x_hour1, y_hour1, x_hour, y_hour);
 
     // ������
     setlinestyle(PS_SOLID, NULL, 4);
     setcolor(LIGHTGRAY);
     line(x_min1, y_min1, x_min, y_min);
 
     // ������
     setlinestyle(PS_SOLID, NULL, 2);
     setcolor(RED);
     line(x_sec1, y_sec1, x_sec, y_sec);
}
 
void main()
{
     initgraph(640, 480);    // ��ʼ�� 640 x 480 �Ļ�ͼ����
 
     // ����һ���򵥵ı���
     circle(320, 240, 2);
     circle(320, 240, 60);
     circle(320, 240, 160);
     outtextxy(296, 330, "   ���");
     int x,y;
     for(int i=0;i<12;i++)
     {
         x=320+(int)(140*sin(30*i*2*PI/360));
         y=240-(int)(140*cos(30*i*2*PI/360));
switch(i)
         {
         case 0:outtextxy(x-5,y-5,"12");break;
         case 1:outtextxy(x-5,y-5,"1");break;
         case 2:outtextxy(x-5,y-5,"2");break;
         case 3:outtextxy(x-5,y-5,"3");break;
         case 4:outtextxy(x-5,y-5,"4");break;
         case 5:outtextxy(x-5,y-5,"5");break;
         case 6:outtextxy(x-5,y-5,"6");break;
         case 7:outtextxy(x-5,y-5,"7");break;
         case 8:outtextxy(x-5,y-5,"8");break;
         case 9:outtextxy(x-5,y-5,"9");break;
         case 10:outtextxy(x-5,y-5,"10");break;
         case 11:outtextxy(x-5,y-5,"11");break;
         }
     }
 
     // ���� XOR ��ͼģʽ
     setwritemode(R2_XORPEN); // ���� XOR ��ͼģʽ
 
 
     //���̶�
     int a,b,a1,b1,n=0;
     for(n=0;n<60;n++)
     {
     a=320+(int)(160 * sin(n*2*PI/60));
     b=240-(int)(160 * cos(n*2*PI/60));
     a1=320+(int)(150 * sin(n*2*PI/60));
     b1=240-(int)(150 * cos(n*2*PI/60));
     if(n%5==0)
         setlinestyle(PS_SOLID,NULL,5);
     else
         setlinestyle(PS_SOLID,NULL,1);
     line(a1,b1,a,b);
     }
 
 
     // ���Ʊ���
     SYSTEMTIME ti;      // ����������浱ǰʱ��
     while(!kbhit())      // ��������˳��ӱ����
     {
          GetLocalTime(&ti);         // ��ȡ��ǰʱ��
          Draw(ti.wHour, ti.wMinute, ti.wSecond);    // ������
          Sleep(1000);          // ��ʱ 1 ��
          Draw(ti.wHour, ti.wMinute, ti.wSecond);    // �����루������ͻ�����Ĺ�����һ���ģ�
     }
 
     closegraph();      // �رջ�ͼ����
}
