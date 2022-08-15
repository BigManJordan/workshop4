//
//  1-1.cpp
//  workshop4
//
//  Created by Jordan Le on 15/8/2022.
//

#include <stdio.h>
#include <iostream>
using namespace std;
extern int size_of_variable_star_t(int *t);

int main(void){
  
  int a, *p;
  p = &a;
  
  int size = size_of_variable_star_t(p);
  cout << "size = " << size << endl;
  
}
