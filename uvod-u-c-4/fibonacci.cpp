#include <iostream>
using namespace std;

int fibonacci(int broj){
  if(broj == 0) return 0;
  if(broj == 1) return 1;
  return fibonacci(broj-1) + fibonacci(broj-2);
}

int main(int argc, char *argv[])
{
  int broj;
  cin >> broj;

  cout << fibonacci(broj) << endl;
  
  return 0;
}
