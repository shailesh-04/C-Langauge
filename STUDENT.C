/*
|----------------------------------------------------------------------------|
					  |                                             |
					  |	 Project Name   :- BCA Student Marksheet  |
					  |	 Developer Name :- Shiyal Pradip          |
					  |	 Starting Data  :- 5  Augyst 2022         |
					  |	 Ending Data    :- 14 August 2022         |
					  |    Last Updated   :- 4  October 2022			|
					  |    Version        :- 3.6.9					  	|                                             
					  |    													  	|
					  |---------------------------------------------|

	  |----------------------------: Rights :-----------------------------|
	  |                                                                   |
	  |			   Administrator                      User                |
	  |  |--------------------------|    |---------------------------|    |
	  |  |	 1) Add New Marksheet  |    |		1) Add New Marksheet   |    |
	  |  |    2) Search Marksheet   |    |    2) Search Marksheet    |    |
	  |  |  	 3) Delete Marksheet   |    |    3) Update Marksheet    |    |
	  |  |	 4) Update Marksheet   |    |    4) Go To Log In Page   |    |
	  |  |	 5) Account Settings	  |    |    5) See All Records     |    |
	  |  |	 6) Go To LogIn Page	  |    |    6) See Marksheets		  |    |
	  |  |	 7) See All Records	  |    |    7) Exit                |    |
	  |  |	 8) See Marksheets	  |    |---------------------------|	 |
	  |  |	 9) Exit               |                                     |
	  |  |--------------------------|                                     |
	  |                                                                   |
	  |-------------------------------------------------------------------|

|----------------------------------------------------------------------------|
*/

#include<graphics.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#define Enter 13
#include<dos.h>

#include"Function.h"
#include"Variable.h"
#include"Log_In.h"
#include"Sheet.h"
#include"User.h"
#include"Account.h"

void main()
{
	Information_Page();
}

void Administrator()
{
	Background();

	window(17,7,65,19);
	textbackground(BLUE);
	clrscr();

	window(19,8,63,18);
	textbackground(BLACK);
	clrscr();

	textcolor(YELLOW);
	gotoxy(17,2); cprintf("Administrator");

	textcolor(LIGHTGREEN);
	gotoxy(4,2);  cprintf("<----------:");
	gotoxy(31,2); cprintf(":---------->");

	fflush(stdin);
	textcolor(LIGHTRED);
	gotoxy(6,4);  cprintf("Enter User Name :- ");
	gotoxy(6,5);  cprintf("Enter Password  :- ");
	gotoxy(25,4); gets(UserName); // Enter Correct Username
	gotoxy(25,5);

	// Enter Correct Password
	for(j=0; j!='13'; j++)  // 13 Is a ASCII Code Of ENTER Key
		{
			fflush(stdin);
			Password[j]=getch();

			if(Password[j]==Enter)
				{
					Password[j]=NULL;
					break;
				}
			printf("*");
		}

	fp=fopen("Admin_U.dat","rb");
	fgets(Temp_UserName,45,fp); // Taking The Correct Username From File
	fclose(fp);

	fp=fopen("Admin_P.dat","rb");
	fgets(Temp_Password,45,fp); // Taking The Correct Password From File
	fclose(fp);

	// Checking If Username And Password Are Correct Or Not
	if(strcmp(UserName,Temp_UserName)==0 && strcmp(Password,Temp_Password)==0)
		{
		  //This Function Will Be Called When UserName And Password Are Correct
			Admin=1; //It's Means Admin Log In
			textcolor(LIGHTCYAN);
			gotoxy(6,8); cprintf("Sign in......");

			textcolor(RED);
			gotoxy(8,9); for(i=0; i<32; i++) cprintf("%c",220);

			textcolor(YELLOW);
			gotoxy(8,9);
			for(i=0; i<32; i++)
				{
					cprintf("%c",220);
					delay(130);
				}
			Main_Menu();
		}
	else
		{
		 //This Function Will Be Called When UserName And Password Are Not Correct
			if_Condition_False();
		}
}

