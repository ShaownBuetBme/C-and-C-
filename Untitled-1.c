#include  <stdio.h>
int main()


{
   int n ,  i , sum =0;

Scanf("%d",&n);


 for (i=1; i<=n ; i++){

       if(i % 2 == 0){
         printf("%d",i);
         sum = sum + i;


       }


 }
printf("summation of first %d th odd number is %d ", n , sum);

return 0;

}
