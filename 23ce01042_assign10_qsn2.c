#include<stdio.h>
int main() {
    struct Str
    {
        int a,b;
        char c;
    };

    union uni
    {
        int d,e;
        char f;
    };
    
    struct Str st;
    union uni u;

    printf("Size of structure data types:%d\n",sizeof(st));
    printf("Size of union data types:%d",sizeof(u));

    return 0;
}