void Main_Menu()
{
	Background();

	window(21,5,59,21);
	textbackground(LIGHTGREEN);
	clrscr();

	window(23,6,57,20);
	textbackground(BLACK);
	clrscr();

	textcolor(YELLOW);
	gotoxy(15,2); cprintf("Main Menu");

	textcolor(LIGHTRED);
	gotoxy(3,3);  for(i=0; i<31; i++) cprintf("-");
	gotoxy(3,13); for(i=0; i<31; i++) cprintf("-");

	textcolor(WHITE);
	gotoxy(8,4);  cprintf("(1)  Add New Marksheet");
	gotoxy(8,5);  cprintf("(2)  Search Marksheet");
	gotoxy(8,6);  cprintf("(3)  Delete Marksheet");
	gotoxy(8,7);  cprintf("(4)  Update Marksheet");
	gotoxy(8,8);  cprintf("(5)  Account Settings");
	gotoxy(8,9);  cprintf("(6)  Go To LogIn Page");
	gotoxy(8,10); cprintf("(7)  See All Records");
	gotoxy(8,11); cprintf("(8)  See Marksheets");
	gotoxy(8,12); cprintf("(9)  Exit");

	fflush(stdin);
	textcolor(LIGHTCYAN);
	gotoxy(9,14); cprintf("Enter Your Choice ? ");
	Choice=getch(); // Geting Choice From User

	switch(Choice)
		{
			case '1': New_Marksheet();
						 More_Choice();
			break;
			case '2': See_Now(); 		    break;
			case '3': Delete();  		    break;
			case '4': Update();			    break;
			case '5': Set_Admin_Account(); break;
			case '6': Admin=0; // It's Means Admin Log Out
						 Log_In_Page();
			break;
			case '7': Admin=1;
						 All_Records();
			break;
			case '8': See_Marksheets();
			case '9': Admin=0;
						 Information_Page();
			break;
			default : Error_Window();
						 Main_Menu();
		}
}

//This Function Will Be Called When The User Enters An Invalid Choice
void Error_Window()
{
	Background();
	window(22,8,59,18);
	textbackground(YELLOW);
	clrscr();

	window(24,9,57,17);
	textbackground(BLACK);
	clrscr();

	textcolor(YELLOW);
	gotoxy(12,2); cprintf("Error Occured");

	textcolor(LIGHTMAGENTA);
	gotoxy(2,2);  cprintf("<-------:");
	gotoxy(26,2); cprintf(":------>");

	textcolor(LIGHTRED+BLINK);
	gotoxy(11,5); cprintf("Invalid Choice");

	textcolor(WHITE);
	gotoxy(7,8); cprintf(".....Press Any Key.....");
 getch();
}

