#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void stats(FILE *fd) {
    
    long double a[100];
    long double mean = 0;
    char c;
    fscanf(fd, "%c", &c);
    fscanf(fd, "%c", &c);
    printf("%c \n", c);
    for(int i = 0; i < 100; i++) {
        fscanf(fd, "%Lf", &a[i]);
        a[i] /= 1000000000;
        mean += a[i];
        //printf("%lld\n", a[i]);
    }
    mean /= 100;

    //Now to calcualte the variance
    long double var = 0;
    for(int i = 0; i < 100; i++) {
        var += ((mean - a[i]) * (mean - a[i]));
    }

    var /= 100;
    
    //mean /= 1000000;
    //var /= 1000000;
    printf("Mean = %Lf\n", mean);
    printf("Variance = %Lf\n", var);
    printf("Standard Deviation = %f", sqrt(var));
    printf("\n");


}


int main(int argc, char *argv[]) {

    FILE *fd = fopen(argv[1], "r");

    //For each line rake the first 2 char then find the variance for the rest
    stats(fd);
    stats(fd);
    stats(fd);
    stats(fd);

    fclose(fd);

    return 0;

}