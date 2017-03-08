#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main() {
  float a, s, d, f, g;
  cin >> a >> s >> d >> f >> g;
  float ukupno = (a+ 2*s + 3*d + 4*f + 5*g)/(a+s+d+f+g);
  printf("%.2f\n", ukupno);

  if(ukupno < 2.00 || a > 0) cout << "nedovoljan" << endl;
  else if (ukupno >= 2.00 && ukupno < 2.50) cout << "dovoljan" << endl;
  else if (ukupno >= 2.50 && ukupno < 3.50) cout << "dobar" << endl;
  else if (ukupno >= 3.50 && ukupno < 4.50) cout << "vrlo dobar" << endl;
  else cout << "odlican" << endl;
  
  return 0;
  
}