void New_Marksheet()
{
	Label:
	Background();
	window(3,2,78,24);
	textbackground(BLACK);
	clrscr();

	fflush(stdin);
	textcolor(LIGHTGREEN);
	gotoxy(16,2); cprintf("-------------:");
	gotoxy(50,2); cprintf(":-------------");

	textcolor(LIGHTRED);
	gotoxy(31,2); cprintf("Enter Student Data");

	textcolor(WHITE);
	gotoxy(3,4); cprintf("Enter Student Roll NO   :- ");
	scanf("%d",&Data.Roll_No); // Geting Roll No

	gotoxy(3,5); cprintf("Enter Sem Number        :- ");
	scanf("%d",&Data.Sem);// Geting Semester

	/*
		This Condition Will Be True When The User Enters Semester
		Values Other Than 1, 2, Or 3.
	*/
	if(Data.Sem<=0 || Data.Sem>=4)
		{
			textcolor(YELLOW+BLINK);
			gotoxy(10,13); cprintf("You Will Not Be Able To Insert The Data Of Sem %d At Present",Data.Sem);
			textcolor(RED);
			gotoxy(26,16); cprintf(".......Press Any Key.......");
			getch();

			//Resetting The Value Of Semester For Remove Garbage Value
			Data.Sem=0;
			goto Label;
		}

	fflush(stdin);
	gotoxy(3,6); cprintf("Enter Student Full Name :- ");
	gets(Data.Name); // Geting Student Name

	gotoxy(3,7); cprintf("Enter Set_No            :- ");
	scanf("%ld",&Data.Set_No); // Geting Student Seat No

	// This Condition Will Be True Only When The User Enters Sem "1".
	if(Data.Sem==1)
		{
			gotoxy(3,9); cprintf("Enter C language Mark   :- ");
			scanf("%d",&Data.S1);
			gotoxy(3,10); cprintf("Enter Math Mark         :- ");
			scanf("%d",&Data.S2);
			gotoxy(3,11); cprintf("Enter RDBMS Mark        :- ");
			scanf("%d",&Data.S3);
			gotoxy(3,12); cprintf("Enter Compter Orga.Mark :- ");
			scanf("%d",&Data.S4);
		}

	// This Condition Will Be True Only When The User Enters Sem "2".
	else if(Data.Sem==2)
		{
			gotoxy(3,9); cprintf("Enter C language mark             :- ");
			scanf("%d",&Data.S1);
			gotoxy(3,10); cprintf("Enter Statistics Mark             :- ");
			scanf("%d",&Data.S2);
			gotoxy(3,11); cprintf("Enter Web Designing Mark          :- ");
			scanf("%d",&Data.S3);
			gotoxy(3,12); cprintf("Enter Advance Computer Orga. Mark :- ");
			scanf("%d",&Data.S4);
		}
	// This Condition Will Be True Only When The User Enters Sem "2".
	else if(Data.Sem==3)
		{
			gotoxy(3,9); cprintf("Enter C++ Mark :- ");
			scanf("%d",&Data.S1);
			gotoxy(3,10); cprintf("Enter SAD Mark :- ");
			scanf("%d",&Data.S2);
			gotoxy(3,11); cprintf("Enter DFS Mark :- ");
			scanf("%d",&Data.S3);
			gotoxy(3,12); cprintf("Enter OS Mark  :- ");
			scanf("%d",&Data.S4);
		}

	// Calculating Sum Of Marks
	Data.Sum = Data.S1 + Data.S2 + Data.S3 + Data.S4;

	// Calculating Persantage
	Data.Per = ( Data.Sum * 100.0 ) / 400;
}

void More_Choice()
{
	Background();
	window(26,8,57,18);
	textbackground(BLUE);
	clrscr();

	window(28,9,55,17);
	textbackground(BLACK);
	clrscr();

	textcolor(YELLOW);
	gotoxy(12,2); cprintf("Choices");

	textcolor(WHITE);
	gotoxy(3,3); for(i=0; i<24; i++) cprintf("-");
	gotoxy(3,7); for(i=0; i<24; i++) cprintf("-");

	textcolor(LIGHTRED);
	gotoxy(7,4);  cprintf("(1)  See Marksheet");
	gotoxy(7,5);  cprintf("(2)  Save Data");
	gotoxy(7,6);  cprintf("(3)  Go Back");

	fflush(stdin);
	textcolor(LIGHTCYAN);
	gotoxy(6,8); cprintf("Enter Your Choice ? ");
	Choice=getch();

	switch(Choice)
		{
			case '1': Marksheet(); More_Choice();      break;
			case '2': Save_Data(); 							 break;
			case '3': Admin==1 ? Main_Menu() : User(); break;
			default: Error_Window(); More_Choice();
		}
}

