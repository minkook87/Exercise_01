// Project

#include <studio.h>

int foo(); // 조원 1 할당
int poo(); // 조원 2 할당
int zoo(); // 조원 3 할당

main()
{
  int a, b, c;
  printf("This is project for Git/Github\n!");
  
  a = foo();
  b = poo();
  c = zoo();
  
  int final_result = a + b + c;
  
  return 0;
}
