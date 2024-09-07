// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    for(int i=1;i<7;i++){
        for(int j=1;j<i;j++){
            printf("    ");
        }
        for(int j=1;j<7;j++){
            if(i==6||i==1||j==1||j==6)
            printf("*    ");
            else
            printf("     ");
        }
        
        printf("\n");
    }

    return 0;
}