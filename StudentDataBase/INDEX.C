#include<stdio.h>
#include<conio.h>
#include<graphics.h>

#include"Var.h"
#include"function.h"

void main()
{
	clrscr();
	Menu(); 			///////GOTO MANU
	getch();
}
void Menu()
{
	while(1)
	{
		clrscr();
		window(T,L,R,B);
		textbackground(16);
		clrscr();
		textcolor(RED); gotoxy(20,1);cprintf("Opration List");
		textcolor(0); gotoxy(2,2);for(i=0; i<45; i++)cprintf("\1");
		textcolor(RED); gotoxy(3,3);cprintf(" #] EXIT ");
		textcolor(2);
		gotoxy(3,4);cprintf(" 1] Add New  Record...");
		gotoxy(3,5);cprintf(" 2] Show All Data S... ");
		gotoxy(3,6);cprintf(" 3] Show All MarkShee... ");
		gotoxy(3,7);cprintf(" 4] Sersch   Record...");
		gotoxy(3,8);cprintf(" 5] Update   Record...");
		gotoxy(3,9);cprintf(" 6] Delete   Record...");
		textcolor(BLACK);
		gotoxy(5,11);for(i=0; i<35; i++)cprintf("\1");
		textcolor(RED);
		gotoxy(7,12);cprintf("Enter Your Choice :-");
		textcolor(WHITE);
		Choice = NULL;
		fflush(stdin);
		Choice=getch();
		fclose(fp1);
		switch(Choice)
		{
			case '#': exit();
			case '1': Get_Data();getch();		 	break;
			case '2': Sow_All_Record(); 			break;
			case '3': Show_All_MarkSheet();		break;
			case '4': Sersch_Record();				break;
			case '5': Update_Record(); getch();	break;
			case '6': Delete();                 break;
			default : Error();getch();
		}
	}
}

