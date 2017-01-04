#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>
#include <time.h>

int main ()
{
char buf[64];
const char *path = "//home//danny//Test//";

struct dirent *readdir(DIR *dirp);
DIR *filepath = opendir("//home//danny//Test");

struct dirent *dptr;

while((dptr=readdir(filepath)) != NULL){
    printf("%s\n", dptr->d_name);
    }

char *file = malloc(64 * sizeof(char));
printf("Type the file you wish to open: ");
scanf("%s", file);

printf("debugging %s\n", file);
strcat(buf, path);
strcat(buf, file);


FILE *fp;

fp = fopen(buf, "r");

fgets(buf, 20, fp);
printf("%s\n", buf);

printf("The end of file\n");
free(file);
fclose(fp);
closedir(filepath);
}
