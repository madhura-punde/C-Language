//WAP to find out 50 prime nos. starting from a given no.
#include <stdio.h>

int main(void) {
    int n, k, count = 0;  
    printf("Enter starting number: ");
    scanf("%d", &n);
    
    while (count < 50) {
       
        int is_prime = 1;  // Assume n is prime
        if (n < 2) {
            is_prime = 0;  
        } else {
            for (k = 2; k * k <= n; k++) {  
                if (n % k == 0) {
                    is_prime = 0;  
                    break;
                }
            }
        }

        if (is_prime) {
            printf("%d ", n);  // Print the prime number
            count++;  
        }
        
        n++;  
    }

    printf("\n");  
    return 0;
}
