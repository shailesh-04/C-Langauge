/**********************************************
 Statement - Move a Car
 Programmer - Vineet Choudhary
 Written For - http://developerinsider.co
 **********************************************/
#include <graphics.h>
#include <dos.h>
#include <conio.h>

main()
{
   int i,k,j=0,gd=DETECT,gm;

   initgraph(&gd,&gm,"C:\\TC\\BGI");

   settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
   outtextxy(25,240,"Press any key to view the moving car");

   getch();
   setviewport(0,0,639,440,1);

   for(i=0; i<=420; i=i+10,j++)
   {  for(k=1; k<=125; k++){
      rectangle(50+i,275+k,150+i,400);  }
      for(k=1; k<=50; k++){
      rectangle(150+i,350+k,200+i,400);    }
      for(k=1; k<=10; k++){
      circle(75+i,410,1+k);
      circle(175+i,410,1+k);}
      setcolor(j);
      delay(10);

      if( i == 420 )
         break;
 
      clearviewport();
   }
   return 0;
}