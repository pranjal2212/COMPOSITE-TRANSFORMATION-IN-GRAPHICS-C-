#include<process.h>
#include<graphics.h>
#include<conio.h>
#include <iostream.h>
#include<dos.h>
#include <string.h>
#include <math.h>
#define PI 3.14159265
void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 line(200,200,300,200);
 line(300,200,300,300);
 line(300,300,200,300);
 line(200,300,200,200);
 line(250,250,350,250);
 line(350,250,350,350);
 line(350,350,250,350);
 line(250,350,250,250);
 line(200,200,250,250);
 line(300,200,350,250);
 line(200,300,250,350);
 line(300,300,350,350);
 cout<<"The original coordinates are:\n(200,200)\n(300,200)\n(300,300)\n(200,300)\n(250,250)\n(350,250)\n(350,350)\n(250,350)\n";
 getch();
 clrscr();
 cleardevice();
 cout<<"Enter the x and y values by which translation should take place";
 int tx,ty;
 cin>>tx>>ty;

 line(200,200,300,200);
 line(300,200,300,300);
 line(300,300,200,300);
 line(200,300,200,200);
 line(250,250,350,250);
 line(350,250,350,350);
 line(350,350,250,350);
 line(250,350,250,250);
 line(200,200,250,250);
 line(300,200,350,250);
 line(200,300,250,350);
 line(300,300,350,350);
 cout<<"Press enter to view translated figure";
 getch();
 clrscr();
 cleardevice();
/* cout<<"The coordinates after translation\n";
 cout<<"(200,200) +("<<tx<<","<<ty<<")="<<"("<<200+tx<<","<<200+ty<<")"<<endl;
 cout<<"(300,200) +("<<tx<<","<<ty<<")="<<"("<<300+tx<<","<<200+ty<<")"<<endl;
 cout<<"(300,300) +("<<tx<<","<<ty<<")="<<"("<<300+tx<<","<<300+ty<<")"<<endl;
 cout<<"(200,300) +("<<tx<<","<<ty<<")="<<"("<<200+tx<<","<<300+ty<<")"<<endl;
 cout<<"(250,250) +("<<tx<<","<<ty<<")="<<"("<<250+tx<<","<<250+ty<<")"<<endl;
 cout<<"(350,250) +("<<tx<<","<<ty<<")="<<"("<<350+tx<<","<<250+ty<<")"<<endl;
 cout<<"(350,350) +("<<tx<<","<<ty<<")="<<"("<<350+tx<<","<<350+ty<<")"<<endl;
 cout<<"(250,350) +("<<tx<<","<<ty<<")="<<"("<<250+tx<<","<<350+ty<<")"<<endl;*/
 line(200+tx,200+ty,300+tx,200+ty);
 line(300+tx,200+ty,300+tx,300+ty);
 line(300+tx,300+ty,200+tx,300+ty);
 line(200+tx,300+ty,200+tx,200+ty);
 line(250+tx,250+ty,350+tx,250+ty);
 line(350+tx,250+ty,350+tx,350+ty);
 line(350+tx,350+ty,250+tx,350+ty);
 line(250+tx,350+ty,250+tx,250+ty);
 line(200+tx,200+ty,250+tx,250+ty);
 line(300+tx,200+ty,350+tx,250+ty);
 line(200+tx,300+ty,250+tx,350+ty);
 line(300+tx,300+ty,350+tx,350+ty);
 getch();
 clrscr();
 cleardevice();
 cout<<"Enter the x and y values by which scaling should take place";
 float sx,sy;
 cin>>sx>>sy;
