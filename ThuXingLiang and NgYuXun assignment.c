#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

void teacher();
void student();
int main();
int end();
int menu();
int display();

//  global variable  //
char studentName[30], studentID[10];
char coursecode1[8] = "AAA1003", coursecode2[8] = "AAA1014", coursecode3[8] = "AAA1003", coursecode4[8] = "AAA1014", coursecode5[8] = "AAA1003", coursecode6[8] = "AAA1014";
char gradeGPA1[3], gradeGPA2[3], gradeGPA3[3];
float GPA1, GPA2, GPA3, CGPA, totalqualityPoint;
int totalcreditHour;

int main()
{
	int option;

	while (1)
	{
		option = menu();

		if (option == 1)
		{
			teacher();
			break;
		}
		else if (option == 2)
		{
			student();
			break;
		}
		else if (option == 3)
		{
			system("pause");
			break;
		}
		else
		{
			printf("Please Enter 1, 2, 3\n");
		}

	}
	return 0;
}

int end()
{
	int option;

	printf("1. Back to Menu\n");
	printf("2. Close This Program\n");
	printf("\n Please Select a Number (1 or 2): ");
	rewind(stdin);
	scanf("%d", &option);
	return option;
}


int menu()
{
	int option;
	system("cls");
	printf("\n\n");
	printf("=======================================================================================================\n");
	printf("==================================<<<<<< Welcome to Kolej Pasar >>>>>>=================================\n");
	printf("=======================================================================================================\n");
	printf("\n\n");
	printf("     MENU  \n");
	printf(" ------------\n");
	printf(" 1. Staff Adminstrator\n");
	printf(" 2. Student\n");
	printf(" 3. Close This Program\n");
	printf("\n Please Select a Number (1/2/3) :  ");
	rewind(stdin);
	scanf("%d", &option);
	return option;
}

