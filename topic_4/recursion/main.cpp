#include <cstddef>
#include "test.h"
size_t itFib(size_t);
size_t recFib(size_t);
size_t gcd(size_t, size_t);


int main(int argc, char const *argv[]){
    /*
    testTrue(recFib(0) == 0, "fib(0) == 0");
    testTrue(recFib(1) == 1, "fib(1) == 1");
    testFalse(recFib(0) == 1, "fib(0) == 1");
    testTrue(recFib(5) == 5, "fib(5) == 5");
    testTrue(recFib(10) == 55, "fib(10) == 55");
    testTrue(recFib(30) == 832040, "fib(30) == 832040");
    testTrue(recFib(50) == 12586269025, "fib(50) == 12586269025");
    */
    testTrue(gcd(50, 10) == 10, "gcd(50, 10) == 10");
    testTrue(gcd(51, 17) == 1, "gcd(51, 17) == 1");
    return 0;
}

size_t itFib(size_t n){

    size_t trailing(0);
    size_t leading(1);
    size_t tmp;
    
    if(n <= 1) return n;
    
    for(size_t i = 2; i <= n; ++i){
         tmp = trailing + leading;
        trailing = leading;
        leading = tmp;
    }
    return leading;
}

size_t recFib(size_t n){


    int left;
    int right;

    if(n <= 1) return n;

    left = recFib(n-1);
    right = recFib(n-2);

    return left + right;
}

size_t gcd(size_t a, size_t b){

    if(b == 0) return a;
    return gcd(b, a % b);
}
