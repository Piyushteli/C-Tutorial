#include<stdio.h>

    int fib(int n);

    int main (){
         printf("%d\n",fib(0));
         printf("%d\n",fib(1));
         printf("%d\n",fib(2));
         printf("%d\n",fib(3));
         printf("%d\n",fib(4));
         printf("%d\n",fib(5));
         printf("%d\n",fib(6));
         printf("%d\n",fib(7));
         printf("%d\n",fib(8));
         printf("%d\n",fib(9));
         printf("%d\n",fib(10));

        return 0;
    }

    int fib(int n){
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
          
        int fibNm1= fib(n-1);
        int fibNm2 = fib(n-2);
        int fibN = fibNm1 + fibNm2;
        return fibN;

    }
