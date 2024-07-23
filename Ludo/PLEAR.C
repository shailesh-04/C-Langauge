int win=50;
void Player1()
{
	if(B[0].bT<=win && B[1].bT<=win && B[2].bT<=win && B[3].bT<=win){
		outtextxy(470,265,"No Tocent Avelable");
		getch();
	}
	setcolor(LIGHTBLUE);
	rectangle(22,265,179,418); // bottom left
	rectangle(24,263,177,416); // bottom left
	rectangle(26,261,175,414); // bottom left
	setcolor(15);
	settextstyle(0,0,1);
	outtextxy(75,410,"PLEAR-1");
	setcolor(WHITE);

	rectangle(445,31,635,200);

	settextstyle(2, HORIZ_DIR,5);
	outtextxy(460,35,"ROUND OF PLAYER [1]");
	outtextxy(461,35,"ROUND OF PLAYER [1]");//heardear
	line(450,36,630,36);
	line(450,50,630,50);

	settextstyle(0, HORIZ_DIR,1);
	outtextxy(450,60," PRESS ENTER TO ROLL..");
	outtextxy(460,70," THE DIE...");
	setfillstyle(2,LIGHTBLUE);
	bar(515,80,565,130);

	getch();

	settextstyle(0, HORIZ_DIR,1);
	outtextxy(450,140," PRESS NUMBER OF TOKEM");
	outtextxy(460,150," THAT MOVE DIE NO.");
	setcolor(LIGHTBLUE);
	randomize();
	for(i=0; i<4; i++)
		rnd = (rand() % 6)+1;

	sprintf(str,"%d",rnd);
	settextstyle(0, HORIZ_DIR,4);
	outtextxy(525,90,str);

	Lable:
	setcolor(i%15);
	settextstyle(0, HORIZ_DIR,2);

	if((B[0].bT<= win && B[0].bT !=-1) || rnd==6){
		outtextxy(455,170," [1]");
	}
	if((B[1].bT <= win && B[1].bT!=-1) || rnd==6){
		outtextxy(490,170," [2]");
	}
	if((B[2].bT <= win && B[2].bT!=-1) || rnd==6){
		outtextxy(525,170," [3]");
	}
	if((B[3].bT <= win && B[3].bT!=-1) || rnd==6 ){
		outtextxy(560,170," [4]");
	}

	ch = NULL;
	ch = getch();
	i++;

	if(rnd==6 || ((B[0].bT<=win && B[0].bT>=0) || (B[1].bT<=win && B[1].bT>=0) ||
					  (B[2].bT<=win && B[2].bT>=0) || (B[3].bT<=win && B[3].bT>=0)))
	switch(ch)
	{
		case '#': break;
		case '1':
			if(B[0].bT <= win && (B[0].bT!=-1 || rnd==6)){
				if(B[0].bT==-1)
					B[0].bT++;
				 else{
					B[0].bT += rnd;
					Blue(0,B[0].bT);
				 }
			 }else{
				goto Lable;
			 }
			break;
		case '2':
			if(B[1].bT <= win && (B[1].bT!=-1 || rnd==6)){
				if(B[1].bT==-1)
					B[1].bT++;
				 else{
					B[1].bT += rnd;
					Blue(1,B[1].bT);
				 }
			 }else{
				goto Lable;
			 }
			break;
		case '3':
			if(B[2].bT <= win && (B[2].bT!=-1 || rnd==6)){
				if(B[2].bT==-1)
					B[2].bT++;
				 else{
					B[2].bT += rnd;
					Blue(2,B[2].bT);
				 }
			 }else{
				goto Lable;
			 }
			break;
		case '4':
			if(B[3].bT <= win && (B[3].bT!=-1 || rnd==6)){
				if(B[3].bT==-1)
					B[3].bT++;
				 else{
					B[3].bT += rnd;
					Blue(3,B[3].bT);
				 }
			 }else{
				goto Lable;
			 }
			break;

		default :if(rnd == 6 || B[0].bT>=0 || B[1].bT>=0 || B[2].bT>=0 || B[3].bT>=0)
					{
						settextstyle(0,0,1);
						outtextxy(450,255,"->YOU ARE NOT CLIKED TO");
						outtextxy(470,265,"VALID TOKEN..");
						goto Lable;
					}
					break;
	}
	else{
		settextstyle(0,0,1);
		outtextxy(470,265,"No Tocent Avelable");}
}

