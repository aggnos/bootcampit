#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int N, zbroj= 0;
  cin >> N;
  for (int i = 0;i < N; i++) zbroj = zbroj + i+1;

  cout << zbroj << endl;
  
  return 0;
}