void Error()
{

	clrscr();
	window(L,T,R,B);
	textbackground(16);
	clrscr();
	textcolor(RED);
	gotoxy(35,13); cprintf("ERROR");
	textcolor(16);
	textcolor(2);
	gotoxy(28,14); cprintf("...Invalid Choice...");

	textcolor(5);
	gotoxy(23,15); cprintf("........Press Any Key........");
	getch();

}
void Get_Data()
{
	New_MarkSheet();
	Save_Data();
}
void New_MarkSheet()
	{
		clrscr();
		window(L,T,R,B);
		textbackground(16);
		clrscr();
		textcolor(WHITE);
		gotoxy(4,1);cprintf("+---Form Of New Student MarSheet----+");
		gotoxy(2,4);cprintf("      ,      ,       ");
		textcolor(YELLOW);gotoxy(1,3);cprintf("Select Student Semester");
		textcolor(WHITE);gotoxy(2,4);cprintf("[ 1 ]");
		textcolor(WHITE);gotoxy(10,4);cprintf("[ 2 ]");
		textcolor(WHITE);gotoxy(18,4);cprintf("[ 3 ] Goto Manu-->[ # ]");
		fflush(stdin);
		scanf("%d",&Data.Sem);
		if(Data.Sem==35)Menu();
		if(Data.Sem==1)
			{  textbackground(GREEN);
				textcolor(WHITE);gotoxy(2,4);cprintf("[ 1 ]");
				textbackground(BLACK);
				textcolor(WHITE);

				gotoxy(2,6);cprintf(" Enter Roll_No.           :-");
				scanf("%d",&Data.Roll);

				gotoxy(2,7);cprintf(" Enter Student Name       :-");
				fflush(stdin);
				gets(Data.Name);

				gotoxy(2,8);cprintf(" Enter Student City       :-");
				fflush(stdin);
				gets(Data.City);

				gotoxy(2,9);cprintf(" Enter Student gender     :-");
				fflush(stdin);
				Data.Gender = NULL;
				Data.Gender = getch();;

				gotoxy(2,11);cprintf(" Enter Mark of F.C.O-1  	:-");
				scanf("%d",&Data.S1);

				gotoxy(2,12);cprintf(" Enter Mark of C_Language 	:-");
				scanf("%d",&Data.S2);

				gotoxy(2,13);cprintf(" Enter Mark of RDBMS      	:-");
				scanf("%d",&Data.S3);

				gotoxy(2,14);cprintf(" Enter Mark of Math       	:-");
				scanf("%d",&Data.S4);
				DataS();
			}
			else if(Data.Sem==2)
			{  textbackground(GREEN);
				textcolor(WHITE);gotoxy(10,4);cprintf("[ 2 ]");
				textbackground(BLACK);
				textcolor(WHITE);

				gotoxy(2,6);cprintf(" Enter Roll_No.           :-");
				scanf("%d",&Data.Roll);

				gotoxy(2,7);cprintf(" Enter Student Name       :-");
				fflush(stdin);
				gets(Data.Name);

				gotoxy(2,8);cprintf(" Enter Student City       :-");
				fflush(stdin);
				gets(Data.City);

				gotoxy(2,9);cprintf(" Enter Student gender     :-");
				scanf("%c",&Data.Gender);

				gotoxy(2,11);cprintf(" Enter Mark of F.C.O-2  		:-");
				scanf("%d",&Data.S1);

				gotoxy(2,12);cprintf(" Enter Mark of Advance C Pro.. :-");
				scanf("%d",&Data.S2);

				gotoxy(2,13);cprintf(" Enter Mark of WEB_Desining		:-");
				scanf("%d",&Data.S3);

				gotoxy(2,14);cprintf(" Enter Mark of Statistics      :-");
				scanf("%d",&Data.S4);
				DataS();
			}
			else if(Data.Sem==3)
			{
				textbackground(GREEN);
				textcolor(WHITE);gotoxy(18,4);cprintf("[ 3 ]");
				textbackground(BLACK);
				textcolor(WHITE);

				gotoxy(2,6);cprintf(" Enter Roll_No.           :-");
				scanf("%d",&Data.Roll);

				gotoxy(2,7);cprintf(" Enter Student Name       :-");
				fflush(stdin);
				gets(Data.Name);

				gotoxy(2,8);cprintf(" Enter Student City       :-");
				fflush(stdin);
				gets(Data.City);

				gotoxy(2,9);cprintf(" Enter Student gender     :-");
				scanf("%c",&Data.Gender);

				gotoxy(2,11);cprintf(" Enter Mark of Opreting System :-");
				scanf("%d",&Data.S1);

				gotoxy(2,12);cprintf(" Enter Mark of Data&File Stucture:-");
				scanf("%d",&Data.S2);

				gotoxy(2,13);cprintf(" Enter Mark of Object orinted pro.CPP:-");
				scanf("%d",&Data.S3);

				gotoxy(2,14);cprintf(" Enter Mark of System As_Design  :-");
				scanf("%d",&Data.S4);
				DataS();
			}
		else
			{
					TOP:
					textcolor(0);
					clrscr();
					textcolor(RED);
					gotoxy(1,3);cprintf("You Will Be Not Avelable To Insert The Data Of Sem %d At Present",Data.Sem);
					textcolor(YELLOW);
					gotoxy(1,4);cprintf(" 1] Go Menu");
					textcolor(WHITE);
					gotoxy(1,5);cprintf(" 2] Retry");
					gotoxy(3,7);cprintf(" Entet Choise :-");
					gotoxy(19,7);textcolor(WHITE+BLINK);cprintf("_");
					Choice = NULL;
					fflush(stdin);
					Choice=getch();
						switch(Choice)
							{
								case '1': Menu(); break;
								case '2': Data.Sem=0; Get_Data();break;
								default:textcolor(RED+BLINK); gotoxy(4,10);cprintf("SORYY Your Option Is Invalid");getch();goto TOP;
							}
			}
	}