void Save_Data()
{
	Background();
	window(26,8,57,18);
	textbackground(LIGHTGREEN);
	clrscr();

	window(28,9,55,17);
	textbackground(BLACK);
	clrscr();

	textcolor(YELLOW);
	gotoxy(11,2); cprintf("Save Data");

	textcolor(LIGHTRED);
	gotoxy(3,3); for(i=0; i<24; i++) cprintf("-");
	gotoxy(3,7); for(i=0; i<24; i++) cprintf("-");

	textcolor(LIGHTCYAN);
	gotoxy(6,4); cprintf("(1) Yes, Save Data");
	gotoxy(6,5); cprintf("(2) No, Don't Save");
	gotoxy(6,6); cprintf("(3) Go Back");

	textcolor(WHITE);
	gotoxy(6,8); cprintf("Enter Your Choice ? ");
	Choice=getch();

	switch(Choice)
		{
			case '1':
					/* As Per The Semester Which Has Already Been Entered,
						The Data Is Being Saved In The File. */
					switch(Data.Sem)
						{
							case 1:
								fp=fopen("Sem1.txt","ab");
								fwrite(&Data,sizeof(Data),1,fp);
								fclose(fp);
							break;

							case 2:
								fp=fopen("Sem2.txt","ab");
								fwrite(&Data,sizeof(Data),1,fp);
								fclose(fp);
							break;

							case 3:
								fp=fopen("Sem3.txt","ab");
								fwrite(&Data,sizeof(Data),1,fp);
								fclose(fp);
							break;
						}

					Background();
					window(25,7,60,19);
					textbackground(LIGHTGREEN);
					clrscr();

					window(27,8,58,18);
					textbackground(BLACK);
					clrscr();

					textcolor(YELLOW);
					gotoxy(12,2); cprintf("Data Status");

					textcolor(LIGHTRED);
					gotoxy(3,3); for(i=0; i<28; i++) cprintf("-");
					gotoxy(3,10); for(i=0; i<28; i++) cprintf("-");

					textcolor(LIGHTMAGENTA+BLINK);
					gotoxy(4,5); cprintf("Data Is Successfuly Saved");

					textcolor(WHITE);
					gotoxy(6,8); cprintf(".....Press Any Key.....");
			break;

			case '2':
					Background();
					window(25,7,60,19);
					textbackground(RED);
					clrscr();

					window(27,8,58,18);
					textbackground(BLACK);
					clrscr();

					textcolor(YELLOW);
					gotoxy(12,2); cprintf("Data Status");

					textcolor(LIGHTRED);
					gotoxy(3,3); for(i=0; i<28; i++) cprintf("-");
					gotoxy(3,10); for(i=0; i<28; i++) cprintf("-");

					textcolor(LIGHTMAGENTA+BLINK);
					gotoxy(9,5); cprintf("Data Is Not Saved");

					textcolor(WHITE);
					gotoxy(6,8); cprintf(".....Press Any Key.....");
			break;

			case '3': More_Choice(); break;

			default: Error_Window();
						More_Choice();
		}
 getch();

	Admin==1 ? Main_Menu() : User();
}

void All_Records()
{
	Background();
	window(25,7,58,18);
	textbackground(BLUE);
	clrscr();

	window(27,8,56,17);
	textbackground(BLACK);
	clrscr();

	textcolor(YELLOW);
	gotoxy(9,2); cprintf("Select Semester");

	textcolor(LIGHTGREEN);
	gotoxy(3,3); for(i=0; i<26; i++) cprintf("-");
	gotoxy(3,8); for(i=0; i<26; i++) cprintf("-");

	textcolor(WHITE);
	gotoxy(7,4); cprintf("(1)  Semester:- 1");
	gotoxy(7,5); cprintf("(2)  Semester:- 2");
	gotoxy(7,6); cprintf("(3)  Semester:- 3");
	gotoxy(7,7); cprintf("(4)  Go Back");

	textcolor(LIGHTCYAN);
	gotoxy(7,9); cprintf("Enter Your Choice ? ");
	Choice=getch(); // Geting Semester

	window(1,1,80,25);
	textbackground(BLACK);
	clrscr();

	switch(Choice)
		{
			//All The Data Of Semester 1 Is Showing
			case '1':	textcolor(LIGHTGREEN);
							gotoxy(12,1); cprintf("-----------------:");
							gotoxy(53,1); cprintf(":-----------------");

							textcolor(LIGHTRED);
							gotoxy(31,1); cprintf("Sem 1 Student Records");

							textcolor(YELLOW);
							gotoxy(1,3); cprintf("No  Name             Seat No  C Lang    Math   RDBMS    CO    Total     Per    ");

							// Opening The DataBase Of Semester 1
							fp=fopen("Sem1.txt","rb");

							Reading_Data();
			break;

			//All The Data Of Semester 2 Is Showing
			case '2': 	textcolor(LIGHTGREEN);
							gotoxy(12,1); cprintf("-----------------:");
							gotoxy(53,1); cprintf(":-----------------");

							textcolor(LIGHTRED);
							gotoxy(31,1); cprintf("Sem 2 Student Records");

							textcolor(YELLOW);
							gotoxy(1,3); cprintf("No  Name             Seat No  C Lang  Stati  WebDesi  AdvaCO  Total    Per");

							// Opening The DataBase Of Semester 2
							fp=fopen("Sem2.txt","rb");

							Reading_Data();
			break;

			//All The Data Of Semester 3 Is Showing
			case '3': 	textcolor(LIGHTGREEN);
							gotoxy(12,1); cprintf("-----------------:");
							gotoxy(53,1); cprintf(":-----------------");

							textcolor(LIGHTRED);
							gotoxy(31,1); cprintf("Sem 3 Student Records");

							textcolor(YELLOW);
							gotoxy(1,3); cprintf("No  Name             Seat No  C++       SAD    DFS      OS    Total      Per");

							// Opening The DataBase Of Semester 3
							fp=fopen("Sem3.txt","rb");

							Reading_Data();
			break;
			case '4': 		Admin==1 ? Main_Menu() : User();	break;
			default : 	Error_Window();
							All_Records();
		}
 getch();
 All_Records();
}

