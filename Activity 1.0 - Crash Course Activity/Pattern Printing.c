#include <stdio.h>
int main() {
   int TotalNR, row, space, symbol;
   printf("Enter the number of rows: ");
   scanf("%d", &TotalNR);
   printf("\n");
    for (row = 1; row <= TotalNR; row++)
    {
        for (space = 1; space <= (TotalNR-row); space++)
      printf(" ");
        for (symbol = 1; symbol <= row; symbol++)
      printf(" *");

      printf("\n");
   }
   return 0;
}
