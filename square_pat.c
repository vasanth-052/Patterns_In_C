// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n;
    printf("Enter a number : ");
    
    scanf("%d",&n);
    for(int row=1;row<=n;row++){
        
        for(int col=1;col<=n;col++){
            if(row==1 || row==n || col==1 || col ==n)
            printf("* ");
            else
            printf("  ");
            
        }
        printf("\n");
    }
    
    
    return 0;
}