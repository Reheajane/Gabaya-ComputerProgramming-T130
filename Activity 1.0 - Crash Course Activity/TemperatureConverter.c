#include <stdio.h>
int main() {
    float originalTemp, convertedTemp; char option, converted;
        printf("TEMPERATURE CONVERTER\n\n[f]- Fahrenheit\n[c]- Celsius\n[k]- Kelvin\n\n");
        printf("Input orignal temperature value: ");
        scanf("\n%f", &originalTemp);
        printf("Select orignal temperature scale: ");
        scanf("\n%c", &option);
        printf("Select converted temperature scale: ");
        scanf("\n%c", &converted);
    if (option == 'f' || option == 'F') {
    if (converted == 'c' || converted == 'C') { convertedTemp = (originalTemp - 32) * 5 / 9; }
    else if (converted == 'k' || converted == 'K') { convertedTemp = (originalTemp - 32) * 5 / 9 + 273.15; }
    else if (converted == 'f' || converted == 'f') { convertedTemp = originalTemp; }
    else {
        printf("%c is not a valid input!", converted);
    return -1; } }
    else if (option == 'c' || option == 'C') {
    if (converted == 'c' || converted == 'C') { convertedTemp = originalTemp; }
    else if (converted == 'k' || converted == 'K') { convertedTemp = originalTemp + 273.15; }
    else if (converted == 'f' || converted == 'f') { convertedTemp = (originalTemp * 9 / 5) + 32; }
    else {
        printf("%c is not a valid input!", converted);
    return -1; } }
    else if (option == 'k' || option == 'K') {
        if (converted == 'c' || converted == 'C') { convertedTemp = originalTemp - 273.15; }
        else if (converted == 'k' || converted == 'K') { convertedTemp = originalTemp; }
        else if (converted == 'f' || converted == 'f') { convertedTemp = (originalTemp - 273.15) * 9 / 5 + 32; }
        else {
            printf("%c is not a valid input!", converted); return -1; } }
            else {
            printf("%c is not a valid input!", converted); return -1; }
            printf("%.2f %c = %.2f %c", originalTemp, option, convertedTemp, converted);
return 0; }
