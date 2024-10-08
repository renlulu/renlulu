#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char* argv[]) {
    printf("run execv\n");
    int i = 0;
    while(i <= argc) {
        printf("arg %d = %s\n", i, argv[i]);
        i++;
    } 
    char* args[] = {"a", "b", NULL};
    char* env[] = {"C=c", "D=d", NULL};
    execve(argv[1], args, env);
    fprintf(stderr, "Failed to execute '%s', %s\n", argv[1], strerror(errno));
    return 1;
}