void DataS()
	{
		int Assci;
		strupr(Data.Name);
		strupr(Data.City);
		strupr(Data.Gender);
		Assci=Data.Gender;
		if(Assci>97)
		{
			Data.Gender=(Assci-32);
		}

		Data.Total= Data.S1+ Data.S2+ Data.S3+ Data.S4;
		Data.Per=Data.Total/4.0;

		if(80<Data.Per)
			{
				Data.Gread='O';
			}
		else if(70<Data.Per)
			{
				Data.Gread='A';
			}
		else if(60<Data.Per)
			{
				Data.Gread='B';
			}
		else if(50<Data.Per)
			{
				Data.Gread='C';
			}
		else if(40<Data.Per)
			{
				Data.Gread='D';
			}
		else if(30<Data.Per)
			{
				Data.Gread='E';
			}
		else
			{
				Data.Gread='F';
			}

			Data.P_F=0;									//Condition Of Pass Or Faile
			if(30>Data.S1){
				Data.P_F=1;
			}
			else if(30>Data.S2){
				 Data.P_F=1;
			}
			else if(30>Data.S3){
				Data.P_F=1;
			}
			else if(30>Data.S4){
				Data.P_F=1;
			}
			else
			{
				Data.P_F=0;
			}
	}

void Save_Data()
	{
		Lable:
		window(1,1,80,25);
		textbackground(BLACK);
		clrscr();
		clrscr();
		gotoxy(10,2);cprintf("Do You Want To Save? ");
		textcolor(RED);
		gotoxy(2,4);cprintf(" #]  Don't Save MarkSheet.. , Goto MENU ");
		textcolor(GREEN);
		gotoxy(2,5);cprintf(" 1]   Save MarkSheet.. ,Goto MENU");
		textcolor(WHITE);
		gotoxy(2,6);cprintf(" 2]  Sow Marksheet ");
		gotoxy(2,7);cprintf(" 3]  This Data Delete And ReEnter Data.. ");
		gotoxy(4,9);cprintf(" Enter Your Choice :-");
		Choice = NULL;
		fflush(stdin);
		Choice = getch();
		switch(Choice)
			{
				case'1':
					switch(Data.Sem)
						{
							case 1 :
								fp1=fopen("Sem1.txt","a");
								fwrite(&Data,sizeof(Data),1,fp1);
								fclose(fp1);
							break;

							case 2 :
								fp1=fopen("Sem2.txt","a");
								fwrite(&Data,sizeof(Data),1,fp1);
								fclose(fp1);
							break;

							case 3 :
								fp1=fopen("Sem3.txt","a");
								fwrite(&Data,sizeof(Data),1,fp1);
								fclose(fp1);
							break;
						}
						gotoxy(5,11);textcolor(GREEN+BLINK); cprintf("Data Is Secsuce Fully Seve \1\1\1..."); getch(); break;
			case '#': gotoxy(5,11);textcolor(RED+BLINK);cprintf("...Your MarkSheet Can't Saved\1...");break;

			case '2': Show_Data(); getch(); goto Lable;

			case'3' : Get_Data();
			default:  Error(); getch();
						goto Lable;
			}
	}

