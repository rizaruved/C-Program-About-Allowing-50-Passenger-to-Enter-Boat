#include <stdio.h>

int main() {
  int n = 100; //Maximum passengers allowed to enter boat
  int threshold =; //Variable to hold 50% of passengers counts
  
  threshold = n * (50.0/100); //Formula to calculate 50% of total passenger
  
  for(int i = 0; i < n; i = i + 10) {
    if (i > threshold) {
      printf("50%% of total capacity reached!\n");
      break;
    }
    
    printf("Passengers onboarded - %d\n", i);
  }
  
  return 0;
}
