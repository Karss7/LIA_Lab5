#include <iostream>
#include "MathOps.h"

int main(int argc, char* argv[]){
  std::cout << "Enter a number: ";

  int num = 0;
  std::cin >> num;
  
  auto mops = MathOps();
  std::cout << mops.fact(num) << std::endl;

  return 0;
}
