#include <stdio.h>
#include<conio.h>

void main()
 {
    int n, x, y = 0, rem;
    printf("Enter any number: ");
    scanf("%d", &n);    
    x = n;
    while (n > 0){
        rem = n % 10;
        y = y * 10 + rem;
        n = n / 10;
    }
    if (x == y){
        printf("True"); 
    }
    else{
        printf("False"); 
    } 
    getch();
} 