void Show_All_MarkSheet()
{
	window(L,T,R,B);
	textbackground(0);
	clrscr();
	window(19,7,63,19);
	textbackground(3);
	clrscr();
	window(17,6,60,18);
	textbackground(WHITE);
	clrscr();
	clrscr();
	textcolor(RED);
	gotoxy(10,2);cprintf(" WHERE TO SEE SEM ALL MARKSHEET\n");
	textcolor(0);
	gotoxy(4,3);for(i=0; i<39; i++)cprintf("\1");
	gotoxy(4,11);for(i=0; i<39; i++)cprintf("\1");
	textcolor(14);
	gotoxy(5,5);cprintf(" 1] Semester_1");
	gotoxy(5,6);cprintf(" 2] Semerter_2");
	gotoxy(5,7);cprintf(" 3] Semester_3");
	textcolor(12);
	gotoxy(5,10);cprintf(" Enter Choice :-");
	Choice= NULL;
	fflush(stdin);
	Choice=getch();
	switch(Choice)
	{
		case '1': fp1=fopen("Sem1.txt","r");
			while(fread(&Data,sizeof(Data),1,fp1)!=NULL)
			{
				Show_Data();
			}
			break;

		case '2': fp1=fopen("Sem2.txt","r");
			while(fread(&Data,sizeof(Data),1,fp1)!=NULL)
			{
				Show_Data();
			}
			break;


		case '3': fp1=fopen("Sem3.txt","r");
			while(fread(&Data,sizeof(Data),1,fp1)!=NULL)
			{
				Show_Data();
			}
			break;

		default : Error(); break;
	}
}
void Sow_All_Record()//=======================================================
	{
		window(L,T,R,B);
		textbackground(0);
		clrscr();
		window(19,7,63,19);
		textbackground(3);
		clrscr();

		window(17,6,60,18);
		textbackground(WHITE);
		clrscr();

		clrscr();
		textcolor(RED);
		gotoxy(10,2);cprintf(" WHERE TO SEE SEM DATA\n");
		textcolor(0);
		gotoxy(4,3);for(i=0; i<39; i++)cprintf("\1");
		gotoxy(4,11);for(i=0; i<39; i++)cprintf("\1");
		textcolor(14);
		gotoxy(5,5);cprintf(" 1] Semester_1");
		gotoxy(5,6);cprintf(" 2] Semerter_2");
		gotoxy(5,7);cprintf(" 3] Semester_3");
		textcolor(12);
		gotoxy(5,10);cprintf(" Enter Choice :-");
		Choice= NULL;
		fflush(stdin);
		Choice=getch();
		switch(Choice)
			{
				case '1': fp1=fopen("Sem1.txt","r");Put_Data(); getch(); break;
				case '2': fp1=fopen("Sem2.txt","r");Put_Data(); getch(); break;
				case '3': fp1=fopen("Sem3.txt","r");Put_Data(); getch(); break;
				default : Error(); break;
			 }
	 }
void Put_Data()//======================================================================
	{
		clrscr();
		window(L,T,R,B);
		textbackground(16);
		clrscr();
		k=0;
		while(fread(&Data,sizeof(Data),1,fp1)!=NULL)
			{

				textcolor(RED);
				gotoxy(33,2);cprintf("SEM_%c: ALL RECORD",Choice);
				textcolor(YELLOW);
				gotoxy(1,3);cprintf("|------------------------------------------------------------------------------|");
		if(Choice=='1')
		{
			textcolor(6);gotoxy(1,4);cprintf("ROLL  S.NAME           City     GNDR  FCO1  C_LNG  RDBMS  MATH TOTAL PER   GREAD ");
		}
		if(Choice=='2')
		{
			textcolor(6);gotoxy(1,4);cprintf("ROLL  S.NAME            City     GNDR  FCO2  CPP  WEB_D  STAT TOTAL PER   GREAD ");
		}
		if(Choice=='3')
		{
		textcolor(6);gotoxy(1,4);cprintf("ROLL  S.NAME            City     GNDR  O.P.S  D.T.F  PCPP  SAD TOTAL PER   GREAD ");
		}
				textcolor(WHITE);
				gotoxy(2,5+k);cprintf("%d",Data.Roll);
				gotoxy(7,5+k);cprintf("%s",Data.Name);
				gotoxy(25,5+k);cprintf("%s",Data.City);
				gotoxy(35,5+k);cprintf("%c",Data.Gender);
				gotoxy(40,5+k);cprintf("%d",Data.S1);
				gotoxy(46,5+k);cprintf("%d",Data.S2);
				gotoxy(53,5+k);cprintf("%d",Data.S3);
				gotoxy(59,5+k);cprintf("%d",Data.S4);
				gotoxy(64,5+k);cprintf("%d",Data.Total);
				gotoxy(70,5+k);cprintf("%0.2f",Data.Per);
				if(Data.P_F==1){
					textcolor(RED);
					gotoxy(78,5+k);cprintf("F");
				}
				else{
					textcolor(WHITE);
					gotoxy(78,5+k);cprintf("%c",Data.Gread);
				}

				k++;
			}
		fclose(fp1);
	}
	getch();
