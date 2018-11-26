#include<stdio.h>



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int px, py, qx, qy, rx, ry;
    int n = 10;
    
    while(n--) {
        scanf("%d%d%d%d", &px, &py, &qx, &qy);
        
        printf("%d %d\n", - px + 2 * qx, - py + 2 * qy);
    }
    return 0;
}

/* 
1 1 2 2
4 3 5 2
2 4 5 6
1 2 2 2
1 1 1 1
1 2 2 1
1 8 7 8
9 1 1 1
8 4 3 2
7 8 9 1
*/