#include<stdio.h>
int main()
{
    float iw1, iw2, nop1, nop2, average;
    printf("Weight of item1: ");
    scanf("%f", &iw1);
    printf("\nWeight of item2: ");
    scanf("%f", &iw2);
    printf("\nNo. of item1 purchases: ");
    scanf("%f", &nop1);
    printf("\nNo. of item2 purchases: ");
    scanf("%f", &nop2);
    average = ((iw1 * nop1) + (iw2 * nop2)) / (nop1 + nop2);
    printf("\nAverage value = %f", average);
    return 0;
}