int display()
{
	system("cls");
	printf("\n\n");
	printf("                                          #####    #####    #######     ###\n");
	printf("                                         ##   ##  ##   ##   ##    ##   ## ##\n");
	printf("                                         ##       ##        ##    ##  ##   ##\n");
	printf("                                         ##       ##  ####  #######  ##     ##\n");
	printf("                                         ##       ##   ##   ##       #########\n");
	printf("                                         ##   ##  ##   ##   ##       ##     ##\n");
	printf("                                          #####    #####    ##       ##     ##\n");
	printf("-------------------------------------------------------------------------------------------------------");
	printf("---------------------------------------------------------------------  Final Result  -----------------------------------------");
	printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
	printf("\n");
	printf("      Student Details     \n");
	printf("   ---------------------  \n");
	printf("   Student Name                           : %s\n", studentName);
	printf("   Student ID                             : %s\n", studentID);
	printf("   Total Credit Hour                      : %d\n", totalcreditHour);
	printf("\n\n");
	printf("=======================================================  Marks  =================================================\n");
	printf("---------------------------------------------------- ~ Semester 1 ~ ---------------------------------------------\n");
	printf("   Grade Point                  : %.2f\n", GPA1);
	if (GPA1 >= 4.00)
	{
		char gradeGPA1[3] = "A";
		printf("   Grade                        :%s\n ", gradeGPA1);
	}
	else if (GPA1 >= 3.75)
	{
		char gradeGPA1[3] = "A-";
		printf("   Grade                        :%s\n ", gradeGPA1);
	}
	else if (GPA1 >= 3.50)
	{
		char gradeGPA1[3] = "B+";
		printf("   Grade                        :%s\n ", gradeGPA1);
	}
	else if (GPA1 >= 3.00)
	{
		char gradeGPA1[3] = "B";
		printf("   Grade                        :%s\n ", gradeGPA1);
	}
	else if (GPA1 >= 2.75)
	{
		char gradeGPA1[3] = "B-";
		printf("   Grade                        :%s\n ", gradeGPA1);
	}
	else if (GPA1 >= 2.50)
	{
		char gradeGPA1[3] = "C+";
		printf("   Grade                        :%s\n ", gradeGPA1);
	}
	else if (GPA1 >= 2.00)
	{
		char gradeGPA1[3] = "C";
		printf("   Grade                        :%s\n ", gradeGPA1);
	}
	else {
		char gradeGPA1[3] = "F";
		printf("   Grade                        :%s\n ", gradeGPA1);
	}
	printf("--------------------------------------------------- ~ Semester 2 ~ ----------------------------------------------\n");
	printf("   Grade Point                  : %.2f\n", GPA2);
	if (GPA2 >= 4.00)
	{
		char gradeGPA2[3] = "A";
		printf("   Grade                        :%s\n ", gradeGPA2);
	}
	else if (GPA2 >= 3.75)
	{
		char gradeGPA2[3] = "A-";
		printf("   Grade                        :%s\n ", gradeGPA2);
	}
	else if (GPA2 >= 3.50)
	{
		char gradeGPA2[3] = "B+";
		printf("   Grade                        :%s\n ", gradeGPA2);
	}
	else if (GPA2 >= 3.00)
	{
		char gradeGPA2[3] = "B";
		printf("   Grade                        :%s\n ", gradeGPA2);
	}
	else if (GPA2 >= 2.75)
	{
		char gradeGPA2[3] = "B-";
		printf("   Grade                        :%s\n ", gradeGPA2);
	}
	else if (GPA2 >= 2.50)
	{
		char gradeGPA2[3] = "C+";
		printf("   Grade                        :%s\n ", gradeGPA2);
	}
	else if (GPA2 >= 2.00)
	{
		char gradeGPA2[3] = "C";
		printf("   Grade                        :%s\n ", gradeGPA2);
	}
	else {
		char gradeGPA2[3] = "F";
		printf("   Grade                        :%s\n ", gradeGPA2);
	}

	printf("--------------------------------------------------- ~ Semester 3 ~ ----------------------------------------------\n");
	printf("   Grade Point                  : %.2f\n", GPA3);
	if (GPA3 >= 4.00)
	{
		char gradeGPA3[3] = "A";
		printf("   Grade                        :%s\n ", gradeGPA3);
	}
	else if (GPA3 >= 3.75)
	{
		char gradeGPA3[3] = "A-";
		printf("   Grade                        :%s\n ", gradeGPA3);
	}
	else if (GPA3 >= 3.50)
	{
		char gradeGPA3[3] = "B+";
		printf("   Grade                        :%s\n ", gradeGPA3);
	}
	else if (GPA3 >= 3.00)
	{
		char gradeGPA3[3] = "B";
		printf("   Grade                        :%s\n ", gradeGPA3);
	}
	else if (GPA3 >= 2.75)
	{
		char gradeGPA3[3] = "B-";
		printf("   Grade                        :%s\n ", gradeGPA3);
	}
	else if (GPA3 >= 2.50)
	{
		char gradeGPA3[3] = "C+";
		printf("   Grade                        :%s\n ", gradeGPA3);
	}
	else if (GPA3 >= 2.00)
	{
		char gradeGPA3[3] = "C";
		printf("   Grade                        :%s\n ", gradeGPA3);
	}
	else {
		char gradeGPA3[3] = "F";
		printf("   Grade                        :%s\n ", gradeGPA3);
	}
	printf("------------------------------------------------------ ~ CGPA ~ -------------------------------------------------\n");
	printf("   Grade Point                  : %.2f\n", CGPA);
	if (CGPA >= 4.00)
	{
		char gradeCGPA[3] = "A";
		printf("   Grade                        :%s\n ", gradeCGPA);
	}
	else if (CGPA >= 3.75)
	{
		char gradeCGPA[3] = "A-";
		printf("   Grade                        :%s\n ", gradeCGPA);
	}
	else if (CGPA >= 3.50)
	{
		char gradeCGPA[3] = "B+";
		printf("   Grade                        :%s\n ", gradeCGPA);
	}
	else if (CGPA >= 3.00)
	{
		char gradeCGPA[3] = "B";
		printf("   Grade                        :%s\n ", gradeCGPA);
	}
	else if (CGPA >= 2.75)
	{
		char gradeCGPA[3] = "B-";
		printf("   Grade                        :%s\n ", gradeCGPA);
	}
	else if (CGPA >= 2.50)
	{
		char gradeCGPA[3] = "C+";
		printf("   Grade                        :%s\n ", gradeCGPA);
	}
	else if (CGPA >= 2.00)
	{
		char gradeCGPA[3] = "C";
		printf("   Grade                        :%s\n ", gradeCGPA);
	}
	else {
		char gradeCGPA[3] = "F";
		printf("   Grade                        :%s\n ", gradeCGPA);
	}
	printf("\n================================================== ~ Congratulations ~ =============================================\n");
	printf("\n");
}


