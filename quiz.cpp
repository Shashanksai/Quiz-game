#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void show_record();
void reset_score();
void help();
void edit_score(float , char []);
int main()
     {
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
     mainhome:
     system("cls");
     printf("\t\t\tC PROGRAM QUIZ GAME\n");
     printf("\n\t\t________________________________________");

     printf("\n\t\t\t   WELCOME ");
     printf("\n\t\t\t      to ");
     printf("\n\t\t\t   THE GAME ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > Press V to view  high score  ");
     printf("\n\t\t > Press R to reset score");
     printf("\n\t\t > press H for help            ");
     printf("\n\t\t > press Q to quit             ");
     printf("\n\t\t________________________________________\n\n");
     choice=toupper(getch());
     if (choice=='V')
	{
	show_record();
	goto mainhome;
	}
     else if (choice=='H')
	{
	help();getch();
	goto mainhome;
	}
	else if (choice=='R')
	{reset_score();
	getch();
	goto mainhome;}
	else if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
     system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
     gets(playername);

    system("cls");
    printf("\n ------------------  Welcome %s to the  C Quiz --------------------------",playername);
    printf("\n\n Here are some tips you might wanna know before playing:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your");
    printf("\n    C language knowledge. You are eligible to play the game if you give atleast 2");
    printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
    printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
    printf("\n    total of 28 questions.");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, untill right answers are given");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
       system("cls");
       }

     home:
     system("cls");
     count=0;
     for(i=1;i<=3;i++)
     {
    system("cls");
     r1=i;


     switch(r1)
		{
		case 1:
		printf("\n\n What is the size of int?");
		printf("\n\nA.2\t\tB.8\n\nC.4\t\tD.NOTA");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!!!");count++;
			    getch();
			    break;
}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is C.4");
		           getch();
		       break;
		       }

        case 2:
		printf("\n\n\nWho is the father of C Language");
		printf("\n\nA.Charles Babbage\t\tB.Alister Cook\n\nC.Dennis Ritchie\t\tD.Bill Gates");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Dennis Ritchie");
		       getch();
		       break;}

        case 3:
		printf("\n\n\nA collection of similar data type elements is called");
		printf("\n\nA.Structure\t\tB.Array\n\nC.Pointer\t\tD.Union");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Array");
		       getch();
		       break;}

        case 4:
		printf("\n\n\nThe total number of keywords in C are..");
		printf("\n\nA.64\t\tB.32\n\nC.8\t\tD.24");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.32");
		       getch();
		       break;}

        case 5:
        printf("\n\n\nWhic of the following is an output function");
        printf("\n\nA.scanf()\t\tB.printf()\n\nC.getchar()\t\tD.getch()");
        if (toupper(getch())=='B')
               {printf("\n\nCorrect!!!");count++;
               getch();
                break;}
        else
		       {printf("\n\nWrong!!! The correct answer is B.printf()");
		       getch();
		       break;}

        case 6:
		printf("\n\n\nWhich of the following strings is a valid variable name?");
		printf("\n\nA.shashank_sher\t\tB.shashank&sher\n\nC.shashank+sher\t\tD.shashank#sher");
		if (toupper(getch())=='D' )
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.shashank_sher");
		       getch();
		       break;}}
		       }

	if(count>=2)
	{goto test;}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	getch();
	goto mainhome;
	}
     test:
     system("cls");
     printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
     printf("\n\n\n\n\t!Press any key to Start the Game!");
     if(toupper(getch())=='p')
		{goto game;}