// Taking Data From File
void Reading_Data()
{
	k=1;
	window(1,4,80,25);
	textbackground(BLACK);
	clrscr();

	while(fread(&Data,sizeof(Data),1,fp)!=NULL)
		{
			Get_Data();
			k++;
		}
	fclose(fp);
}

//Storing The Data Taken From The File In Different Variables
void Get_Data()
{
	textcolor(WHITE);
	gotoxy(1,k);  cprintf("%d",Data.Roll_No);
	gotoxy(5,k);  cprintf("%s",Data.Name);
	gotoxy(22,k); cprintf("%ld",Data.Set_No);
	gotoxy(31,k); cprintf("%d",Data.S1);
	gotoxy(41,k); cprintf("%d",Data.S2);
	gotoxy(48,k); cprintf("%d",Data.S3);
	gotoxy(57,k); cprintf("%d",Data.S4);
	gotoxy(63,k); cprintf("%d",Data.Sum);
	gotoxy(71,k); cprintf("%f",Data.Per);
}

/* Semester Which Will Be Entered Will Be Displayed All The Semester
	Marksheet One By One */
void See_Marksheets()
{
	Background();
	window(25,7,58,18);
	textbackground(BLUE);
	clrscr();

	window(27,8,56,17);
	textbackground(BLACK);
	clrscr();

	textcolor(YELLOW);
	gotoxy(9,2); cprintf("Select Semester");

	textcolor(LIGHTGREEN);
	gotoxy(3,3); for(i=0; i<26; i++) cprintf("-");
	gotoxy(3,8); for(i=0; i<26; i++) cprintf("-");

	textcolor(WHITE);
	gotoxy(7,4); cprintf("(1)  Semester:- 1");
	gotoxy(7,5); cprintf("(2)  Semester:- 2");
	gotoxy(7,6); cprintf("(3)  Semester:- 3");
	gotoxy(7,7); cprintf("(4)  Go Back");

	textcolor(LIGHTCYAN);
	gotoxy(7,9); cprintf("Enter Your Choice ? ");
	Choice=getch();

	switch(Choice)
		{
			case '1': fp=fopen("Sem1.txt","rb"); Put_Marksheet(); break;
			case '2': fp=fopen("Sem2.txt","rb"); Put_Marksheet(); break;
			case '3': fp=fopen("Sem3.txt","rb"); Put_Marksheet(); break;
			case '4': Admin==1 ? Main_Menu() : User(); break;
			default : Error_Window();
						 See_Marksheets();
		}
	See_Marksheets();
}

void Put_Marksheet()
{
	while(fread(&Data,sizeof(Data),1,fp)!=NULL)
		{
			cprintf("%d",Data.Roll_No);
			cprintf("%s",Data.Name);
			cprintf("%ld",Data.Set_No);
			cprintf("%d",Data.S1);
			cprintf("%d",Data.S2);
			cprintf("%d",Data.S3);
			cprintf("%d",Data.S4);
			cprintf("%d",Data.Sum);
			cprintf("%f",Data.Per);

			Marksheet();
		}
	fclose(fp);
}

