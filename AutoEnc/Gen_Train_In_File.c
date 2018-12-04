#include<stdlib.h>
#include<stdio.h>

int main(int argc, char *argv[]) {

    FILE *fd;
    fd = fopen(argv[1], "r");

    int a;
    while(fscanf(fd, "%d", &a) != EOF) 
        printf("%d ", a);

    fclose(fd);
    return 0;    
}