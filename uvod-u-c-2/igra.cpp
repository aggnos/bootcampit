#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void igra(){
    int a;
    cin >> a;

    if (a/1000 != 9) cout <<  a+1000 << endl;
    else if ((a/100)%10 != 9) cout <<  a+100 << endl;
    else if (((a/10)%100)%10 != 9) cout <<  a+10 << endl;
    else if (((a%1000)%100)%10 != 9) cout <<  a+1 << endl;
}

void par() {
    int a;
    cin >> a;
    if (a%2 == 0) cout << "DA" << endl;
    else cout << "NE" << endl;
}

void olovka() {
    int n;
    cin >> n;
    if(n/100 < (n/10)%10) cout <<"DESNI NAGIB" << endl;
    else if(n/100 > (n/10)%10) cout <<"LIJEVI NAGIB" << endl;
    else cout <<"RAVNOTEZA" << endl;
}

int chk(int a){
    switch(a){
        case 1: return 4;
        case 2: return 6;
        case 3: return 8;
        case 4: return 10;
    }
}
void trener() {
    int a, b, c, top = 0, m;
    string winner;

    for (int i = 0; i < 3; i++){
        cin >> a >> b >> c;

	m = chk(a) +chk(b) + chk(c);
        
        if ( m > top) {
	  if(i == 0) winner = "LIN";
	  else if(i == 1) winner = "FENG";
	  else if(i == 2) winner = "TAO";
	  top = m;
	}
    }
    cout << winner << " " << top << endl;
}

void stihovi(){
    vector<string> refren;
    refren.push_back("stih1");
    refren.push_back("stih2");
    refren.push_back("stih3");
    refren.push_back("stih4");
    refren.push_back("stih5");

    string stih;
    cin >> stih;
    ptrdiff_t check;
    check = find(refren.begin(), refren.end(), stih) - refren.begin();
    switch (check){
        case 0: cout << refren[0] << endl;
        case 1: cout << refren[1] << endl;
        case 2: cout << refren[2] << endl;
        case 3: cout << refren[3] << endl;
        case 4: cout << refren[4] << endl;
        default: cout << "-" << endl;
    }

}

void stanica() {
  int n, k, m;
  cin >> n >> k >> m;
  cout << "STANICA 1: ";

  if (k < n) cout << "ZAKASNIT CE" << endl;
  else cout << k-n << endl;
  cout << "STANICA 2: ";
  if (k+m >= n) cout << k+m-n << endl; 
  else cout << "ZAKASNIT CE" << endl;
}

int main(){
    trener();
    return 0;
}
