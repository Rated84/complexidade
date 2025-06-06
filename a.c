#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int fib[2000] = {0};

int fibonacci2(int n){
  if(n <=1 ){
    return n;
  }
  if(fib[n] != 0){
    return fib[n];
  }
  fib[n] = fibonacci2(n-1) + fibonacci2(n-2);
  return fib[n];
}