/* cout<<"The coordinates after scaling\n";
 cout<<"("<<sx<<"*200,"<<sy<<"*200) ="<<"("<<200*sx<<","<<200*sy<<")"<<endl;
 cout<<"("<<sx<<"*300,"<<sy<<"*200) ="<<"("<<300*sx<<","<<200*sy<<")"<<endl;
 cout<<"("<<sx<<"*300,"<<sy<<"*300) ="<<"("<<300*sx<<","<<300*sy<<")"<<endl;
 cout<<"("<<sx<<"*200,"<<sy<<"*300) ="<<"("<<200*sx<<","<<300*sy<<")"<<endl;
 cout<<"("<<sx<<"*250,"<<sy<<"*250) ="<<"("<<250*sx<<","<<250*sy<<")"<<endl;
 cout<<"("<<sx<<"*350,"<<sy<<"*250) ="<<"("<<350*sx<<","<<250*sy<<")"<<endl;
 cout<<"("<<sx<<"*350,"<<sy<<"*350) ="<<"("<<350*sx<<","<<350*sy<<")"<<endl;
 cout<<"("<<sx<<"*250,"<<sy<<"*350) ="<<"("<<250*sx<<","<<350*sy<<")"<<endl;*/
 line(200,200,300,200);
 line(300,200,300,300);
 line(300,300,200,300);
 line(200,300,200,200);
 line(250,250,350,250);
 line(350,250,350,350);
 line(350,350,250,350);
 line(250,350,250,250);
 line(200,200,250,250);
 line(300,200,350,250);
 line(200,300,250,350);
 line(300,300,350,350);
 getch();
 cleardevice();
 line(200+(200-200)*sx,200+(200-200)*sy,200+(300-200)*sx,200+(200-200)*sy);
 line(200+(300-200)*sx,200+(200-200)*sy,200+(300-200)*sx,200+(300-200)*sy);
 line(200+(300-200)*sx,200+(300-200)*sy,200+(200-200)*sx,200+(300-200)*sy);
 line(200+(200-200)*sx,200+(300-200)*sy,200+(200-200)*sx,200+(200-200)*sy);
 line(200+(250-200)*sx,200+(250-200)*sy,200+(350-200)*sx,200+(250-200)*sy);
 line(200+(350-200)*sx,200+(250-200)*sy,200+(350-200)*sx,200+(350-200)*sy);
 line(200+(350-200)*sx,200+(350-200)*sy,200+(250-200)*sx,200+(350-200)*sy);
 line(200+(250-200)*sx,200+(350-200)*sy,200+(250-200)*sx,200+(250-200)*sy);
 line(200+(200-200)*sx,200+(200-200)*sy,200+(250-200)*sx,200+(250-200)*sy);
 line(200+(300-200)*sx,200+(200-200)*sy,200+(350-200)*sx,200+(250-200)*sy);
 line(200+(300-200)*sx,200+(300-200)*sy,200+(350-200)*sx,200+(350-200)*sy);
 line(200+(200-200)*sx,200+(300-200)*sy,200+(250-200)*sx,200+(350-200)*sy);
 getch();
 clrscr();
 cleardevice();
 cout<<"Enter the angle by which rotation should be done"<<endl;
 double p;
 cin>>p;
 double a=sin(p*PI/180);
 double b=cos(p*PI/180);
/* cout<<b*200-a*200<<","<<a*200+b*200<<endl;
 cout<<b*300-a*200<<","<<a*300+b*200<<endl;
 cout<<b*300-a*300<<","<<a*300+b*300<<endl;
 cout<<b*200-a*300<<","<<a*200+b*300<<endl;
 cout<<b*250-a*250<<","<<a*250+b*250<<endl;
 cout<<b*350-a*250<<","<<a*350+b*250<<endl;
 cout<<b*350-a*350<<","<<a*350+b*350<<endl;
 cout<<b*250-a*350<<","<<a*250+b*350<<endl;  */
 double x1,x2,x3,x4,x5,x6,x7,x8,y1,y2,y3,y4,y5,y6,y7,y8;
 line(200,200,300,200);
 line(300,200,300,300);
 line(300,300,200,300);
 line(200,300,200,200);
 line(250,250,350,250);
 line(350,250,350,350);
 line(350,350,250,350);
 line(250,350,250,250);
 line(200,200,250,250);
 line(300,200,350,250);
 line(200,300,250,350);
 line(300,300,350,350);
 getch();
 cleardevice();
 x1=(b*0-a*0)+200;
 x2=(b*100-a*0)+200;
 x3=(b*100-a*100)+200;
 x4=(b*0-a*100)+200;
 x5=(b*50-a*50)+200;
 x6=(b*150-a*50)+200;
 x7=(b*150-a*150)+200;
 x8=(b*50-a*150)+200;
 y1=(a*0+b*0)+200;
 y2=(a*100+b*0)+200;
 y3=(a*100+b*100)+200;
 y4=(a*0+b*100)+200;
 y5=(a*50+b*50)+200;
 y6=(a*150+b*50)+200;
 y7=(a*150+b*150)+200;
 y8=(a*50+b*150)+200;
 line(x1,y1,x2,y2);
 line(x2,y2,x3,y3);
 line(x3,y3,x4,y4);
 line(x4,y4,x1,y1);
 line(x5,y5,x6,y6);
 line(x6,y6,x7,y7);
 line(x7,y7,x8,y8);
 line(x8,y8,x5,y5);
 line(x1,y1,x5,y5);
 line(x2,y2,x6,y6);
 line(x3,y3,x7,y7);
 line(x4,y4,x8,y8);
// line((b*200
getch();

 getch();
}