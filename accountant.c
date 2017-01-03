#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


char *lowercase(char *yesNo);
int main()
{

//TODO Implement a load function. Probably try and list all files found in a 
// particular file path and then allow the user to select what they want to do. 

//TODO You also need to create unique file names. 
FILE *fp = fopen("//home//danny//Desktop//test.txt", "w");



int flag = 0;
char *buf = malloc(64 * sizeof(char));
char *yesNo;

while(flag == 0){
    printf("Please Tell me your name: ");
    scanf("%s", buf);
    char *name = buf;
    printf("Debug Name: %s\n", name);

    printf("Did you enter your name correctly? yes or no?:");
    scanf("%s", buf);
    yesNo = lowercase(buf);
    
    if(strstr(yesNo, "n"))
    {
        flag = 0;  
    }
    else
    {
        flag = 1;
    }
       
    }

puts(" ");

printf("I am your accountant\nI will be helping you with your books.\n"
        "Shall we begin? Yes or no?:");

scanf("%s", buf);

lowercase(yesNo);

if (strstr(buf, "no"))
{
printf("Okay, Goodbye.\n");
exit(0);
}
puts(" ");
float paycheck;
printf("How much money do you make a paycheck?\n");
scanf("%f", &paycheck);

//TODO Make the file write reflect their selection for weekly, biweekly,
// or monthly. This should probably be done in the if statents, while 
// probably also creating respective varibales to carry thoughout the program. 
fprintf(fp,"paycheck = %.2f", paycheck);


int menu;

printf("do you make %.2f\n(0)weekly\n(1)biweekly\n(2)monthly\n", paycheck);
scanf("%d", &menu);

if(menu == 0)
{
    printf("That means you bring home %.2f a month\n%.2f a quarter\n%.2f a year\n",
             (paycheck * 4), (paycheck * 13), (paycheck * 52));
}
else if(menu == 1)
{
    printf("That means you bring home %.2f a month\n%.2f a quarter\n%.2f a year\n",
             (paycheck * 2), ((paycheck/2)*13), ((paycheck/2) * 52));
}
else if(menu == 2)
{
     printf("That means you bring home %.2f biweekly\n%.2f a quarter\n%.2f a year\n",
             (paycheck/2), ((paycheck/4)*13), ((paycheck/4) * 52));
}

puts(" ");

float bills;
printf("Okay, and how much do you pay in bills a month?:");
scanf("%f", &bills);

printf("That means you have %.2f of expendable cash a month\n %.2f a year\n",
        ((paycheck * 2) - bills), (((paycheck*2) - bills) * 12));

fclose(fp);
free(buf);
}

char *lowercase(char *yesNo){
for(size_t a = 0; a < strlen(yesNo); a++)
{
    yesNo[a]=tolower(yesNo[a]);
}
return yesNo;
}
