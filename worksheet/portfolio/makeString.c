
/*
Name: Joshua Daniel
Student ID: 201973385
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    char buffer[100] = "";
    int i;

    for (i = 1; i < argc; i++) {
        strcat(buffer, argv[i]);
        if (i < argc - 1) {
            strcat(buffer, "-");
        }
    }

    printf("%s\n", buffer);

    return 0;
}
