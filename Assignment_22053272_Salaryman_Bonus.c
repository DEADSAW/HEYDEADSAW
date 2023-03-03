#include<stdio.h>

// Done by Sangam Rai 22053272 B-23

#define BASE_SALARY 10000
#define BONUS_RATE 3000
#define COMMISSION_RATE 0.02

void main() {

         int n_272;
         float gs_272, pric_272, bon_272, commr_272;
         
         
         // Doing the code as told by Prof. Tanik Saikh
         printf("Enter the number of cars sold and total price: ");
         scanf("%d %f", &n_272, &pric_272);
         
         
         
         bon_272 = BONUS_RATE* n_272;
         commr_272 = COMMISSION_RATE*n_272*pric_272;
         gs_272 = BASE_SALARY+bon_272+commr_272;
         
         printf("bonus= %6.2f \n", bon_272);
         printf("commission= %6.2f \n", commr_272);
         printf("gross salary= %6.2f \n", gs_272);
         
         

      
}
