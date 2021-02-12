



int findPower(int x, int power){
  int returnValue = x;
  for (int i = 0; i < power; i++){
    x = x * x;
  }
  return returnValue;
}
