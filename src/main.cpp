#include "add/add.hpp"
#include <iostream>
#include "multiply/multiply.hpp"
#include "divide/divide.hpp"

int main(){
  std::cout << "HELLO LIBS" << std::endl;
  std::cout << super_math::add(12,12)<< std::endl;
  std::cout << multiply(12,12) << std::endl;
  std::cout << divide(35,4) << std::endl;
  return EXIT_SUCCESS;
}