void See_Now()
{
	Background();
	window(3,2,78,24);
	textbackground(BLACK);
	clrscr();

	textcolor(LIGHTRED);
	gotoxy(4,3); cprintf("Enter Following Information Of The Student Whose Data You Want To View");

	textcolor(LIGHTGREEN);
	gotoxy(2,4); for(i=0; i<74; i++) cprintf("-");

	textcolor(YELLOW);
	gotoxy(5,6); cprintf("Enter Roll No :-");
	gotoxy(5,7); cprintf("Enter Sem     :-");

	gotoxy(22,6); scanf("%d",&Temp_Roll_No);
	gotoxy(22,7); scanf("%d",&Temp_Sem);

	switch(Temp_Sem)
		{
			case 1: fp=fopen("Sem1.txt","rb"); break;
			case 2: fp=fopen("Sem2.txt","rb"); break;
			case 3: fp=fopen("Sem3.txt","rb"); break;
		}

	while(fread(&Data,sizeof(Data),1,fp)!=NULL)
		{
			Flag=0;
			if(Data.Roll_No==Temp_Roll_No)
				{
					Flag=1;
					textcolor(YELLOW+BLINK);
					gotoxy(32,13); cprintf("Record Is Found");

					textcolor(RED);
					gotoxy(24,15); cprintf("Press Any Key For See Marksheet");
					getch();

					Marksheet();
					break;
				}
		}

	if(Flag==0)
		{
			textcolor(YELLOW+BLINK);
			gotoxy(29,13); cprintf("Record Is Not Found");
			getch();
		}
	Flag=0;
	Admin==1 ? Main_Menu() : User();
}

void Update()
{
	int Cursor_Position;

	Background();
	window(3,2,78,24);
	textbackground(BLACK);
	clrscr();

	textcolor(LIGHTRED);
	gotoxy(2,3); cprintf("Enter Following Information Of The Student Whose Data You Want To Update");

	textcolor(LIGHTGREEN);
	gotoxy(2,4); for(i=0; i<74; i++) cprintf("-");

	textcolor(YELLOW);
	gotoxy(5,6); cprintf("Enter Roll No :-");
	gotoxy(5,7); cprintf("Enter Sem     :-");

	gotoxy(22,6); scanf("%d",&Temp_Roll_No);
	gotoxy(22,7); scanf("%d",&Temp_Sem);

	switch(Temp_Sem)
		{
			case 1 : fp=fopen("Sem1.txt","r+b"); break;
			case 2 : fp=fopen("Sem2.txt","r+b"); break;
			case 3 : fp=fopen("Sem3.txt","r+b"); break;
		}

	while(fread(&Data,sizeof(Data),1,fp)!=NULL)
		{
			Flag=0;
			if(Data.Roll_No==Temp_Roll_No)
				{
					Flag=1;
					window(5,10,40,23);
					textbackground(BLUE);
					clrscr();

					window(7,11,38,22);
					textbackground(BLACK);
					clrscr();

					Put_Data();
					break;
				}
		}

	if(Flag==0)
		{
			textcolor(YELLOW+BLINK);
			gotoxy(29,13); cprintf("Record Is Not Found");
			getch();

			Admin==1 ? Main_Menu() : User();
		}
	else
		{
			Label1:
			window(43,6,77,23);
			textbackground(RED);
			clrscr();

			window(45,7,75,22);
			textbackground(BLACK);
			clrscr();

			textcolor(YELLOW);
			gotoxy(13,2); cprintf("Choice");

			textcolor(LIGHTGREEN);
			gotoxy(2,3);  for(i=0; i<28; i++) cprintf("-");

			textcolor(LIGHTRED+BLINK);
			gotoxy(8,4); cprintf("Are You Shoure ?");

			textcolor(WHITE);
			gotoxy(5,5);  cprintf("Do You Want To Update");
			gotoxy(10,6); cprintf("This Record");

			textcolor(YELLOW);
			gotoxy(2,9); cprintf("1) Yes    2) No   3) Go Back");

			textcolor(LIGHTRED);
			gotoxy(8,11); cprintf("Enter Your Choice:- ");
			Choice=getch();

			switch(Choice)
				{
					case '1':
							Cursor_Position=ftell(fp);
							fseek(fp,Cursor_Position-sizeof(Data),SEEK_SET);

							New_Marksheet();

							if(Temp_Sem==Data.Sem)
								{
									fwrite(&Data,sizeof(Data),1,fp);
									fclose(fp);
								}

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

					case '3': Admin==1 ? Main_Menu() : User();
					default : goto Label1;
				}
		}
	Flag=0;
	Admin==1 ? Main_Menu() : User();
}

