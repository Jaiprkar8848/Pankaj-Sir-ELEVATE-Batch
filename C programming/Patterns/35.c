/*
1
123
12345
1234567
123456789
1234567
12345
123
1
*/

#include<stdio.h>
void main(){
    int n=5;

    int row,col;
    // UPPER PORTION
    for(row=1;row<=n;row++){
        for(col=1;col<=2*row-1;col++){
            printf("%d",col);
        }
        printf("\n");
    }
    // LOWER PORTION
    for(row=1;row<n;row++){
        for(col=1;col<=2*(n-row)-1;col++){
            printf("%d",col);
        }
        printf("\n");
    }
}