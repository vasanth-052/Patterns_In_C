// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number ");
    
    scanf("%d",&n);
    
    for(int row=1;row<=n;row++){
        
        for(int col=1;col<=row;col++){
           
            printf(" ");
        }
        for(int col=n;col>=row;col--){
            if(row==1||col==1||row==col ||col==n)
            printf("* ");
            
            else
            printf("  ");
        }
        printf("\n");
       
    }
    return 0;
}