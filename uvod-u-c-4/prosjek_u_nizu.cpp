#include <iostream>
using namespace std;

int zbrajanje(int broj) {
  int b;
  cin >> b;
  return broj+b;
}

int main(int argc, char *argv[])
{
  int a, zbroj = 0;
  cin >> a;
  for (int i = 0;i < a; i++) {
    zbroj = zbrajanje(zbroj);
  }
  cout << zbroj/a << endl;
  return 0;
}