void Show_Data() //===============================================================
  {
		clrscr();
		window(1,1,80,25);
		textbackground(1);
		clrscr();
			gotoxy(1,4);textcolor(WHITE);for(i=0; i<80; i++) cprintf("_");
			gotoxy(1,6);textcolor(WHITE);for(i=0; i<80; i++) cprintf("_");
			gotoxy(1,8);textcolor(WHITE);for(i=0; i<80; i++) cprintf("_");
			gotoxy(1,10);textcolor(9);for(i=0; i<80; i++) cprintf("*");
			gotoxy(1,11);textcolor(9);for(i=0; i<80; i++) cprintf("*");
			for(i=0; i<7; i++){ gotoxy(10,4+i);textcolor(WHITE); cprintf("|");}
			gotoxy(1,5);textcolor(YELLOW);cprintf(" SEM   :");
			gotoxy(1,7);textcolor(YELLOW);cprintf(" Roll  :");
			gotoxy(1,9);textcolor(YELLOW);cprintf(" Name  :");

			gotoxy(35,5);textcolor(YELLOW);cprintf("Gender  :");
			gotoxy(35,7);textcolor(YELLOW);cprintf("City    :");
			//	for(i=0; i<2; i++){ gotoxy(56,9+i); textcolor(WHITE); cprintf("|");}
			gotoxy(60,5);cprintf("Result :");
			gotoxy(60,7);cprintf("Gread  :");
			gotoxy(44,9);textcolor(YELLOW);cprintf("Totle :");
			gotoxy(60,9);textcolor(YELLOW);cprintf("Per    :");

			//PRINTF DATA
			gotoxy(12,5);textcolor(12);cprintf("%d",Data.Sem);//SEm
			gotoxy(12,7);textcolor(12);cprintf("%d",Data.Roll);
			gotoxy(12,9);textcolor(12);cprintf("%s",Data.Name);

			if(Data.Gender=='m'||Data.Gender=='M')
			{
				gotoxy(46,5);textcolor(12);cprintf("MALE");
			}
			else if(Data.Gender=='f'||Data.Gender=='F')
			{
				gotoxy(46,5);textcolor(12);cprintf("FEMALE");
			}
			else
			{
				gotoxy(46,5);textcolor(12);cprintf("OTER");
			}
			gotoxy(46,7);textcolor(12);cprintf("%s",Data.City);

			//Result
			if(Data.P_F==0){
					gotoxy(69,5);textcolor(12);cprintf("PASS");
				}
				else
				{
					gotoxy(69,5);textcolor(12);cprintf("FAILE");
				}

			gotoxy(69,7);textcolor(12);cprintf("%c",Data.Gread);
			gotoxy(53,9);textcolor(12);cprintf("%d",Data.Total);
			gotoxy(69,9);textcolor(12);cprintf("%0.2f",Data.Per);



		window(1,2,80,3);
		textbackground(5);
		clrscr();
		textcolor(WHITE);
		gotoxy(33,1);cprintf("B.C.A");
		gotoxy(31,2);cprintf("MARKSHEET");

		window(1,12,80,13);
		textbackground(GREEN);
		clrscr();
			gotoxy(1,1);textcolor(RED);cprintf("________________________________________________________________________________");
			gotoxy(2,2);textcolor(BLACK);cprintf("SUBJECTS_NAME         TOTAL_MARK:    PASSING_MARK:  MAKR_OBTAINED: PASS_&_FAILE");
			textcolor(10);
			for(i=0; i<2; i++)
				{
					gotoxy(23,1+i);cprintf("|");
					gotoxy(38,1+i);cprintf("|");
					gotoxy(53,1+i);cprintf("|");
					gotoxy(68,1+i);cprintf("|");
				}
				window(1,14,80,25);
		textbackground(3);
		clrscr();
			textcolor(12);
			gotoxy(60,2);cprintf("%d",Data.S1);
			gotoxy(60,4);cprintf("%d",Data.S2);
			gotoxy(60,6);cprintf("%d",Data.S3);
			gotoxy(60,8);cprintf("%d",Data.S4);
			gotoxy(60,10);cprintf("%d",Data.Total);
			textcolor(10);
			for(i=0; i<12; i++)
				{
					gotoxy(23,1+i);cprintf("|");
					gotoxy(38,1+i);cprintf("|");
					gotoxy(53,1+i);cprintf("|");
					gotoxy(68,1+i);cprintf("|");
				}
			gotoxy(1,1);cprintf("______________________|______________|______________|______________|____________");
			gotoxy(1,3);cprintf("______________________|______________|______________|______________|____________");
			gotoxy(1,5);cprintf("______________________|______________|______________|______________|____________");
			gotoxy(1,7);cprintf("______________________|______________|______________|______________|____________");
			gotoxy(1,9);cprintf("______________________|______________|______________|______________|____________");
		  gotoxy(1,11);cprintf("______________________|______________|______________|______________|____________");
			textcolor(1);
			gotoxy(2,2);cprintf("Fundamental of Com O");
			gotoxy(2,4);cprintf("Introdution To Pro C");
			gotoxy(3,6);cprintf("R.D.B.M.S-I");
			gotoxy(2,8);cprintf("Mathematics    ");
			gotoxy(2,10);cprintf("Total  ");

			gotoxy(26,2);cprintf("100");
			gotoxy(26,4);cprintf("100");
			gotoxy(26,6);cprintf("100");
			gotoxy(26,8);cprintf("100");
			gotoxy(26,10);cprintf("400");

			gotoxy(45,2);cprintf("30");
			gotoxy(45,4);cprintf("30");
			gotoxy(45,6);cprintf("30");
			gotoxy(45,8);cprintf("30");
			gotoxy(45,10);cprintf("120");



			//Pass Or Faile
			textcolor(4);
			if(30<Data.S1){
				gotoxy(73,2);cprintf("PASS");}
			else{
				gotoxy(73,2);cprintf("Faile"); }
			if(30<Data.S2){
				gotoxy(73,4);cprintf("Pass");}
			else{
				gotoxy(73,4);cprintf("Faile"); }

			if(30<Data.S3){
				gotoxy(73,6);cprintf("Pass");}
			else{
				gotoxy(73,6);cprintf("Faile"); }

			if(30<Data.S4){
				gotoxy(73,8);cprintf("Pass");}
			else{
				gotoxy(73,8);cprintf("Faile"); }
		  getch();
  }
