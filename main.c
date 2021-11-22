/*
converting decimal numbers to binary numbers
*/
#include <stdio.h>
#include <stdlib.h>

 long decimal To Binary(long n);
int main(){
    long decimal;
    printf("enter a decimal number/n");
    scanf(%1d%,& decimal);
    printf("binary number of %1d is %1d*,decimal,decimal to binary (decimal));
    getch ();
    return 0:

}

/* function to convert a binary number to decimal number */
long binary to decimal (logn){
    int remainder;
    long decimal=0 1=0;
    while (n !=0){
        remainder =n% 10;
        n=n/10;
        decimal =decimal+(remainder * pow (2,1));
        +1;
    }
    return decimal;
}




