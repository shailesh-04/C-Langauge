void Blue(int t, int n)
{
	B[t].y=0;
	B[t].x=0;
	for(i=1,j=1; j<=n; i++,j++)
	{
		switch(i)
		{
			case 1: case 2:	case 3:case 4: B[t].y-=27;break;
			case 5: B[t].y-=27; B[t].x-=27;break;
			case 6: case 7:case 8:case 9:case 10:B[t].x-=27;break;
			case 11:case 12:B[t].y-=27;break;
			case 13:case 14:case 15:case 16:case 17:B[t].x+=27;break;
			case 18:B[t].x+=27;B[t].y-=27;break;
			case 19:case 20:case 21:case 22:case 23:B[t].y-=27;break;
			case 24:case 25:B[t].x+=27;break;

			case 26:case 27:case 28:case 29:	case 30:B[t].y+=27;break;

			case 31:B[t].x+=27;B[t].y+=27;break;
			case 32:case 33:case 34:case 35:case 36:B[t].x+=27;break;
			case 37:case 38:B[t].y+=27;break;
			case 39:case 40:case 41:case 42:case 43:B[t].x-=27;break;
			case 44:B[t].x-=27;B[t].y+=27;break;
			case 45:case 46:case 47:case 48:case 49:B[t].y+=27;break;
			case 50:B[t].x-=27;break;
			case 51:case 52:case 53:case 54:case 55:case 56:B[t].y-=27;break;
			default: settextstyle(0,0,1);outtextxy(450,265,"-> The Token Is Win");break;
		}
	}


}
void Yellow(int t,int n)
{
	Y[t].y=0;
	Y[t].x=0;
	for(i=1,j=1; j<=n; i++,j++)
	{
		// START TO YELLOW PART
		if(i>=1 && i<=4) Y[t].x+=27;
		if(i==5){  Y[t].x+=27; Y[t].y-=27;}
		if(i>=6 && i<=10) Y[t].y-=27;
		if(i>=11 && i<=12) Y[t].x+=27;
		//START TO GREEN PART
		if(i>=13 && i<=17) Y[t].y+=27;
		if(i==18){  Y[t].x+=27; Y[t].y+=27;}
		if(i>=19 && i<=23) Y[t].x+=27;
		if(i>=24 && i<=25) Y[t].y+=27;
		//START TO RED PART
		if(i>=26 && i<=30) Y[t].x-=27;
		if(i==31){  Y[t].x-=27;Y[t].y+=27;}
		if(i>=32 && i<=36)Y[t].y+=27;
		if(i>=37 && i<=38)Y[t].x-=27;
		// START TO BLUE PART
		if(i>=39 && i<=43) Y[t].y-=27;
		if(i==44){  Y[t].x-=27;Y[t].y-=27;}
		if(i>=45 && i<=49)Y[t].x-=27;
		if(i>=50 && i<=50)Y[t].y-=27;
		// GOTO IN GREEN PART
		if(i>=51 && i<=56)Y[t].x+=27;
	 // THE TEXT IS LAST OUTPUT

	}

}
void Green(int t,int n)
{
	G[t].y=0;
	G[t].x=0;
	for(i=1,j=1; j<=n; i++,j++)
	{
		//START TO GREEN PART
		if(i>=1 && i<=4) G[t].y+=27;

		if(i==5){   G[t].x+=27; G[t].y+=27;}
		if(i>=6  && i<=10) G[t].x+=27;
		if(i>=11 && i<=12) G[t].y+=27;
		//START TO RED PART
		if(i>=13 && i<=17) G[t].x-=27;
		if(i==18){  G[t].x-=27;G[t].y+=27;}
		if(i>=19 && i<=23)G[t].y+=27;
		if(i>=24 && i<=25)G[t].x-=27;
		// START TO BLUE PART
		if(i>=26 && i<=30) G[t].y-=27;
		if(i==31){  G[t].x-=27;G[t].y-=27;}
		if(i>=32 && i<=36)G[t].x-=27;
		if(i>=37 && i<=38)G[t].y-=27;
		//START TO YELLOW
		if(i>=39 && i<=43) G[t].x+=27;
		if(i==44){  G[t].x+=27; G[t].y-=27;}
		if(i>=45 && i<=49) G[t].y-=27;
		if(i>=50 && i<=50) G[t].x+=27;
		//GOTO IN GREEN SPACE
		if(i>=51 && i<=56) G[t].y+=27;
	}

}
void Red(int t,int n)
{
	R[t].y=0;
	R[t].x=0;
	for(i=1,j=1; j<=n; i++,j++)
	{
		//START TO RED PART
		if(i>=1 && i<=4) R[t].x-=27;
		if(i==5){  R[t].x-=27;R[t].y  +=27;}
		if(i>=6 && i<=10)R[t].y  +=27;
		if(i>=11 && i<=12)R[t].x-=27;
		// START TO BLUE PART
		if(i>=13 && i<=17) R[t].y  -=27;
		if(i==18){  R[t].x-=27;R[t].y  -=27;}
		if(i>=19 && i<=23)R[t].x-=27;
		if(i>=24 && i<=25)R[t].y  -=27;
		//START TO YELLOW
		if(i>=26 && i<=30) R[t].x+=27;
		if(i==31){  R[t].x+=27; R[t].y  -=27;}
		if(i>=32 && i<=36) R[t].y  -=27;
		if(i>=37 && i<=38) R[t].x+=27;
		//START TO GREEN PART
		if(i>=39 && i<=43) R[t].y  +=27;
		if(i==44){  R[t].x+=27; R[t].y  +=27;}
		if(i>=45 && i<=49) R[t].x+=27;
		if(i>=50 && i<=50) R[t].y  +=27;
		//GOTO IN WIN RED SPACE
		if(i>=51 && i<=56) R[t].x-=27;

	}

}

