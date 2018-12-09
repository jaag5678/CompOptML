//This program will take the features and labels generated and combine it to one file as well as make an additional file to store just labels

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {


    FILE *fd1, *fd2, *fd3;

    fd1 = fopen(argv[1], "r"); //feature set
    fd2 = fopen(argv[2], "r"); //label set
    fd3 = fopen(argv[3], "w");

    char *ptr = NULL;
    size_t len = 0;
    size_t read = 0;
    char *name;
    int label;


    while(1) {
        if(fscanf(fd2, "%s", name) == EOF)
            break;
        printf("%d ", fscanf(fd2, "%d", &label));
        read = getline(&ptr, &len, fd1);
        ptr[read - 1] = '\0';
        for(int i = 0; i < read; i++) 
            printf("%c", ptr[i]);
        printf("%zu\n", len);
        fprintf(fd3 ,"%s%d\n", ptr, label);
        //printf("%s %d\n", name, label);
    }
 
    //printf("#saa\n");
    fclose(fd3);
    fclose(fd2);
    fclose(fd1);

    return 0;

}