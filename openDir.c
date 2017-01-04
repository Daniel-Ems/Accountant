#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <time.h>

int main ()
{
char files[128];
const char *path = "//home//danny//Test//";
struct stat *buffer = malloc(sizeof(*buffer));
struct dirent *readdir(DIR *dirp);
DIR *filepath = opendir("//home//danny//Test");
struct dirent *dptr;

while((dptr=readdir(filepath)) != NULL){
    strcat(files, dptr->d_name);
    strcat(files, "\n");
    }

printf("%s", files);
char *file = malloc(64 * sizeof(char));

FILE *fp;
char buf[64];

int flag;
while(flag == 0)
{
printf("Type the file you wish to open: ");
scanf("%s", file);
printf("debugging %s\n", file);
strcat(buf, path);
strcat(buf, file);
if(strstr(files,file))
{
    flags = 1;
}

}

fp = fopen(buf,"r"
stat(buf, buffer);
off_t filesize = buffer->st_size;

char *temp = calloc(1, filesize +1);
for(int count = 0; count < filesize; count ++)
    {
       temp[count] = fgetc(fp);
    }

printf("%s\n", temp);

printf("The end of file\n");

free(temp);
free(file);
fclose(fp);
closedir(filepath);
free(buffer);
}
