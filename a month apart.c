// Online C compiler to run C program online
#include <stdio.h>
int  monthApart(int m1,int d1,int y1,int m2,int d2,int y2){
    if(y1==y2){
        return (m2 - m1 == 1 && d1 == d2) || (m1-m2 == 1 &&d1==d2);
    }else if(y2 - y1 == 1){
        return (m1 == 12 && m2 == 1 && d1 == d2) || (m1 == 1 && m2 == 12 && d1 == d2);
    }
    return 0;
    
}
int main() {
    printf("Enter your m1: ");
   int m1;
   scanf("%d",&m1);
   
   printf("Enter your d1: ");
   int d1;
   scanf("%d",&d1);  
   
       printf("Enter your y1: ");
       int y1;
   scanf("%d",&y1);
   
   
   printf("Enter your m2: ");
   int m2;
   scanf("%d",&m2);
   
   printf("Enter your d2: ");
   int d2;
   scanf("%d",&d2);
   
   
       printf("Enter your y2: ");
       int y2;
   scanf("%d",&y2);
   
   
   printf("(%d, %d, %d,%d)",m1,d1,m2,d2);
   
   
    if (monthApart(d1, m1, y1, d2, m2, y2)) {
        printf("The two dates are a month apart.\n");
    } else {
        printf("The two dates are not a month apart.\n");
    }
   
   
  
   
   
   
   

    return 0;
}
