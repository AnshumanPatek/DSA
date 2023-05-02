#include <stdio.h>
int fib(int n ){
  if(n<=1){
    return 1;
    printf("Enter the number");
  }
  return fib (n-1)+fib(n-2);
}

int main() {
int input;
  printf("Enter the number-->");
  scanf("%d",&input);
  printf("%d",fib(input));
  return 0;
}
