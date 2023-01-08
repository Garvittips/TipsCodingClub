#include<conio.h>
#include<stdio.h>
void main()
{
    int G,S,A,B;
    // G=cost of gold per gram.
    // S=cost of silver per gram.
    // A=grams of golden egg.
    // B=grams of silver egg.
    printf("Enter the weight of gold egg in grams:");
    scanf("%d",&A);
    printf("Enter the weight of silver egg in grams:");
    scanf("%d",&B);
    printf("Enter the cost of gold per gram :");
    scanf("%d",&G);
    printf("Enter the cost of silver per gram :");
    scanf("%d",&S);
    if(G*A>S*B)
        printf("Gold");
    else
        printf("Silver");
    getch();
}