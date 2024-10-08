#include <stdio.h>

extern char **environ;

int main(int argc, char* argv[]) {
    printf("run show_env\n");
    char** e = environ;
    int i = 0;
    while(e[i] != NULL) {
        printf("env %d = %s\n", i, e[i]);
        i++;
    }
}