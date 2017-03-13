#include <iostream>
#include <string>
using namespace std;

bool checkSel(int xy[]) {
  if (xy[0] < 0 || xy[0] > 4 || xy[1] < 0 || xy[1] > 4 ) return false;
  else return true;
}


int neighbours(string tablica[], int x, int y, string slovo){
  if(checkSel(x-1, y-1) && tablica[x-1][y-1] == slovo) {
    
    neighbours(tablica, x-1, y-1, tablica[x-1][y-1]);
  }

  if(checkSel(x-1, y) && tablica[x-1][y] == slovo)
	neighbours(tablica, x-1, y, tablica[x-1][y]);
  if(checkSel(x-1, y+1) && tablica[x-1][y+1] == slovo)
	neighbours(tablica, x-1, y+1, tablica[x-1][y+1]);
  if(checkSel(x, y-1)  && tablica[x][y-1] == slovo) 
	neighbours(tablica, x, y-1, tablica[x][y-1]);
  if(checkSel(x, y+1)  && tablica[x][y+1] == slovo) 
	neighbours(tablica, x, y+1, tablica[x][y+1]);
  if(checkSel(x+1, y-1)  && tablica[x+1][y-1] == slovo) 
    neighbours(tablica, x+1, y-1, tablica[x+1][y-1]);
  if(checkSel(x+1, y)  && tablica[x+1][y] == slovo) 
    neighbours(tablica, x+1, y, tablica[x+1][y]);
  if(checkSel(x+1, y+1)  && tablica[x+1][y+1] == slovo) 
    neighbours(tablica, x+1, y+1, tablica[x+1][y+1]);


}

int main(int argc, char *argv[])
{
  string tablica[5],findMe;
  int x,y;
  
  for(int i = 0; i< 5; i++) {
    cin >> tablica[i];
  }
  cin >> findMe;

  for(int i = 0; i < 5; i++)
    for(int j = 0; j < 5; j++)
      if(tablica[i] == findMe[0]) {
	x = i; y = j;
      }

  
  for(int i = 0; i < findMe.length(); i++) {
    neighbours(tablica, x, y, findMe[i]);
  }
  
  
  
  
  return 0;
}
