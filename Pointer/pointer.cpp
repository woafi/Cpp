#include <stdio.h>
#include <iostream>
using namespace std;

void update(int *a,int *b) {
        int c= *a + *b;
        int d = *b - *a;
        *a=c;
        if (d<0)
            d=-d;
        *b=d;
        return;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    //cout<< *pa<<endl;
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}