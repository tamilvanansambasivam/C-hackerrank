#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

void find_nth_term(int n, int a, int b, int c, int sum,int i) {
    int temp;
    if(i<=n)
    {
    sum=a+b+c;
    temp=a;
    a=b;
    b=c;
    c=sum;
    i++;
    find_nth_term(n, a, b, c,sum,i);
    }
    else
    {
        if(n==1)
        {
            printf("%d",a);
        }
        else if(n==2)
        {
            printf("%d",b);
        }
        else {
         printf("%d",c);
        }
    }
    
    
}
int main() {
    int n, a, b, c,sum=0,i=4;
    scanf("%d\n %d %d %d ", &n, &a, &b, &c);
    find_nth_term(n, a, b, c,sum,i);
    return 0;
}