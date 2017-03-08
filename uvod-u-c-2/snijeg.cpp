#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main() {
  int granica, jutro, dan, noc, sutra;
  cin >> granica >> jutro >> dan >> noc;

  sutra = jutro - dan + noc;
  
  cout << sutra << endl;

  if(sutra > granica)
     cout << "NE" << endl;
  else cout << "DA"<< endl;

  return 0;
  
}
