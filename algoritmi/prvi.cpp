#include <iostream>
#include <time.h>
using namespace std;

struct Brod
{
  int x;
  int y;
};

int pomakni(Brod &mojBrod) {
  srand(time(NULL));
  mojBrod.x = rand()%20;
  mojBrod.y = rand()%20;
}

int main(int argc, char *argv[])
{
  Brod mojBrod;
  int temp;
  
  cin >> temp;
  mojBrod.x = temp;
  cin >> temp;
  mojBrod.y = temp;
  cout << mojBrod.x << " " << mojBrod.y << endl;
  cout << "Pomakni brod?" << endl;
  cin >> temp;
  pomakni(mojBrod);
  cout << "Pomakni brod?" << endl;

  return 0;
}
