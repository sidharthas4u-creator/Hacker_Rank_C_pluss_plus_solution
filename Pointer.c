#include <stdio.h>
#include <cmath>
int update(int *a,int *b) {
    // Complete this function  
    int sum,sub;
    sum=*a+*b;
    sub=std::abs(*a-*b);
    *a=sum;
    *b=sub;
     return *a,*b;    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
