#include <stdio.h>

int sum(int n)
{
  if (n == 0) return 0;
<<<<<<< HEAD
  return n + sum(n-1);
=======
  if (n == 1) return 1;
  return fib(n-1) + fib(n-2);
>>>>>>> develop
}

int main()
{
  printf("Hello world!\n");
  printf("%d\n", fib(5));
  return 0;
}
