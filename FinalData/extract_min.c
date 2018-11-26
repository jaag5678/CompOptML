// Code to take the statistics gathered from each file and then just taking the min execution time for it and output the label

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {

    FILE *f;
    f = fopen(argv[1], "r");

    char o0[2], o1[2], o2[2], o3[2];
    unsigned long long int t0, t1, t2, t3;
    fscanf(f, "%s", &o0[0]);
    fscanf(f, "%llu", &t0);
    fscanf(f, "%s", &o1[0]);
    fscanf(f, "%llu", &t1);
    fscanf(f, "%s", &o2[0]);
    fscanf(f, "%llu", &t2);
    fscanf(f, "%s", &o3[0]);
    fscanf(f, "%llu", &t3);
    
    

    //printf("%s %s %s %s \n", o0, o1, o2, o3);
    char final = o2[1];
    unsigned long long int min_time = t2;
    
    /*
    if(min_time > t1) {
        final = o1[1];
        min_time = t1;
    }
    if(min_time > t2){
        final = o2[1];
        min_time = t2;
    }*/
    if(min_time > t3){
        final = o3[1];
        min_time = t3;
    }
    
    printf("%c", final);

    fclose(f);
    return 0;
}