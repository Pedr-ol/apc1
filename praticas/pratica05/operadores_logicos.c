#include <stdio.h>

int main(){
  int p = 0;
  int q = 0;
  scanf("%i", &p);
  scanf("%i", &q);

  printf("%i && %i = %i\n", p, q, p && q);
  printf("%i || %i = %i\n", p, q, p || q);
  printf("!%i = %i\n", p, !p);
  printf("!%i = %i\n", q, !q);


  return 0;
}