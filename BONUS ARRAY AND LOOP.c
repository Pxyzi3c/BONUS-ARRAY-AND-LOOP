#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf

/*HARVY JONES PONTILLAS DICT 1-2*/

int main()
{   int empno, yrsofsrvc, i=0;
    char empname[15], ans;
    float salary, bonus, tbonus=0, add[4]={.10, .20, .50, .75};

    do
    {
    p("EMPLOYEE NO.: ");
    s("%d", &empno);
    p("EMPLOYEE NAME: ");
    s("%s", &empname);
    p("SALARY: ");
    s("%f", &salary);
    p("YEARS OF SERVICE: ");
    s("%d", &yrsofsrvc);
        if(yrsofsrvc==1)
        {
            bonus=salary*add[i];
            p("BONUS: %.2f", bonus);
        }
        else if(yrsofsrvc>=2 && yrsofsrvc<=5)
        {
            bonus=salary*add[i+1];
            p("BONUS: %.2f", bonus);
        }
        else if(yrsofsrvc>=6 && yrsofsrvc<=10)
        {
            bonus=salary*add[i+2];
            p("BONUS: %.2f", bonus);
        }
        else if(yrsofsrvc>=11)
        {
            bonus=salary*add[i+3];
            p("BONUS: %.2f", bonus);
        }
        else
            p("INVALID ENTRY!");
    tbonus=tbonus + bonus;
    p("\n\nPROCESS ANOTHER?(Y/N): ");
    s("%s", &ans);
    p("\n");
    }while(ans=='Y'||ans=='y');

    p("TOTAL BONUS: %.2f", tbonus);
    getch();
    return 0;
}

/*SAMPLE RUN:

EMPLOYEE NO.		:	1234
EMPLOYEE NAME		:	SQUALL
SALARY			:	32000.00
YEARS OF SERVICE		:	25
BONUS			:	24000.00

PROCESS ANOTHER? (Y/N):  

TOTAL BONUS		:   	99999.99
*/
