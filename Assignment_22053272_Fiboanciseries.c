// Done by Sangam Rai 22053272 B-23

#include <stdio.h>
int main() {

  int i, n;

  // setting first and second terms which are 0 and 1
  int firstnum_272 = 0, secondnum_272 = 1;

  // this will produce third term
  int next_272 = firstnum_272 + secondnum_272;

// obtains the input from user
  printf("Enter numbers: ");
  scanf("%d", &n);

// first two numbers 
  printf("Fibonacci Series: %d, %d, ", firstnum_272, secondnum_272);

// code starts giving output here
  for (i = 3; i <= n; ++i) {
    printf("%d, ", next_272);
    firstnum_272 = secondnum_272;
    secondnum_272 = next_272;
    next_272 = firstnum_272 + secondnum_272;
  }

  return 0;
  // code ends here
  
}