void Delete()
{
	Background();
	window(3,2,78,24);
	textbackground(BLACK);
	clrscr();

	textcolor(LIGHTRED);
	gotoxy(3,2); cprintf("Enter Following Information Of The Student Whose Data You Want To Delete\n");

	textcolor(LIGHTGREEN);
	gotoxy(2,3); for(i=0; i<74; i++) cprintf("-");

	textcolor(YELLOW);
	gotoxy(5,4);  cprintf("Enter Roll No :-");
	gotoxy(5,5);  cprintf("Enter Sem     :-");
	gotoxy(22,4); scanf("%d",&Temp_Roll_No);
	gotoxy(22,5); scanf("%d",&Temp_Sem);

	switch(Temp_Sem)
		{
			case 1: fp=fopen("Sem1.txt","rb"); break;
			case 2: fp=fopen("Sem2.txt","rb"); break;
			case 3: fp=fopen("Sem3.txt","rb"); break;
		}

	while(fread(&Data,sizeof(Data),1,fp)!=NULL)
		{
			Flag=0;
			if(Data.Roll_No==Temp_Roll_No)
				{
					Flag=1;
					window(5,10,40,23);
					textbackground(BLUE);
					clrscr();

					window(7,11,38,22);
					textbackground(BLACK);
					clrscr();

					Put_Data();
					break;
				}
		}

	if(Flag==0)
		{
			textcolor(YELLOW+BLINK);
			gotoxy(29,13); cprintf("Record Is Not Found");
			getch();
			Main_Menu();
		}
	else
		{
			Label2:
			window(43,6,77,23);
			textbackground(RED);
			clrscr();

			window(45,7,75,22);
			textbackground(BLACK);
			clrscr();

			textcolor(YELLOW);
			gotoxy(13,2); cprintf("Choice");
			textcolor(LIGHTGREEN);
			gotoxy(2,3);  for(i=0; i<28; i++) cprintf("-");

			textcolor(LIGHTRED+BLINK);
			gotoxy(8,4); cprintf("Are You Shoure ?");

			textcolor(WHITE);
			gotoxy(5,5);  cprintf("Do You Want To Delete");
			gotoxy(10,6); cprintf("This Record");
			gotoxy(10,7); cprintf("Permanently");

			textcolor(YELLOW);
			gotoxy(2,9); cprintf("1) Yes    2) No   3) Go Back");

			textcolor(LIGHTRED);
			gotoxy(8,11); cprintf("Enter Your Choice:- ");
			Choice=getch();

			switch(Choice)
				{
					case '1':
							rewind(fp); // Set The Cursor At Starting Of The File
							fp1=fopen("Temp.txt","wb");

							while(fread(&Data,sizeof(Data),1,fp)!=NULL)
								{
									if(Data.Roll_No!=Temp_Roll_No)
										{
											fwrite(&Data,sizeof(Data),1,fp1);
										}
								}

							fclose(fp);
							fclose(fp1);

							switch(Temp_Sem)
								{
									case 1: remove("Sem1.txt"); rename("Temp.txt","Sem1.txt"); break;
									case 2: remove("Sem2.txt"); rename("Temp.txt","Sem2.txt"); break;
									case 3: remove("Sem3.txt"); rename("Temp.txt","Sem3.txt"); break;
								}

							textcolor(LIGHTBLUE+BLINK);
							gotoxy(7,13); cprintf("Successfully Deleted");
							Flag=0;
					break;

					case '2':
							textcolor(WHITE+BLINK);
							gotoxy(11,13);  cprintf("Not Deleted");
							Flag=0;
					break;

					case '3': Flag=0; Main_Menu(); break;

					default : goto Label2;
				}
		}

	textcolor(YELLOW);
	gotoxy(5,15); cprintf(".....Press Any Key.....");
	getch();
	Flag=0;
	Main_Menu();
}

