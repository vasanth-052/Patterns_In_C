// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n;
    printf("Enter a number : ");
    
    scanf("%d",&n);
    for(int row=1;row<=n;row++){
         for(int col=n;col>=row;col--){
            printf(" ");
        }
        
        for(int col=1;col<=row;col++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}