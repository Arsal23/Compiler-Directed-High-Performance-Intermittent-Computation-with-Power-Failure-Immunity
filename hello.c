#include <stdio.h>
int main() {
  int n = 123321, reversed = 0, remainder, original;
    
    original = n;

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (original == reversed)
        printf("%d is a palindrome.", original);

    else printf("%d is not a palindrome.", original);

    return 0;
}