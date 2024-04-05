#include<stdio.h>

int main() {
    union Data {
        int n;
        float fl;
        char ch;
    };
    union Data dt;

    printf("Enter data(integer,float,character):");
    scanf("%d %f %c", &dt.n ,&dt.fl, &dt.ch);

    printf("Data in union is:%d \t %.2f \t %c",dt.n,dt.fl,dt.ch);
    
    return 0;
}   