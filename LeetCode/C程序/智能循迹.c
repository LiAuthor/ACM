#include<reg52.h>
#define uchar unsigned char
#define uint unsigned int
uint a,d,y,z,h,q;
sbit out1 = P0^0;//�������������ƹܽ�����
sbit out2 = P0^1;
sbit out3 = P0^2;
sbit out4 = P0^3;
sbit in1 = P2^0;//ѭ��ģ����ź�����ܽ�����
sbit in2 = P2^1;
sbit in3 = P2^2;
sbit in4 = P2^3;
sbit in5 = P2^4;
delay(uint a);
intzuozhuan(uint z)//����С������ת����  ������z��a��������������תʱ�䣬�������趨
//Ϊ��ͬ������ʾÿ�ε��ó�����תʱ����ͬ���ɱ䣬û�е���ת��ʱ��Ĺ��ܣ� 
{
out1=1;
out2=0; 
out3=0;
out4=1;
delay(a);
}
intyouzhuan(uint y)//����С������ת����������y��a��������������תʱ�䣬�������趨
//Ϊ��ͬ������ʾÿ�ε��ó�����תʱ����ͬ���ɱ�,û�е���ת��ʱ��Ĺ��ܣ�
{
out1=0;
out2=1;
out3=1;
out4=0;
delay(a);
}
inthoutui(uint h)//����С������ʹС��������ʻ������������ת�����ƣ�
out1=0;
out2=1;
out3=0;
out4=1;
delay(a);
out1=0;
out2=0;
out3=0;
out4=0;
delay(20);
}
int dengdai (uint d) //ʹС��ֹͣ��ǰ���ж���,ֹͣʱ��ɵ���
{
out1=0;
out2=0;
out3=0;
out4=0;
delay(d);
}

voidqianjin(q)//ʹС����ǰ��ʻ����ʻʱ��ɵ�
{
out1=1;
out2=0;
out3=1;
delay(q);
}
void xunji()
{
P1=P1|0XF0;
delay(5);
if(in1==0){dengdai();youzhuan(100);while(in3==1);}
else if(in5==0){dengdai();zuozhuan(100);while(in3==1);}
else if(in2==0){dengdai();youzhuan(30);}
else if(in4==0){dengdai();zuozhuan(30);}
else if(in3==0){qianjin(20);}
else{qianjin(20);}
}
int delay(uint a)//��ʱ�Ӻ���
{
uint x,y;
for(x=a;x>0;x--)
for(y=110;y>0;y--);
}
void main()
{
delay(2000);
while(1)
xunji();
}

