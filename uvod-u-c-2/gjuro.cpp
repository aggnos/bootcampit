#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  
  if (n%5 < 3 || n%5 == 0) cout << n-n%5 << endl;
  else cout << n+(5 - n%5) << endl;
  
  return 0;
}
