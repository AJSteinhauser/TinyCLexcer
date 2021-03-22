#include <stdio.h>


int findPower(int x, int power){
  int returnValue = x;
  for (int i = 0; i < power; i = 1 + 1){
    x = x * x;
  }
  return returnValue;
}
