#include <stdio.h>
#include <vector>

using namespace std;

int main() {
  vector <int> a = {1,2,3,4,5,6,7,8,9,10,11};
  
  int b = 0;
  
  for(int i = 1; i < a.size(); i += 2) {
    printf("%d\n", a[i]);
    
    b = a[i];
    
    a[i] = a[i-1];
    
    a[i-1] = b;
  }
  
  printf("--------------------\n");
  
  for(int i = 0; i < a.size(); i++) {
    printf("%d\n", a[i]);
  }
}
