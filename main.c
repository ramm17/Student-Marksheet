#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void draw_line();
void student_info();
void marksheet();
void result();
void get_input();
char fn[10],ln[10];
float ma,ph,ch,co,en,tot,per;
int roll,cla;
int main()
{
    system("color 1F");
    get_input();
    draw_line();
    printf("\t\t\t\t Everest Florida College \n");
    printf("\t\t\t\t Old-Baneshwor,Kathmandu\n");
    printf("\t\t\t\t   Contact: 4240005\n");
    draw_line();
    student_info();
    getch();
    return 0;
}
void get_input()
{
    printf("=====================================\n");
    printf("      STUDENT MARKSHEET SYSTEM\n");
    printf("=====================================\n\n");
    printf("Enter Student's First Name: ");
    scanf("%s",fn);
    printf("Enter Student's Last Name: ");
    scanf("%s",ln);
    printf("Enter Student's Roll No: ");
    scanf("%d",&roll);
    printf("Enter Student's Class: ");
    scanf("%d",&cla);

    printf("\nEnter the secured marks for the following subjects:\n");
    printf("Physics: ");
    scanf("%f",&ph);
    printf("Chemistry: ");
    scanf("%f",&ch);
    printf("English: ");
    scanf("%f",&en);
    printf("Computer: ");
    scanf("%f",&co);
    printf("Maths: ");
    scanf("%f",&ma);

    system("cls");//clear screen
}
void draw_line()
{
    int i;
    for(i=0;i<80;i++)
    {
        printf("-");
    }
    printf("\n");
}
void student_info()
{
    printf("First Name: %s\t\t\t\t\t\t\tRoll No: %d\n\n",fn,roll);
    printf("Last Name : %s\t\t\t\t\t\t\tClass  : %d\n",ln,cla);
    draw_line();
    marksheet();
}
void marksheet()
{
    printf("S.N.\tSUBJECTS\t\tF.M.\t\tP.M.\t\tO.M.\n");
    draw_line();
    printf("1.\tPhysics\t\t\t100\t\t32\t\t%.2f\n",ph);
    printf("2.\tChemistry\t\t100\t\t32\t\t%.2f\n",ch);
    printf("3.\tEnglish\t\t\t100\t\t32\t\t%.2f\n",en);
    printf("4.\tComputer\t\t100\t\t32\t\t%.2f\n",co);
    printf("5.\tMaths\t\t\t100\t\t32\t\t%.2f\n",ma);
    draw_line();
    result();
}
void result()
{
    tot=(ph+ch+en+co+ma);
    per=tot/5;
    printf("Total Marks: %.2f\t\t\t\t\tPercentage: %.2f\n",tot,per);
    draw_line();
}
