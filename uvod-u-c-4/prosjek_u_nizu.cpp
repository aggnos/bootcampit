#include <iostream>
using namespace std;

int zbrajanje(int broj, int b) {
  return broj+b;
}

int main(int argc, char *argv[])
{
  int a, b, zbroj = 0;
  cin >> a;
  for (int i = 0;i < a; i++) {
    cin >> b;
    zbroj = zbrajanje(zbroj, b);
  }
  cout << zbroj/a << endl;
  return 0;
}
