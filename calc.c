/*
  calc.c Source Code
  Written by @SPFck
*/

#include <stdio.h>

int main() {
  printf("Starting...\n");
  while(1) {
    float n1,n2;
    char op;
    scanf("%f %s %f", &n1, &op, &n2);
    switch(op) {
      case '+':
      printf("Result: %.2f\n", n1+n2);
      break;
      case '-':
      printf("Result: %.2f\n", n1-n2);
      break;
      case ':':
      printf("Result: %.2f\n", n1/n2);
      break;
      case 'x':
      printf("Result: %.2f\n", n1*n2);
      break;
      default: printf("Error!\n");
    }
  }
  return 0;
}