game:
     countr=0;
     for(i=1;i<=10;i++)
     {system("cls");
     r=i;

     switch(r)
		{
		case 1:
		printf("\n\nIdentify the loop construct:");
		printf("\n\nA.if else\t\tB.goto\n\nC.while\t\tD.switch case");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is C.while");countr++;getch();
		       goto score;
		       break;}

		case 2:
		printf("\n\n\nWhich of the following is not a storage class");
		printf("\n\nA.define\t\tB.external\n\nC.automatic\t\tD.register");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.define");getch();
		      goto score;
		       break;
		       }

        case 3:
		printf("\n\n\nHow many while statements are possible in do.... While loop? ");
		printf("\n\nA.0\t\tB.4\n\nC.infinite\t\tD.1");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.infinite");getch();
		       goto score;
		       break;}

        case 4:
		printf("\n\n\nThe global variable can be declared?");
		printf("\n\nA.Before main\t\tB.After main\n\nC.After block\t\tD.Within Block");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is A.Before main");getch();
		       goto score;
		       break;
		       }

        case 5:
		printf("\n\n\nAll the elements in the array must be");
		printf("\n\nA.Initialized\t\tB.Defined\n\nC.Processed\t\tD.Called");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is B.Defined");
		       getch();
		       goto score;
		       break;
		       }

		case 6:
		printf("\n\n\nIf statement is a__________ statement");
		printf("\n\nA.Loop construct\t\tB.Two way decision\n\nC.Multy way decision\t\tD.One way decision");
		if (toupper(getch())=='B' )
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Two way decision");goto score;
		       getch();
		       break;}

        case 7:
		printf("\n\n\nNumber of keywords present in C language are");
		printf("\n\nA.34\t\tB.64\n\nC.62\t\tD.32");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.32");getch();
		       goto score;
		       break;}

        case 8:
		printf("\n\n\nA C program is a combination of?");
		printf("\n\nA.Statements\t\tB.Functions\n\nC.Variables\t\t D.All of the above");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.All of the above");getch();
		       goto score;
		       break;}

        case 9:
		printf("\n\n\nC language is used in devolopment of______.");
		printf("\n\nA.Data bases\t\tB.Word processors\n\nC.Graphic applications\t\tD.All of the above");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.All of the above");getch();
		       goto score;
		       break;}

        case 10:
		printf("\n\n\nWhich of the following is not a correct variable type....");
		printf("\n\nA.Real\t\tB.float\n\nC.int\t\tD.char");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Real");getch();break;goto score;}

        case 11:
		printf("\n\n\nWhich is the only function all C programs must contain?");
		printf("\n\nA.printf()\t\tB.scanf()\n\nC.main()\t\tD.getch()");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
              {printf("\n\nWrong!!! The correct answer is C.main()");getch();
              break;goto score;}

        case 12:
		printf("\n\n\nA c variable cannot start with");
		printf("\n\nA.A number\t\tB.A special symbol(excluding underscore)\n\nC.Both of the above\t\tD.An alphabet");
		if (toupper(getch())=='C')
			  {printf("\n\nCorrect!!!");countr++;getch();
			   break;}
		else
              {printf("\n\nWrong!!! The correct answer is C.Both of the above");getch();
              break;goto score;}

	case 13:
		printf("\n\n\nEach statement in C program should end with");
		printf("\n\nA.colon\t\tB.comma\n\nC.closed bracket\t\tD.semi colon");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.semi colon");getch();
		       break;goto score;}

        case 14:
		printf("\n\n\nC was primarily devoloped as");
		printf("\n\nA.System programming language\t\tB.General purpose language\n\nC.Data processing languaget\tD.NOTA");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.System programming language");getch();
		       break;goto score;}

		case 15:
		printf("\n\n\nWhat is a character file output function");
		printf("\n\nA.fseek\t\tB.fputc\n\nC.fprintf\t\tD.fgetc");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.fputc");getch();
		       goto score;
		       break;}

		case 16:
		printf("\n\n\nWhat is a character file input function ");
		printf("\n\nA.fseek\t\tB.fputc\n\nC.fprintf\t\tD.fgetc");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;
			}
		else
		       {printf("\n\nWrong!!! The correct answer is D.fgetc");getch();
		       goto score;
		       break;}


		case 17:
		printf("\n\n\nWhat will be return if fopen() fails to open a file");
		printf("\n\nA.Null\t\tB.0\n\nC.Garbage value\t\tD.1");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Null");getch();goto score;
		       break;}

		case 18:
		printf("\n\n\nWhat is the size of long double variabe");
		printf("\n\nA.4\t\tB.8\n\nC.1\t\tD.10\n\n");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.10");getch();goto score;
		       break;}

		case 19:
		printf("\n\n\nWhat is the extension of C source program");
		printf("\n\nA..C\tB..obj\n\nC..exp\tD..cp\n\n");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A..C");getch();goto score;
		       break;}

		case 20:
		printf("\n\n\nThe number of loop constructs in C");
		printf("\n\nA.1\t\tB.3\n\nC.4\t\tD.2");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.3");getch();goto score;
		       break;}

		case 21:
		printf("\n\n\nThe function pow() is a part of header file");
		printf("\n\nA.windows.h\t\tB.stdlib.h\n\nC.string.h\t\tD.math.h");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.math.h");getch();goto score;
		       break;}

		case 22:
		printf("\n\n\n What is unconditional control statement");
		printf("\n\nA.switch\t\tB.while\n\nC.if else\t\tD.goto");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.goto");getch();goto score;
		       break;}

		case 23:
		printf("\n\n\n_________ is a mechanism to convert one data type to another");
		printf("\n\nA.recurssion\t\tB.macro substitution\n\nC.Type casting\t\tD.NOTA");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Type casting");getch();goto score;
		       break;}}}
	score:
    system("cls");
	score=(float)countr*10;
	
	if(score>0.00 && score<100)
	{
	   printf("\n\n\t\t**************** CONGRATULATIONS *****************");
	     printf("\n\t Your Score is %.2f",score);goto go;}

	 else if(score>=100.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATIONS ****************");
	    printf("\n\t\t\t\t YOU HAVE GOOD COMMAND ON C-LANGUAGE!!!!!!!!!");
	    printf("\n\t\t Your Score is %.2f",score);
	    printf("\t\t Thank You!!");
	}
	 else
{
	 printf("\n\n\t******** SORRY YOU DIDN'T GET FULL MARKS********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");goto go;}

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score,playername);
		goto mainhome;}}}

void show_record()
    {system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();}

void reset_score()
    {system("cls");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);}

void help()
	{system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 28 questions .");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t*********************BEST OF LUCK*********************************");}

void edit_score(float score, char plnm[20])
	{
	system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);}}

