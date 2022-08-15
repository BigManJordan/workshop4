#include <stdio.h>
#include <iostream>
using namespace std;

int size_of_variable_star_t(int *t){
  
  int size = sizeof(*t);
  return size;
}
