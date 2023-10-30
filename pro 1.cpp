#include <stdio.h>
#include<stdio.h>
int power(int n1, int n2);	
int main() {
	//to know the power of number given code
    int base, a, result;
    
    printf("\n\n\t\t\t\t\t\tEnter a number : ");
    //to enter number
    printf("\n\t\t\t\t\t\t\t*");
    printf("\n\t\t\t\t\t\t\t*");
    printf("\n\n\n\n\n\t\t\t\t\t\tpower of the number :");
     printf("\n\t\t\t\t\t\t\t*");
     printf("\n\t\t\t\t\t\t\t*");
printf("\n\n\n\n\n\t\t\t\t\t\tEnter base number: ");
// to enter base of the number
 printf("\n\t\t\t\t\t\t\t*");
 printf("\n\t\t\t\t\t\t\t*");
scanf("%d", &base);
printf("\n\n\n\n\n\t\t\t\t\t\tEnter power number(positive integer): ");
 printf("\n\t\t\t\t\t\t\t*");
 printf("\n\t\t\t\t\t\t\t*");
scanf("%d", &a);
    result = power(base, a);//to know power of the base
     printf("\n\t\t\t\t\t\t\t*");
     printf("\n\t\t\t\t\t\t\t*");
printf("\n\n\n\n\n\t\t\t\t\t\t\t%d^%d = %d", base, a, result);
    return 0;
}

int power(int base, int a) {
    if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
}
