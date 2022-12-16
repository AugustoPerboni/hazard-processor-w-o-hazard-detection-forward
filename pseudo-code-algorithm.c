/* The following example was giving as a exercise of the computer arquiteture course at
Instituto Superior Tecnico de Lisboa*/
#include <stdio.h>
#include <stdlib.h>
int main()
{   int N = 12;
    int a[] = {1, 5, 6, 6, 7, 2, 5, 2, 3, 2, 3, 4};
    int b[] = { 4, 3, 1, 7, 2, 4, 9, -3, 5, 8, 1, 9};
    int x = 1;
    int n = 0;
    register int i = 0;
    while (b[i]>0){
        x *= a[i] + a[N-1-i];
        n += (N-1-i) - i;
        i ++;
        //printf("i=%d x=%d n=%d\n",i,x,n);
    }
}
