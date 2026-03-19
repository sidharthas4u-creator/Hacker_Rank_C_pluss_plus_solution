#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
      int a, b;
    scanf("%d\n%d", &a, &b);
        for(int i=a;i<=b;i++)
    {
        int n=i;
         if(0<n && n<=9 && n<10)
    {
        if(1==n)
        {
            printf("one");
        }
        if(2==n)
        {
            printf("two");
        }
        if(3==n)
        {
            printf("three");
            
        }
        if(4==n)
        {
            printf("four");
        }
        if(5==n)
        {
            printf("five");
        }
        if(6==n)
        {
            printf("six");
        }
        if(7==n)
        {
            printf("seven");
        }
        if(8==n)
        {
            printf("eight");
        }
        if(9==n)
        {
            printf("nine");
        }
        
    }
    else
    {
       if (i%2==0)
       {
        printf("even");
       }
       else
       {
        printf("odd");
       }
    }
      printf("\n");
    }
    return 0;
}
