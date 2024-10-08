#include <stdio.h>

int main(int argc, char** argv) {
    printf("run show_argc\n");
    int i = 0;
    while(argv[i] != NULL) {
        printf("argv %d = %s\n", i, argv[i]);
        i++;
    }
}