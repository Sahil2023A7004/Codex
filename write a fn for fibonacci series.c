//write a fn for fibonacci series
  #include<stdio.h>
  int fib(int n);
  int main()
  {
    printf("%d is fibonacci\n",fib(6));
    return 0;
  }
  //recursion
  int fib(int n)
  {
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    int fibNm1 = fib(n-1);
    int fibNm2 = fib(n-2);
    int fibN = fibNm1 + fibNm2;
    printf("fib of %d is :",n, fibN);
    return fibN;
  }