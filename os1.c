#include <stdio.h>
#include <stdlib.h> // Include the stdlib.h header for the exit function
#include <dirent.h>

struct dirent *dptr;

int main(int argc, char *argv[]) {
    char buff[100];
    DIR *dirp;

    printf("\n\n ENTER DIRECTORY NAME: ");
    scanf("%s", buff);

    if ((dirp = opendir(buff)) == NULL) {
        printf("The given directory does not exist\n");
        exit(1);
    }

    while ((dptr = readdir(dirp)) != NULL) {
        printf("%s\n", dptr->d_name);
    }

    closedir(dirp);

    return 0;
}
