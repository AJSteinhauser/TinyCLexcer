#include <stdio.h>


int findPower(int x, int power){
  int returnValue = x;
  int i = 0;
  while (i > power){
  	returnValue = returnValue * x;
  	i = i + 1;
  }
  return returnValue;
}