void Put_Data()
{
	textcolor(WHITE);
	gotoxy(2,2);  cprintf("Roll No :- %d",Data.Roll_No);
	gotoxy(2,3);  cprintf("Name    :- %s",Data.Name);
	gotoxy(2,4);  cprintf("Seat No :- %ld",Data.Set_No);

	switch(Data.Sem)
		{
			case 1:
				gotoxy(2,5);  cprintf("C Lang  :- %d",Data.S1);
				gotoxy(2,6);  cprintf("Math    :- %d",Data.S2);
				gotoxy(2,7);  cprintf("RDBMS   :- %d",Data.S3);
				gotoxy(2,8);  cprintf("CO      :- %d",Data.S4);
				gotoxy(2,9);  cprintf("Sum     :- %d",Data.Sum);
				gotoxy(2,10); cprintf("Per     :- %f",Data.Per);
			break;

			case 2:
				gotoxy(2,5);  cprintf("C Lang     :- %d",Data.S1);
				gotoxy(2,6);  cprintf("Statistic  :- %d",Data.S2);
				gotoxy(2,7);  cprintf("Web Desi   :- %d",Data.S3);
				gotoxy(2,8);  cprintf("Advance CO :- %d",Data.S4);
				gotoxy(2,9);  cprintf("Sum        :- %d",Data.Sum);
				gotoxy(2,10); cprintf("Per        :- %f",Data.Per);
			break;

			case 3:
				gotoxy(2,5);  cprintf("C++     :- %d",Data.S1);
				gotoxy(2,6);  cprintf("SAD     :- %d",Data.S2);
				gotoxy(2,7);  cprintf("DFS     :- %d",Data.S3);
				gotoxy(2,8);  cprintf("OS      :- %d",Data.S4);
				gotoxy(2,9);  cprintf("Sum     :- %d",Data.Sum);
				gotoxy(2,10); cprintf("Per     :- %f",Data.Per);
			break;
		}
}

void if_Condition_False()
{
	Background();
	window(19,7,61,19);
	textbackground(LIGHTRED);
	clrscr();

	window(21,8,59,18);
	textbackground(BLACK);
	clrscr();

	textcolor(YELLOW);
	gotoxy(14,2); cprintf("Error Occured");

	textcolor(LIGHTGREEN);
	gotoxy(3,3);  for(i=0; i<35; i++) cprintf("-");
	gotoxy(3,10); for(i=0; i<35; i++) cprintf("-");

	textcolor(LIGHTCYAN+BLINK);
	gotoxy(5,5); cprintf("Inorrect User Name Or Password");

	textcolor(WHITE);
	gotoxy(8,8); cprintf(".....Press Any Key......");

	getch();

	while(1)
		{
			Background();
			window(22,8,59,18);
			textbackground(LIGHTGREEN);
			clrscr();

			window(24,9,57,17);
			textbackground(BLACK);
			clrscr();

			textcolor(LIGHTRED);
			gotoxy(16,2); cprintf("Choice");

			textcolor(YELLOW);
			gotoxy(3,3); for(i=0; i<30; i++) cprintf("-");
			gotoxy(3,7); for(i=0; i<30; i++) cprintf("-");

			textcolor(WHITE);
			gotoxy(8,4);  cprintf("(1)  Try Again");
			gotoxy(8,5);  cprintf("(2)  Go To LogIn Page");
			gotoxy(8,6);  cprintf("(3)  Exit");

			textcolor(LIGHTCYAN);
			gotoxy(8,8); cprintf("Enter Your Choice ? ");
			Choice=getch();

			switch(Choice)
				{
					case '1': Administrator();	break;
					case '2': Log_In_Page();   break;
					case '3': Information_Page();	break;
					default : Error_Window();
				}
		}
}
