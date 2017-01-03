#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


char *lowercase(char *yesNo);
int main()
{

int flag = 0;
char *buf = malloc(64 * sizeof(char));
int cor;

while(flag == 0){
    printf("Please Tell me your name: ");
    scanf("%s", buf);
    char *name = buf;

    printf("Did you enter your name correctly? 0 = no, 1 = yes:");
    scanf("%d", &cor);
    flag = cor;   
    }

puts(" ");
printf("I am your accountant\nI will be helping you with your books.\n"
        "Shall we begin? Yes or no?\n");
scanf("%s", buf);

char *yesNo = buf;
lowercase(yesNo);

if (strstr(buf, "no"))
{
printf("Okay, Goodbye.\n");
exit(0);
}

float paycheck;
printf("How much money do you make a paycheck?\n");

scanf("%f", &paycheck);
printf("for clarity, you make %.2f?\n", paycheck);

free(buf);
}

char *lowercase(char *yesNo){
for(int a = 0; a < strlen(yesNo); a++)
{
    yesNo[a]=tolower(yesNo[a]);
}
return yesNo;
}