void Sersch_Record()
{
	Sersch();
	if(Flag!=0)
	{
		Show_Data();
	}

}
void Sersch()//==========================-=-=-==-=-=-=--==--=-=-=-=--=======---------=====--------=====--==--============--============--
{
	Flag=0;
	window(L,T,R,B);
	textbackground(BLACK);
	textcolor(BLACK);
	clrscr();
	window(19,8,63,18);
	textbackground(11);
	clrscr();
	window(17,7,60,17);
	textbackground(WHITE);
	clrscr();
	textcolor(12);gotoxy(9,2); cprintf("YOU WANT TO SEARCH RECORD");
	textcolor(0);gotoxy(2,3);
	for(i=0; i<42; i++)cprintf("\5");
	gotoxy(2,8);
	for(i=0; i<42; i++)cprintf("\3");
	textcolor(0);
	gotoxy(1,4);cprintf("\n Enter Sem     :- ");
	scanf("%d",&T_Sem);
	gotoxy(1,5);cprintf("\n Enter Roll NO :-");
	scanf("%d",&T_Roll);
	switch(T_Sem)
		{
			//  OPEN FILE IN SERASE
			case 1 : fp1=fopen("Sem1.txt","r+b");break;
			case 2 : fp1=fopen("Sem2.txt","r+b");break;
			case 3 : fp1=fopen("Sem3.txt","r+b");break;
		}

	while(fread(&Data,sizeof(Data),1,fp1)!=NULL)
		{
			Flag=0;
			if(Data.Roll==T_Roll)
				{
					Flag=1;
					textcolor(YELLOW+BLINK);
					gotoxy(4,9); cprintf("Record Is Found");
					textcolor(RED);
					gotoxy(6,10); cprintf("Press Any Key For See Marksheet");
					getch();
					break;
				}
		}

	if(Flag==0)
		{
			textcolor(RED+BLINK);
			gotoxy(4,9); cprintf("Record Is Not Found");
			textcolor(YELLOW);
			gotoxy(6,10); cprintf("Press Any Key For Manu........");
			getch();
		}
}
void Update_Record()
{
	int Cursor_Position;
	Sersch();
	if(Flag!=0)
	{
		window(L,T,R,B);
		textbackground(0);
		clrscr();

		window(3,3,78,24);
		textbackground(3);
		clrscr();

		window(2,2,76,23);
		textbackground(WHITE);
		clrscr();
		textcolor(15);textbackground(0);gotoxy(2,4); cprintf("Enter Following Information Of The Student Whose Data You Want To Update");
		window(6,9,41,23);
		textbackground(2);
		clrscr();
		window(5,7,40,22);
		textbackground(0);
		clrscr();

		textcolor(WHITE);
		gotoxy(3,4);cprintf("Semester:-%d",Data.Roll);
		gotoxy(3,5);cprintf("Roll No :-%d",Data.Roll);
		gotoxy(3,6);cprintf("Name    :- %s",Data.Name);
		gotoxy(3,7);cprintf("City    :- %s",Data.City);
		gotoxy(3,8);cprintf("Gender  :-%c",Data.Gender);
		gotoxy(3,13);cprintf("Total   :-%d",Data.Total);
		gotoxy(3,14);cprintf("Per     :-%0.2f",Data.Per);
		gotoxy(3,15);cprintf("Gread   :- %c",Data.Gread);

		if(T_Sem==1)
			{
				gotoxy(3,9);cprintf("FCO      :-%d",Data.S1);
				gotoxy(3,10);cprintf("C Lng   :-%d",Data.S2);
				gotoxy(3,11);cprintf("RDBMS-I :-%d",Data.S3);
				gotoxy(3,12);cprintf("Math    :-%d",Data.S4);

			}
		if(T_Sem==2)
			{
				gotoxy(3,9);cprintf("FCO2 	   :-%d",Data.S1);
				gotoxy(3,10);cprintf("ADV_C   :-%d",Data.S2);
				gotoxy(3,11);cprintf("WEB_D   :-%d",Data.S3);
				gotoxy(3,12);cprintf("STAT    :-%d",Data.S4);

			}
		if(T_Sem==3)
			{
				gotoxy(3,9);cprintf("O.P.S   :-%d",Data.S1);
				gotoxy(3,10);cprintf("D.T.F  :-%d",Data.S2);
				gotoxy(3,11);cprintf("PCPP	  :-%d",Data.S3);
				gotoxy(3,12);cprintf("SAD	  :-%d",Data.S4);
			}
	}
	if(Flag!=0)
	{
		window(45,8,75,20);
		textbackground(4);
		clrscr();
		window(44,7,74,19);
		textbackground(0);
		clrscr();
		textcolor(RED+BLINK);
		gotoxy(8,2); cprintf("Are You Shoure ?");
		textcolor(CYAN);
		gotoxy(5,3);  cprintf("Do You Want To Update");
		gotoxy(10,4); cprintf("This Record");
		textcolor(YELLOW);
		gotoxy(2,6); cprintf("1) Yes    2) No   3) Go Back");
		textcolor(RED);
		gotoxy(3,8); cprintf("Enter Your Choice:- ");
		Choice = getch();
		switch(Choice)
		{
			case '1':
				Cursor_Position=ftell(fp1);
				fseek(fp1,Cursor_Position-sizeof(Data),SEEK_SET);
				New_MarkSheet();  //call new marsheet
				fwrite(&Data,sizeof(Data),1,fp1);
				fclose(fp1);   //The Close File Open In Seace
				textcolor(LIGHTBLUE+BLINK);
				gotoxy(30,17); cprintf("Successfully Updated");
				textcolor(YELLOW);
				gotoxy(29,19); cprintf(".....Press Any Key.....");
				getch();
				Flag=0;
				break;
			case '2':
				textcolor(WHITE+BLINK);
				gotoxy(11,13);  cprintf("Not Updated");
				textcolor(YELLOW);
				gotoxy(5,15); cprintf(".....Press Any Key.....");
				getch();
				Flag=0;
				break;
			case '3': Update_Record();
			default : Error();
		}
	}
}
void Delete()
{
	clrscr();
	printf("\n\t\t\t DELETE OPRATION\n");
	printf("\n\t\tWhose Data You Want To Delete\n");
	printf("\n   #] Goto Manu...");
	printf("\nEnter Sem     :-");
	scanf("%d",&T_Sem);
	if(T_Sem == '#')
	{
		main();
	}
	printf("Enter Roll No :-");
	scanf("%d",&T_Roll);
	switch(T_Sem)
		{
			case 1: fp1=fopen("Sem1.txt","rb"); break;
			case 2: fp1=fopen("Sem2.txt","rb"); break;
			case 3: fp1=fopen("Sem3.txt","rb"); break;
		}

	while(fread(&Data,sizeof(Data),1,fp1)!=NULL)
		{
			Flag=0;
			if(Data.Roll==T_Roll)
				{
					Flag=1;
					break;
				}
		}

	if(Flag==0)
		{
			printf(" \n\n \tRecord Is Not Found");
			getch();
		}
	else
		{
			textcolor(WHITE);
			clrscr();
			printf("\n\t\t DELETE DATA \n");
			printf("\n Semester:-%d",Data.Sem);
			printf("\n Roll No :-%d",Data.Roll);
			printf("\n Name    :- %s",Data.Name);
			printf("\n City    :- %s",Data.City);
			printf("\n Gender  :-%c",Data.Gender);
			printf("\n Total   :-%d",Data.Total);
			printf("\n Per     :-%0.2f",Data.Per);
			printf("\n Gread   :- %c",Data.Gread);
			if(T_Sem==1)
			{
				printf("\n FCO     :-%d",Data.S1);
				printf("\n C Lng   :-%d",Data.S2);
				printf("\n RDBMS-I :-%d",Data.S3);
				printf("\n Math    :-%d",Data.S4);
			}
			if(T_Sem==2)
			{
				printf("\n FCO2 	   :-%d",Data.S1);
				printf("\n ADV_C   :-%d",Data.S2);
				printf("\n WEB_D   :-%d",Data.S3);
				printf("\n STAT    :-%d",Data.S4);
			}
			if(T_Sem==3)
			{
				printf("\n O.P.S   :-%d",Data.S1);
				printf("\n D.T.F  :-%d",Data.S2);
				printf("\n PCPP	  :-%d",Data.S3);
				printf("\n SAD	  :-%d",Data.S4);
			}
			printf("\n\n\t Press Any Key...");
			getch();
			clrscr();
			printf("\nAre You Shoure ?,Do You Want To Delete Record  Permanently");
			printf("\n1] Yes    2] No   3] Go Back");
			printf("\n\n Enter Your Choice:- ");
			Choice=getch();
			switch(Choice)
				{
					case '1':
							rewind(fp1); // Set The Cursor At Starting Of The File
							fp2=fopen("Temp.txt","wb");

							while(fread(&Data,sizeof(Data),1,fp1)!=NULL)
								{
									if(Data.Roll!=T_Roll)
										{
											fwrite(&Data,sizeof(Data),1,fp2);
										}
								}

							fclose(fp1);
							fclose(fp2);

							switch(T_Sem)
								{
									case 1: remove("Sem1.txt"); rename("Temp.txt","Sem1.txt"); break;
									case 2: remove("Sem2.txt"); rename("Temp.txt","Sem2.txt"); break;
									case 3: remove("Sem3.txt"); rename("Temp.txt","Sem3.txt"); break;
								}
								printf("\n Successfully Deleted");
							Flag=0;
							getch();
							break;

					case '2':
							printf("Not Deleted");
							Flag=0;
					break;

					case '3': Flag=0; break;

					default : printf("\n\n Invalid Coise");getch();
				}
		}
}
