#include<iostream.h>
#include<conio.h>
#include<dos.h>       //delay
#include<stdlib.h>      //system functions
#include<graphics.h>  //graphical functions
#include<windows.h>
class Disclaimer
{
public:
void dis()    //descalimer
 {
 char fst[79]={"1)CASINO IS ONE OF THE GAMBLING GAMES IT MIGHT BE FUN BUT IT CAN BE ADDTICTIVE."},i;
 char snd[95]={"2)CASINO GAMES ARE SUBJECT TO FINANCIAL RISK, READ ALL THE TERMS AND CONDITIONS BEFORE PLAYING."};
 char trd[68]={"3)CASINO IS NOT GAURANTEEING ANY FIXED PRICE PLAY ON YOUR OWN RISK."};
  cout<<"                                      DISCLAIMER"<<endl;
  for(i=0;i<79;i++)        //first line of desclaimer
   {
   cout<<fst[i];
   delay(10);
   }
  cout<<endl;
  for(i=0;i<95;i++)       //second line of desclaimer
   {
   cout<<snd[i];
   delay(10);
   }
  cout<<endl;
  for(i=0;i<68;i++)        //third line of desclaimer
   {
     cout<<trd[i];
     delay(10);
   }
   cout<<endl;
   system("pause");
 }
void plot(int xc, int yc, int x, int y){
   putpixel(xc+x,yc+y,RED);
   putpixel(xc-x,yc+y,RED);
   putpixel(xc-x,yc-y,RED);
   putpixel(xc+x,yc-y,RED);
   putpixel(xc+y,yc+x,RED);
   putpixel(xc-y,yc+x,RED);
   putpixel(xc-y,yc-x,RED);
   putpixel(xc+y,yc-x,RED);
 }
 void bres(int xc, int yc, int r){
 int x=0,y,s;
  y=r;
  s=3-2*r;
  while(x<=y){
    if(s<0){
    s=s+4*x+6;
    }
    else{
    s=s+4*(x-y)+10;
    y=y-1;
    }
    x=x+1;
    plot(xc,yc,x,y);
    delay(100);
  }
 }
};
 void main(){
 //get the handle to the consele
 HANDLE consoleHANDLE = GetStdHandle(STD_OUTPUT_HANDLE);
 //set the text color to black
 SetConsoleTextAttribute(consoleHANDLE,FOREGROUND_RED);
 Disclaimer d;         //d is an object of Desclaime class
  int b[3],ec,am,x=1;        //ec variable is for Entry code
  clrscr();                  //am is amount
  d.dis();                   //array b[3] is for number entered by use
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"C://TURBOC3//BGI");
  rectangle(90,10,295,50);
  setfillstyle(SOLID_FILL,RED);
  floodfill(95,15,WHITE);
  cout<<endl;
 // cout<<" \t  ---------------------------"<<endl;
 outtextxy(90,30," WELCOME TO NOVA's CASINO");
  //cout<<endl<<"\n  \t  ---------------------------"<<endl;
  cout<<endl<<endl<<endl;//<<"-------------------"<<endl;
  //rectangle(50,100,230,120);
  cout<<" Enter Entry PASS: ";//cout<<endl<<"--------------------";
 // cout<<"------------------"<<endl<<endl;
 cin>>ec;
 cout<<endl<<endl;
 //rectangle(50,150,230,150);
  if(ec==2016){

  setfillstyle(SOLID_FILL,YELLOW);
  floodfill(95,95,WHITE);
  //textcolor(x);
//cout<<"--------------------"<<endl;
rectangle(90,120,250,80);
outtextxy(90,100," CORRECT ENTRY CODE");
 setfillstyle(SOLID_FILL,RED);
  floodfill(92,101,WHITE);
//cout<<"--------------------"<<endl<<endl;
putpixel(90,100,BLUE);
cout<<"\n\nENTER THE AMOUNT TO BE SORT: ";
cin>>am;
cout<<endl<<endl;
cout<<"ENTER 3 NUMBERS: ";
for(int k=0;k<3;k++){     //accepting 3 nums from user
cin>>b[k];
}
cout<<endl;
int num;      //converting 3 array elements into 3 digit num
num=(b[0]*100)+(b[1]*10)+(b[2]); //num is that 3 digit number
int og,cp,l=0;
for(k=0;k<3;k++){//variable l is for random num generation
  l=l+b[k];
}
og=num;  //value of num is copied into og
cp=og;   //value of og is copied into cp
int rem,res=0,flag=0;   //checking whether cp is an armstrong
while(cp>0){   //          number or not
 rem=cp%10;
 res=res+(rem*rem*rem);
 cp=cp/10;
}
 if(res==num){
    flag=0;
 }                 //if cp is armstrong then flag=0
 else{           //  else flag=1
  flag=1;
 }
 cout<<endl;
cout<<"-------------------------------"<<endl;//<<endl<<"\t\t--------";//<<endl<<endl<<"\t\t   ------";
cout<<"\t\t-----------";
cout<<endl<<" NUMBER GENERATED:|";
if(flag==0){          //if flag is 0 then same number as entered by the user
      for(k=0;k<3;k++){   // will be printed
      delay(150);
       cout<<b[k]<<"|";
     //  delay(150);
      }
      //getch();
      cout<<endl;
      delay(100);
      cout<<"\t\t----------"<<endl;delay(100);
cout<<"---------------------------------"<<endl<<endl;
	cout<<"-------------------------------"; delay(100);
  cout<<endl<<" CONGRATULATIONS YOU WON $  "<<am*10<<endl; delay(100);
	cout<<"-------------------------------";
       delay(100);
       getch();
  cleardevice();
   setfillstyle(SOLID_FILL,GREEN);
  floodfill(92,101,RED);
   d.bres(300,171,70);
   d.bres(270,150,10);
   d.bres(330,150,10);
   arc(300,180,180,0,30);
   line(270,180,330,180);
   delay(100);
   outtextxy(268,270,"T");
   delay(100);
   outtextxy(276,270,"H"); delay(100);
   outtextxy(284,270,"A"); delay(100);
   outtextxy(292,270,"N"); delay(100);
   outtextxy(300,270,"K"); delay(100);
      outtextxy(315,270,"Y"); delay(100);
	 outtextxy(323,270,"O");delay(100);
	    outtextxy(331,270,"U");
//  circle(270,210,50);
    }
    else{           //if flag is not 0
    delay(150);  //random number will be printed using variable l
     cout<<l+1<<"|";  delay(150);
     cout<<l+b[0]<<"|"; delay(150);
     cout<<b[1]+1<<"|"<<endl;
     cout<<"\t\t----------"<<endl;
cout<<"--------------------------------"<<endl<<endl;
     cout<<"--------------------------------"<<endl;
     cout<<"| OOPs, Better luck Next time! |"<<endl;
     cout<<"--------------------------------"<<endl;
     getch();
     cleardevice();
       setfillstyle(SOLID_FILL,BLUE);
  floodfill(92,101,RED);
       d.bres(300,171,70);
   d.bres(270,150,10);
   d.bres(330,150,10);
   arc(300,210,0,180,30);
   line(270,210,330,210);
   delay(100);
   outtextxy(268,270,"T");
   delay(100);
   outtextxy(276,270,"R"); delay(100);
   outtextxy(284,270,"Y"); delay(100);
   outtextxy(299,270,"A"); delay(100);
   outtextxy(307,270,"G"); delay(100);
      outtextxy(315,270,"A"); delay(100);
	 outtextxy(323,270,"I");delay(100);
	    outtextxy(331,270,"N");
    }
  }
  else{
   cout<<"-----------------------------------------"<<endl;
   cout<<"| SORRY INVALID ENTRY CODE, ENTRY REVOKED |"<<endl;
   cout<<"-----------------------------------------"<<endl;
  }
  getch();
 }