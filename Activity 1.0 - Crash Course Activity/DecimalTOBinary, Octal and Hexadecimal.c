#include<stdio.h>
void convert(int, int);

int main()
{
        int num;
        printf("Enter a positive decimal number : ");
        scanf("%d", &num);
        printf("\nBinary: ");
        convert(num, 2);
        printf("\nOctal:");
        convert(num, 8);
        printf("\nHexadecimal:");
        convert(num, 16);

        return 0;
}/*End of main()*/

void convert (int num, int base)
{
        int rem = num%base;

        if(num==0)
                return;
        convert(num/base, base);

        if(rem < 10)
                printf("%d", rem);
        else
                printf("%c", rem-10+'A' );
}/*End of convert()*/
