#include <string>
#include <iostream>
using namespace std;
void drawit(int polje[9]);
int check (int polje[9]){
  if(polje[0] + polje[1] + polje[2] == 6 ||
     polje[3] + polje[4] + polje[5] == 6 ||
     polje[6] + polje[7] + polje[8] == 6 ||
     polje[0] + polje[4] + polje[8] == 6 ||
     polje[6] + polje[4] + polje[2] == 6 ||
     polje[0] + polje[3] + polje[6] == 6 ||
     polje[1] + polje[4] + polje[7] == 6 ||
     polje[2] + polje[5] + polje[8] == 6)
    return 2;
  
    else if(
	    polje[0] + polje[1] + polje[2] == 0 ||
	    polje[3] + polje[4] + polje[5] == 0 ||
	    polje[6] + polje[7] + polje[8] == 0 ||
	    polje[0] + polje[4] + polje[8] == 0 ||
	    polje[6] + polje[4] + polje[2] == 0 ||
	    polje[0] + polje[3] + polje[6] == 0 ||
	    polje[1] + polje[4] + polje[7] == 0 ||
	    polje[2] + polje[5] + polje[8] == 0)
      return 0;
    else return 1;
}

void drawit(int polje[9]){
  cout << endl << endl;
  cout << polje[0] << " " << polje[1] << " " << polje[2] << endl;
  cout << polje[3] << " " << polje[4] << " " << polje[5] << endl;
  cout << polje[6] << " " << polje[7] << " " << polje[8] << endl;
  cout << endl;
}

int main(){
  int counter = 1;
  int kk;
  int polje[] = {1,1,1,1,1,1,1,1,1};
  int checkValue = 1;
  cout << "x = 2, o = 0\nkrizic ide prvi, upisuje se broj polja \n 1 2 3 \n 4 5 6\n 7 8 9"
       << endl;

  while(checkValue == 1) {
    drawit(polje);
    cin >> kk;
    
    if (counter%2 == 1)
      polje[kk-1] = 2;
    else {
      polje[kk-1] = 0;
    }
    
    checkValue = check(polje);
    counter++;
  }

  if(checkValue == 2) cout << "Krizic pobjedio" << endl;
  else if(checkValue == 0) cout << "Kruzic pobjedio" << endl;
  else cout << "Nema pobjednika" << endl;

  drawit(polje);
  
  return 0;
}
