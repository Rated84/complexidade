#include <stdio.h>
    int fib(int n);
    int main (){
    int n = 30;
    printf("%d\n",fib(n));
}

    int fib(int n){
    if(n < 2){
    return 1;
}else{
    return fib(n-1) + fib(n-2);
}

}