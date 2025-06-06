#include <stdio.h> 
#include <time.h>  
#include <stdlib.h>


int fibonacci_iterativo(int n) {
    
    if (n <= 1)
        return n;

   
    int prev = 0; 
    int curr = 1; 
    int next;     

    
    for (int i = 2; i <= n; i++) {
        next = prev + curr; 
        prev = curr;       
        curr = next;        
    }
    return curr; 

int main(int argc, char* argv[]) {
  
    if (argc < 3) {
        printf("Ei! Você esqueceu de algo!\n");
        printf("Tenta assim: %s <numero_do_fibonacci> <quantas_vezes_repetir>\n", argv[0]);
        return 1; 
    }

   
    int n = atoi(argv[1]);
    
    int n_max = atoi(argv[2]);

    
    clock_t start, end;
    double tempo_total = 0.0;
    int resultado;

   
    for (int i = 0; i < n_max; i++) {
        start = clock(); 
        resultado = fibonacci_iterativo(n); 
        end = clock();  
        tempo_total += ((double)(end - start)) / CLOCKS_PER_SEC;
       
        printf("Progresso: %.2f%% feito!\n", ((i + 1) / (double)n_max) * 100);
    }


    
    printf("Tempo médio: %f\n", (tempo_total / n_max) * 1e6);

    return -1;
}