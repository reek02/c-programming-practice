#include<stdio.h>

int main() {

  // create an integer variable
  int number = 35;
  printf("Integer Value: %d\n", number);
  
  // explicit type conversion
  double value = (double) number;
  printf("Double Value: %.2lf", value);
    
  return 0;
}