// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int n=6; 
   for(int row=1;row<=n;row++){
    //   for(int col=n-1;col>=row;col--){
    //       printf("  ");
    //   }
    for(int col=n-1;col>=row;col--){
           printf("  ");
       }
       for(int col=1;col<=row;col++){
           printf("* ");
       }
       printf("\n");
   }
      for(int row=1;row<=n;row++){
          for(int col=1;col<=row;col++){
           printf("  ");
       }
       for(int col=n-1;col>=row;col--){
           printf("* ");
       }
    //     for(int col=1;col<=row;col++){
    //       printf("  ");
    //   }
       printf("\n");
   }
    return 0;
}