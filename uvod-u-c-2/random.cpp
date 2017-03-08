#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() {
  int a;
  
  srand(time(NULL));
  int gen = rand()%100;

  while(a != gen) {
    cin >> a;
    if (a > gen) cout << "manje" << endl;
    else if (a < gen) cout << "vise" << endl;
    else cout << "pogodak" << endl;
  }
  
  return 0;
}