void teacher()
{
	float gradePoint1, gradePoint2, gradePoint3, gradePoint4, gradePoint5, gradePoint6;
	float qualityPoint1, qualityPoint2, qualityPoint3, qualityPoint4, qualityPoint5, qualityPoint6;
	int creditHour1, creditHour2, creditHour3, creditHour4, creditHour5, creditHour6;
	int option;
	float mark1, mark2, mark3, mark4, mark5, mark6;


	system("cls");
	printf("\n\n");
	printf("============================================= (: Welcome Staff Adminstrator !!! :)===================================\n ");
	printf("\n Please Enter Student Name : ");
	rewind(stdin);
	scanf("%s", &studentName);
	printf("\n Please Enter Student ID   : ");
	rewind(stdin);
	scanf("%s", &studentID);
	printf("\n =======================================\n");

	// Semester 1 //

	printf("\n       Semester 1 \n");
	printf("------------------------\n");
	printf(" Course Code %s \n", coursecode1);
	printf(" Enter Student Mark   : ");
	rewind(stdin);
	scanf("%f", &mark1);
	printf(" Enter Credit Hour    : ");
	rewind(stdin);
	scanf("%d", &creditHour1);
	printf("\n");

	printf(" Course Code %s \n", coursecode2);
	printf(" Enter Student Mark   : ");
	rewind(stdin);
	scanf("%f", &mark2);
	printf(" Enter Credit Hour    : ");
	rewind(stdin);
	scanf("%d", &creditHour2);
	printf("\n");

	// Semester 2 //

	printf("\n       Semester 2 \n");
	printf("------------------------\n");
	printf(" Course Code %s \n", coursecode3);
	printf(" Enter Student Mark   : ");
	rewind(stdin);
	scanf("%f", &mark3);
	printf(" Enter Credit Hour    : ");
	rewind(stdin);
	scanf("%d", &creditHour3);
	printf("\n");

	printf(" Course Code %s \n", coursecode4);
	printf(" Enter Student Mark   : ");
	rewind(stdin);
	scanf("%f", &mark4);
	printf(" Enter Credit Hour    : ");
	rewind(stdin);
	scanf("%d", &creditHour4);
	printf("\n");

	// Semester 3 //

	printf("\n       Semester 3 \n");
	printf("------------------------\n");
	printf(" Course Code %s \n", coursecode5);
	printf(" Enter Student Mark   : ");
	rewind(stdin);
	scanf("%f", &mark5);
	printf(" Enter Credit Hour    : ");
	rewind(stdin);
	scanf("%d", &creditHour5);
	printf("\n");

	printf(" Course Code %s \n", coursecode6);
	printf(" Enter Student Mark   : ");
	rewind(stdin);
	scanf("%f", &mark6);
	printf(" Enter Credit Hour    : ");
	rewind(stdin);
	scanf("%d", &creditHour6);
	printf("\n");

	// Semester 1 //

	gradePoint1 = mark1 * 0.04;
	printf("Grade Point: %.2f\n", gradePoint1);

	if (gradePoint1 >= 4.00)
	{
		char grade[3] = "A";
		printf("Grade : %s\n ", grade);
	}
	else if (gradePoint1 >= 3.75)
	{
		char grade[3] = "A-";
		printf("Grade : %s\n ", grade);
	}
	else if (gradePoint1 >= 3.50)
	{
		char grade[3] = "B+";
		printf("Grade : %s\n ", grade);
	}
	else if (gradePoint1 >= 3.00)
	{
		char grade[3] = "B";
		printf("Grade : %s\n ", grade);
	}
	else if (gradePoint1 >= 2.75)
	{
		char grade[3] = "B-";
		printf("Grade : %s\n ", grade);
	}
	else if (gradePoint1 >= 2.50)
	{
		char grade[3] = "C+";
		printf("Grade : %s\n ", grade);
	}
	else if (gradePoint1 >= 2.00)
	{
		char grade[3] = "C";
		printf("Grade : %s\n ", grade);
	}
	else {
		char grade[3] = "F";
		printf("Grade : %s\n ", grade);
	}

	//////////////////////

	gradePoint2 = mark2 * 0.04;
	printf("Grade Point: %.2f\n", gradePoint2);

	if (gradePoint2 >= 4.00)
	{
		char grade[3] = "A";
		printf("Grade : %s\n ", grade);
	}
	else if (gradePoint2 >= 3.75)
	{
		char grade[3] = "A-";
		printf("Grade : %s\n ", grade);
	}
	else if (gradePoint2 >= 3.50)
	{
		char grade[3] = "B+";
		printf("Grade : %s\n ", grade);
	}
	else if (gradePoint2 >= 3.00)
	{
		char grade[3] = "B";
		printf("Grade : %s\n ", grade);
	}
	else if (gradePoint2 >= 2.75)
	{
		char grade[3] = "B-";
		printf("Grade : %s\n ", grade);
	}
	else if (gradePoint2 >= 2.50)
	{
		char grade[3] = "C+";
		printf("Grade : %s\n ", grade);
	}
	else if (gradePoint2 >= 2.00)
	{
		char grade[3] = "C";
		printf("Grade : %s\n ", grade);
	}
	else {
		char grade[3] = "F";
		printf("Grade : %s\n ", grade);
	}

	// Semester 2//

	gradePoint3 = mark3 * 0.04;
	printf("Grade Point: %.2f\n", gradePoint3);

	if (gradePoint3 >= 4.00)
	{
		char grade[3] = "A";
		printf("Grade : %s\n ", grade);
	}
	else if (gradePoint3 >= 3.75)
	{
		char grade[3] = "A-";
		printf("Grade : %s\n ", grade);
	}
	else if (gradePoint3 >= 3.50)
	{
		char grade[3] = "B+";
		printf("Grade : %s\n ", grade);
	}
	else if (gradePoint3 >= 3.00)
	{
		char grade[3] = "B";
		printf("Grade : %s\n ", grade);
	}
	else if (gradePoint3 >= 2.75)
	{
		char grade[3] = "B-";
		printf("Grade : %s\n ", grade);
	}
	else if (gradePoint3 >= 2.50)
	{
		char grade[3] = "C+";
		printf("Grade : %s\n ", grade);
	}
	else if (gradePoint3 >= 2.00)
	{
		char grade[3] = "C";
		printf("Grade : %s\n ", grade);
	}
	else {
		char grade[3] = "F";
		printf("Grade : %s\n ", grade);
	}

	//////////////////////////////

	gradePoint4 = mark4 * 0.04;
	printf("Grade Point: %.2f\n", gradePoint4);

	if (gradePoint4 >= 4.00)
	{
		char grade[3] = "A";
		printf("Grade : %s\n ", grade);
	}
	else if (gradePoint4 >= 3.75)
	{
		char grade[3] = "A-";
		printf("Grade : %s\n ", grade);
	}
	else if (gradePoint4 >= 3.50)
	{
		char grade[3] = "B+";
		printf("Grade : %s\n ", grade);
	}
	else if (gradePoint4 >= 3.00)
	{
		char grade[3] = "B";
		printf("Grade : %s\n ", grade);
	}
	else if (gradePoint4 >= 2.75)
	{
		char grade[3] = "B-";
		printf("Grade : %s\n ", grade);
	}
	else if (gradePoint4 >= 2.50)
	{
		char grade[3] = "C+";
		printf("Grade : %s\n ", grade);
	}
	else if (gradePoint4 >= 2.00)
	{
		char grade[3] = "C";
		printf("Grade : %s\n ", grade);
	}
	else {
		char grade[3] = "F";
		printf("Grade : %s\n ", grade);
	}

	// Semester 3 //

	gradePoint5 = mark5 * 0.04;
	printf("Grade Point: %.2f\n", gradePoint5);

	if (gradePoint5 >= 4.00)
	{
		char grade[3] = "A";
		printf("Grade : %s\n ", grade);
	}
	else if (gradePoint5 >= 3.75)
	{
		char grade[3] = "A-";
		printf("Grade : %s\n ", grade);
	}
	else if (gradePoint5 >= 3.50)
	{
		char grade[3] = "B+";
		printf("Grade : %s\n ", grade);
	}
	else if (gradePoint5 >= 3.00)
	{
		char grade[3] = "B";
		printf("Grade : %s\n ", grade);
	}
	else if (gradePoint5 >= 2.75)
	{
		char grade[3] = "B-";
		printf("Grade : %s\n ", grade);
	}
	else if (gradePoint5 >= 2.50)
	{
		char grade[3] = "C+";
		printf("Grade : %s\n ", grade);
	}
	else if (gradePoint5 >= 2.00)
	{
		char grade[3] = "C";
		printf("Grade : %s\n ", grade);
	}
	else {
		char grade[3] = "F";
		printf("Grade : %s\n ", grade);
	}

	/////////////////////////////

	gradePoint6 = mark6 * 0.04;
	printf("Grade Point: %.2f\n", gradePoint6);

	if (gradePoint6 >= 4.00)
	{
		char grade[3] = "A";
		printf("Grade : %s\n ", grade);
	}
	else if (gradePoint6 >= 3.75)
	{
		char grade[3] = "A-";
		printf("Grade : %s\n ", grade);
	}
	else if (gradePoint6 >= 3.50)
	{
		char grade[3] = "B+";
		printf("Grade : %s\n ", grade);
	}
	else if (gradePoint6 >= 3.00)
	{
		char grade[3] = "B";
		printf("Grade : %s\n ", grade);
	}
	else if (gradePoint6 >= 2.75)
	{
		char grade[3] = "B-";
		printf("Grade : %s\n ", grade);
	}
	else if (gradePoint6 >= 2.50)
	{
		char grade[3] = "C+";
		printf("Grade : %s\n ", grade);
	}
	else if (gradePoint6 >= 2.00)
	{
		char grade[3] = "C";
		printf("Grade : %s\n ", grade);
	}
	else {
		char grade[3] = "F";
		printf("Grade : %s\n ", grade);
	}

	// calculation //
	totalcreditHour = creditHour1 + creditHour2 + creditHour3 + creditHour4 + creditHour5 + creditHour6;

	qualityPoint1 = gradePoint1 * creditHour1;
	qualityPoint2 = gradePoint2 * creditHour2;
	qualityPoint3 = gradePoint3 * creditHour3;
	qualityPoint4 = gradePoint4 * creditHour4;
	qualityPoint5 = gradePoint5 * creditHour5;
	qualityPoint6 = gradePoint6 * creditHour6;

	totalqualityPoint = qualityPoint1 + qualityPoint2 + qualityPoint3 + qualityPoint4 + qualityPoint5 + qualityPoint6;

	GPA1 = (qualityPoint1 + qualityPoint2) / (creditHour1 + creditHour2);
	GPA2 = (qualityPoint3 + qualityPoint4) / (creditHour3 + creditHour4);
	GPA3 = (qualityPoint5 + qualityPoint6) / (creditHour5 + creditHour6);

	CGPA = totalqualityPoint / totalcreditHour;

	display();

	while (1)
	{
		option = end();
		if (option == 2)
		{
			system("pause");
			break;
		}
		else if (option == 1)
		{
			main();
			break;
		}
		else
		{
			printf("Invalid Number!!! Please enter (1 or 2) ");
		}
	}
	return 0;
}

void student()
{
	// variable // 
	int option, point;
	char stdID[10];

	system("cls");
	printf("\n\n");
	printf("================================================ (: Welcome Student !!! :)===========================================\n ");
	printf("\n Please Enter Your Student ID                :  ");
	rewind(stdin);
	scanf("%s", &stdID);

	point = strcmp(stdID, studentID);
	if (point == 0)
	{
		printf("---------------------------------------  Student Menu  ------------------------------------\n");
		printf("Student Name           : %s\n ", studentName);
		display();
	}
	else
		printf("\n        < Invalid Student ID Please Try Again :) >       \n");
	printf("\n\n");

	while (1)
	{
		option = end();
		if (option == 2)
		{
			system("pause");
			break;
		}
		else if (option == 1)
		{
			main();
			break;
		}
		else
			printf("Please Enter a Number (1 or 2)");
	}
}
