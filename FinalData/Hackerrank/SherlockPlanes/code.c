#include<stdio.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long int T;
    //vector<long int> x, y, z;
    long int dx1, dx2, dx3;
    long int dy1, dy2, dy3;
    long int dz1, dz2, dz3;
    
    T = 10000;
    
    while(T--) {
        long int xs, ys, zs;
        int v = 4;
        int x[4], y[4], z[4];
        while(v--) {
            scanf("%ld%ld%ld", &xs, &ys, &zs);
            x[v] = xs;
            y[v] = ys;
            z[v] = zs;
        }
        dx1 = x[0] - x[1];
        dx2 = x[1] - x[2];
        dx3 = x[2] - x[3];
        
        dy1 = y[0] - y[1];
        dy2 = y[1] - y[2];
        dy3 = y[2] - y[3];
        
        dz1 = z[0] - z[1];
        dz2 = z[1] - z[2];
        dz3 = z[2] - z[3];
        
        if((((dy1 * dz2) - (dy2 * dz1)) * dx3) - (((dx1 * dz2) - (dx2 * dz1)) * dy3) + (((dx1 * dy3) - (dx3 * dy1)) * dz3))
            printf("");
                       
    }
    return 0;
}
