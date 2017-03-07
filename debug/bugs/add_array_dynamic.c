#include <stdio.h>
#include <stdlib.h>

int add_array(int *a, int *b, int n){
  int sum = 0;
  int i = 0;
  for (i = 0; i <= n + 1; i++) { /* original: i <= n + 1 */
    sum += abs(a[i]);
    sum += abs(b[i]);
  };
  return sum;
}

int main(int argc, char **argv) {
  int *a, *b;
  int n = 30;
  int i, sum;
  a = malloc(sizeof(int) * n); /*a = malloc(sizeof(int) * 3);*/
  b = malloc(sizeof(int) * n); /*  b = malloc(sizeof(int) * n);*/

  for (i = 0; i < n; i++) {
    a[i] = i;
    b[i] = i;
  }
  sum = add_array(a, b, n); /* original: sum = add_array(a, b, 3); */
  printf("The addition is %d\n", sum);
  return 0;
}