void Player2()
{
	setcolor(LIGHTMAGENTA);
	rectangle(22,21,179,179);   //top left
	rectangle(24,23,177,177);   //top left
	rectangle(26,28,175,175);   //top left
	setcolor(15);
	settextstyle(0,0,1);
	outtextxy(60,23,"PLEAR-2");
//=================================================//

	rectangle(445,31,635,200);

	settextstyle(2, HORIZ_DIR,5);
	outtextxy(460,35,"ROUND OF PLAYER [2]");
	outtextxy(461,35,"ROUND OF PLAYER [2]");//heardear
	line(450,36,630,36);
	line(450,50,630,50);

	settextstyle(0, HORIZ_DIR,1);
	outtextxy(450,60," PRESS ENTER TO ROLL..");
	outtextxy(460,70," THE DIE...");
	setfillstyle(7, MAGENTA);
	bar(515,80,565,130);

	getch();

	settextstyle(0, HORIZ_DIR,1);
	outtextxy(450,140," PRESS NUMBER OF TOKEM");
	outtextxy(460,150," THAT MOVE DIE NO.");
	setcolor(LIGHTMAGENTA);
	randomize();
	for(i=0; i<4; i++)
		rnd = (rand() % 6)+1;

	sprintf(str,"%d",rnd);
	settextstyle(0, HORIZ_DIR,4);
	outtextxy(525,90,str);

	Lable:
	setcolor(i%15);
	settextstyle(0, HORIZ_DIR,2);

	if((Y[0].yT<= win && Y[0].yT !=-1) || rnd==6){
		outtextxy(455,170," [1]");
	}
	if((Y[1].yT <= win && Y[1].yT!=-1) || rnd==6){
		outtextxy(490,170," [2]");
	}
	if((Y[2].yT <= win && Y[2].yT!=-1) || rnd==6){
		outtextxy(525,170," [3]");
	}
	if((Y[3].yT <= win && Y[3].yT!=-1) || rnd==6 ){
		outtextxy(560,170," [4]");
	}

	ch = NULL;
	ch = getch();
	i++;

	if(rnd==6 || ((Y[0].yT<=win && Y[0].yT>=0) || (Y[1].yT<=win && Y[1].yT>=0) ||
					  (Y[2].yT<=win && Y[2].yT>=0) || (Y[3].yT<=win && Y[3].yT>=0)))
	switch(ch)
	{
		case '#': break;
		case '1':
			if(Y[0].yT <= win && (Y[0].yT!=-1 || rnd==6)){
				if(Y[0].yT==-1)
					Y[0].yT++;
				 else{
					Y[0].yT += rnd;
					Yellow(0,Y[0].yT);
				 }
			 }else{
				goto Lable;
			 }
			break;
		case '2':
			if(Y[1].yT <= win && (Y[1].yT!=-1 || rnd==6)){
				if(Y[1].yT==-1)
					Y[1].yT++;
				 else{
					Y[1].yT += rnd;
					Yellow(1,Y[1].yT);
				 }
			 }else{
				goto Lable;
			 }
			break;
		case '3':
			if(Y[2].yT <= win && (Y[2].yT!=-1 || rnd==6)){
				if(Y[2].yT==-1)
					Y[2].yT++;
				 else{
					Y[2].yT += rnd;
					Yellow(2,Y[2].yT);
				 }
			 }else{
				goto Lable;
			 }
			break;
		case '4':
			if(Y[3].yT <= win && (Y[3].yT!=-1 || rnd==6)){
				if(Y[3].yT==-1)
					Y[3].yT++;
				 else{
					Y[3].yT += rnd;
					Yellow(3,Y[3].yT);
				 }
			 }else{
				goto Lable;
			 }
			break;

		default :if(rnd == 6 || Y[0].yT>=0 || Y[1].yT>=0 || Y[2].yT>=0 || Y[3].yT>=0)
					{
						settextstyle(0,0,1);
						outtextxy(450,255,"->YOU ARE NOT CLIKED TO");
						outtextxy(470,265,"VALID TOKEN..");
						goto Lable;
					}
					break;
	}
	else{
		settextstyle(0,0,1);
		outtextxy(470,265,"No Tocent Avelable");}
}
void Player3()
{
	setcolor(LIGHTGREEN);
	rectangle(265,21,430,179);  //top right
	rectangle(267,23,428,177);  //top right
	rectangle(270,25,426,175);  //top right
	settextstyle(0,0,1);
	setcolor(15);
	outtextxy(320,23,"PLEAR-3");
//===============================================//
	rectangle(445,31,635,200);

	settextstyle(2, HORIZ_DIR,5);
	outtextxy(460,35,"ROUND OF PLAYER [3]");
	outtextxy(461,35,"ROUND OF PLAYER [3]");//heardear
	line(450,36,630,36);
	line(450,50,630,50);

	settextstyle(0, HORIZ_DIR,1);
	outtextxy(450,60," PRESS ENTER TO ROLL..");
	outtextxy(460,70," THE DIE...");
	setfillstyle(7,GREEN);
	bar(515,80,565,130);

	getch();

	settextstyle(0, HORIZ_DIR,1);
	outtextxy(450,140," PRESS NUMBER OF TOKEM");
	outtextxy(460,150," THAT MOVE DIE NO.");
	setcolor(GREEN);
	settextstyle(2, HORIZ_DIR,8);
	outtextxy(455,160," [1][2][3][4]");
	randomize();
	for(i=0; i<4; i++)
		rnd = (rand() % 6)+1;
	sprintf(str,"%d",rnd);
	settextstyle(0, HORIZ_DIR,4);
	outtextxy(525,90,str);

	Lable:
	ch = NULL;
	ch = getch();
	setcolor(i);
	i++;
	switch(ch)
	{
		case '#': break;
		case '1':if(rnd == 6 || G[0].gT >= 0)
					{
						if(G[0].gT==-1)
							G[0].gT++;
						else
						{
							G[0].gT += rnd;
							Green(0,G[0].gT);
						}

					}
					else
						if(G[1].gT>=0 || G[2].gT>=0 || G[3].gT>=0)
						{
							settextstyle(0,0,1);
							outtextxy(450,255,"->YOU ARE NOT CLIKED TO");
							outtextxy(470,265,"VALID TOKEN..");
							goto Lable;
						}
					break;

		case '2':if(rnd == 6 || G[1].gT >= 0)
					{
						if(G[1].gT==-1)
							G[1].gT++;
						else
						{
							G[1].gT += rnd;
							Green(1,G[1].gT);
						}
					}
					else
						if(G[0].gT>=0 || G[2].gT>=0 || G[3].gT>=0)
						{
							settextstyle(0,0,1);
							outtextxy(450,255,"->YOU ARE NOT CLIKED TO");
							outtextxy(470,265,"VALID TOKEN..");
							goto Lable;
						}
					break;

		case '3':if(rnd == 6 || G[2].gT >= 0)
					{
						if(G[2].gT==-1)
							G[2].gT++;
						else
						{
							G[2].gT += rnd;
							Green(2,G[2].gT);
						}
					}
					else
						if(G[1].gT>=0 || G[0].gT>=0 || G[3].gT>=0)
						{
							settextstyle(0,0,1);
							outtextxy(450,255,"->YOU ARE NOT CLIKED TO");
							outtextxy(470,265,"VALID TOKEN..");
							goto Lable;
						}
					break;
		case '4':if(rnd == 6 || G[3].gT >= 0)
					{
						if(G[3].gT==-1)
							G[3].gT++;
						else
						{
							G[3].gT += rnd;
							Green(3,G[3].gT);
						}
					}
					else
						if(G[1].gT>=0 || G[2].gT>=0 || G[0].gT>=0)
						{
							settextstyle(0,0,1);
							outtextxy(450,255,"->YOU ARE NOT CLIKED TO");
							outtextxy(470,265,"VALID TOKEN..");
							goto Lable;
						}
					break;

		default :if(rnd == 6|| G[0].gT>=0 || G[1].gT>=0 || G[2].gT>=0 || G[3].gT>=0)
					{
						settextstyle(0,0,1);
						outtextxy(450,255,"->YOU ARE NOT CLIKED TO");
						outtextxy(470,265,"VALID TOKEN..");
						goto Lable;
					}
	}
}
void Player4()
{
	setcolor(LIGHTRED);
	rectangle(265,265,430,418);  // botom right
	rectangle(267,267,428,416);  // botom right
	rectangle(270,270,426,414);  // botom right
	setcolor(15);
	settextstyle(0,0,1);
	outtextxy(330,410,"PLEAR-4");
//============================================//
	rectangle(445,31,635,200);

	settextstyle(2, HORIZ_DIR,5);
	outtextxy(460,35,"ROUND OF PLAYER [4]");
	outtextxy(461,35,"ROUND OF PLAYER [4]");//heardear
	line(450,36,630,36);
	line(450,50,630,50);

	settextstyle(0, HORIZ_DIR,1);
	outtextxy(450,60," PRESS ENTER TO ROLL..");
	outtextxy(460,70," THE DIE...");
	setfillstyle(7,LIGHTRED);
	bar(515,80,565,130);

	getch();

	settextstyle(0, HORIZ_DIR,1);
	outtextxy(450,140," PRESS NUMBER OF TOKEM");
	outtextxy(460,150," THAT MOVE DIE NO.");

	setcolor(LIGHTRED);
	settextstyle(2, HORIZ_DIR,8);
	outtextxy(455,160," [1][2][3][4]");
	randomize();
	for(i=0; i<4; i++)
		rnd = (rand() % 6)+1;
	sprintf(str,"%d",rnd);
	settextstyle(0, HORIZ_DIR,4);
	outtextxy(525,90,str);
	Lable:
	ch = NULL;
	ch = getch();
	setcolor(i);
	i++;
	switch(ch)
	{
		case '#': break;
		case '1':if(rnd == 6 || R[0].rT >= 0 )
					{
						if(R[0].rT==-1)
							R[0].rT++;
						else
						{
							R[0].rT += rnd;
							Red(0,R[0].rT);
						}

					}
					else
						if(R[1].rT>=0 || R[2].rT>=0 || R[3].rT>=0)
						{
							settextstyle(0,0,1);
							outtextxy(450,255,"->YOU ARE NOT CLIKED TO");
							outtextxy(470,265,"VALID TOKEN..");
							goto Lable;
						}
					break;

		case '2':if(rnd == 6 || R[1].rT >= 0)
					{
						if(R[1].rT==-1)
							R[1].rT++;
						else
						{
							R[1].rT += rnd;
							Red(1,R[1].rT);
						}
					}
					else
						if(R[0].rT>=0 || R[2].rT>=0 || R[3].rT>=0)
						{
							settextstyle(0,0,1);
							outtextxy(450,255,"->YOU ARE NOT CLIKED TO");
							outtextxy(470,265,"VALID TOKEN..");
							goto Lable;
						}
					break;

		case '3':if(rnd == 6 || R[2].rT >= 0)
					{
						if(R[2].rT==-1)
							R[2].rT++;
						else
						{
							R[2].rT += rnd;
							Red(2,R[2].rT);
						}
					}
					else
						if(R[1].rT>=0 || R[0].rT>=0 || R[3].rT>=0)
						{
							settextstyle(0,0,1);
							outtextxy(450,255,"->YOU ARE NOT CLIKED TO");
							outtextxy(470,265,"VALID TOKEN..");
							goto Lable;
						}
					break;
		case '4':if(rnd == 6 || R[3].rT >= 0)
					{
						if(R[3].rT==-1)
							R[3].rT++;
						else
						{
							R[3].rT += rnd;
							Red(3,R[3].rT);
						}
					}
					else
						if(R[1].rT>=0 || R[2].rT>=0 || R[0].rT>=0)
						{
							settextstyle(0,0,1);
							outtextxy(450,255,"->YOU ARE NOT CLIKED TO");
							outtextxy(470,265,"VALID TOKEN..");
							goto Lable;
						}
					break;

		default :if(rnd == 6|| R[0].rT>=0 || R[1].rT>=0 || R[2].rT>=0 || R[3].rT>=0)
					{
						settextstyle(0,0,1);
						outtextxy(450,255,"->YOU ARE NOT CLIKED TO");
						outtextxy(470,265,"VALID TOKEN..");
						goto Lable;
					}
	}
}
