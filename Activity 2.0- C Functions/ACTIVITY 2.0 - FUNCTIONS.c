#include <stdio.h>
int avg (int a, int b, int c, int d, int e);
int main()

{ int n1,n2,n3,n4,n5, sum;
    printf("Enter Five Numbers: \n");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5); avg(n1,n2,n3,n4,n5);

return 0;

} int avg (int a, int b, int c, int d, int e) {
int average; average = (a+b+c+d+e)/5;
    printf("Average = %d", average);

return average; }
