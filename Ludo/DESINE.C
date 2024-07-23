void Desine()
{
	int i,size=0;
	clrscr();
	setcolor(5);

	setfillstyle(0,0);
	floodfill(2, 2, 2);

	rectangle(20,20,430,420);
	setcolor(1);

	setfillstyle(1,MAGENTA);
	bar(50,179,77,235);   //top left
	bar(50,210,230,235);

	setfillstyle(1,BLUE);
	bar(179,370,235,400);  // bottom left
	bar(210,265,235,400);

	setfillstyle(1,GREEN);
	bar(210,46,265,75);  //top right
	bar(210,46,235,180);

	setfillstyle(1,RED);
	bar(370,210,399,270);  // botom right
	bar(265,210,399,235);

	setcolor(WHITE);
	for(i=0; i<15; i++){
		line(20,20+size,430,20+size);
		line(20+size,20,20+size,420);

		size+=27;
	}
	size=27;

	settextstyle(0,0,1);
	setfillstyle(1,BLUE);
	bar(22,265,179,418);  // bottom left
	setcolor(3);
	outtextxy(75,410,"PLEAR-1");
	setfillstyle(1,WHITE);
	bar(42,285,159,398);  // bottom left
	setcolor(BLUE);

	setfillstyle(1,MAGENTA);
	bar(22,21,179,179);   //top left
	setcolor(0);
	outtextxy(60,23,"PLEAR-2");
	setfillstyle(1,WHITE);
	bar(42,41,159,159);   //top left

	setfillstyle(1,GREEN);
	bar(265,21,430,179);  //top right
	setcolor(0);
	outtextxy(320,23,"PLEAR-3");
	setfillstyle(1,WHITE);
	bar(285,41,410,159); //TOP TO RIGHT

	setfillstyle(1,RED);
	bar(265,265,430,418);  // botom right
	setcolor(0);
	outtextxy(330,410,"PLEAR-4");
	setfillstyle(1,WHITE);
	bar(285,285,410,400);  // botom right

	setfillstyle(1,15);
	bar(179,179,265,265);  // Cenet

	for(i=0; i<13; i++,i++)
	{
		setcolor( MAGENTA);
		circle(70,70,i);
		circle(130,70,i);
		circle(70,130,i);
		circle(130,130,i);
		settextstyle(0,0,3);
		if(Y[0].yT == -1)
			outtextxy(65,65,"1");//YEllow
		if(Y[1].yT == -1)
			outtextxy(125,70,"2");//YEllo
		if(Y[2].yT == -1)
			outtextxy(65,130,"3");//YEllow
		if(Y[3].yT == -1)
			outtextxy(125,130,"4");//Yellow

		setcolor(BLUE);
		circle(70,310,i);
		circle(130,310,i);
		circle(70,370,i);
		circle(130,370,i);

		settextstyle(0,0,3);
		if(B[0].bT == -1)
			outtextxy(65,305,"1");//Blue
		if(B[1].bT == -1)
			outtextxy(125,305,"2");//Blue
		if(B[2].bT == -1)
			outtextxy(65,365,"3");//Blue
		if(B[3].bT == -1)
			outtextxy(125,365,"4");//Blue


		setcolor(GREEN);
		circle(320,70,i);
		circle(380,70,i);
		circle(320,130,i);
		circle(380,130,i);

		settextstyle(0,0,3);
		if(G[0].gT == -1)
			outtextxy(320,65,"1");//Green
		if(G[1].gT == -1)
			outtextxy(380,70,"2");//Green
		if(G[2].gT == -1)
			outtextxy(320,130,"3");//Green
		if(G[3].gT == -1)
			outtextxy(380,130,"4");//Green

		setcolor(RED);
		circle(320,310,i);
		circle(380,310,i);
		circle(320,370,i);
		circle(380,370,i);

		settextstyle(0,0,3);
		if(R[0].rT == -1)
			outtextxy(320,305,"1");//REd
		if(R[1].rT == -1)
			outtextxy(380,305,"2");//Red
		if(R[2].rT == -1)
			outtextxy(320,365,"3");//REd
		if(R[3].rT == -1)
			outtextxy(380,365,"4");//Red

	}
	setcolor(WHITE);
	rectangle(445,220,635,420);
	setcolor(RED);
	settextstyle(2, HORIZ_DIR,8);
	outtextxy(500,225,"ERROR");
	outtextxy(501,226,"ERROR");//heardear
	line(450,230,630,230);
	line(450,250,630,250);

	setcolor(LIGHTBLUE);

	settextstyle(0,0,1);
	if(B[0].bT >=0 )
	outtextxy(185+B[0].x,375+B[0].y,"1");//Blue
	if(B[1].bT >=0 )
	outtextxy(195+B[1].x,375+B[1].y,"2");//Blue
	if(B[2].bT >=0 )
	outtextxy(185+B[2].x,385+B[2].y,"3");//Blue
	if(B[3].bT >=0 )
	outtextxy(195+B[3].x,385+B[3].y,"4");//Blue
	//=======================================//

	setcolor(13);
	settextstyle(0,0,1);
	if(Y[0].yT != -1)
	outtextxy( 55+Y[0].x,186+Y[0].y,"1");//Yellow
	if(Y[1].yT != -1)
	outtextxy( 66+Y[1].x,186+Y[1].y,"2");//Yellow
	if(Y[2].yT != -1)
	outtextxy( 55+Y[2].x,196+Y[2].y,"3");//Yellow
	if(Y[3].yT != -1)
	outtextxy( 66+Y[3].x,196+Y[3].y,"4");//Yellow
  //==========================================//
	setcolor(LIGHTGREEN);
	if(G[0].gT != -1)
		outtextxy(238+G[0].x,55+G[0].y ,"1");//GREEN
	if(G[1].gT != -1)
		outtextxy(255+G[1].x,55+G[1].y ,"2");//GREEN
	if(G[2].gT != -1)
		outtextxy(238+G[2].x,65+G[2].y ,"3");//GREEN
	if(G[3].gT != -1)
		outtextxy(255+G[3].x,65+G[3].y ,"4");//GREEN

	setcolor(LIGHTRED);
	if(R[0].rT != -1)
	outtextxy(375+R[0].x,245+R[0].y,"1");//RED
	if(R[1].rT != -1)
	outtextxy(375+R[1].x,255+R[1].y,"2");//RED
	if(R[2].rT != -1)
	outtextxy(387+R[2].x,245+R[2].y,"3");//RED
	if(R[3].rT != -1)
	outtextxy(387+R[3].x,255+R[3].y,"4");//RED
}