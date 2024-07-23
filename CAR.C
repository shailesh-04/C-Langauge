#include<graphics.h>
#include<conio.h>
void main()
{
	int Gd=0,Gm;

	//initgraph(&Gd,&Gm,"C:\\TC\\BGI");
	//initgraph(&Gd,&Gm,"C:\\TURBOC3\\BGI");

	line(50,380,64,380); // Back Wheel Left Side Line
	line(189,380,433,380); // Back Wheel Right Side Line
	line(557,380,620,380); // Front Wheel Left Side Line

	// Wheeles
	circle(127,362,65); // Back Wheel 1
	circle(127,362,40); // Back Wheel 2
	circle(126,362,10); // Back Wheel 3

	line(10,340,50,380); // Back Wheel Secound Line
	line(1,280,10,339); // Back Wheel Therid Line

	circle(495,362,65); // Front Wheel 1
	circle(495,362,40); // Front Wheel 2
	circle(496,362,10); // Front Wheel 3

	line(620,370,620,380);// Front Wheel Second Line
	line(580,370,620,370);// Front Wheel Therd Line

	arc(618,363,87,191,40);// Front Wheel Patern 1
	line(615,323,600,369); // Front Wheel Pattern 2
	line(622,313,622,323); //Front Wheel Pattern 3
	line(500,256,623,312); // Front Panel Of Engine 1

	arc(427,398,63,112,160); // Front Pannel Of Engine 2

	arc(340,298,-52,59,60);// Dor's Right Line
	line(240,346,375,346);// Dor's Bottom Line
	line(210,279,240,345);// Dor's Left Line

	arc(258,441,60,122,220); // Floar Of Car 2
	arc(250,63,-120,-58,220); // Floar Of Car 6

	arc(230,446,52,120,260); // Floar Of Car 8

	ellipse(28,301,109,138,34,34);// Back Pattern 1
	line(16,269,30,269);// Back Pattern 2
	line(31,268,99,222); // Bacl Pattern 3

 getch();
// closegraph();
}