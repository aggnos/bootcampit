#include <iostream>
#include <string>
#include <vector>

using namespace std;
//const int MAX = 3;

struct student
{
  string ime, oib, matBroj, prezime;
  int godine;
  
};

int main () {
  int N;
  cin >> N;

  vector<student> stud;

  for(int i = 0; i < N; i++) {
    stud.push_back(student());
    cin >> stud[i].ime >> stud[i].prezime >>
      stud[i].godine >> stud[i].oib >> stud[i].matBroj;
  }

  for (int i = 0; i < N; ++i)
    {
      cout << stud[i].ime << " " << stud[i].prezime << " " << 
	stud[i].godine << " " <<  stud[i].oib << " " <<  stud[i].matBroj << endl;
    }


  // int  var[MAX] = {10, 100, 200};
  // int *ptr[MAX];

  // for (int i = 0; i < MAX; i++) {
  //   ptr[i] = &var[i]; // assign the address of integer.
  // }

  // for (int i = 0; i < MAX; i++) {
  //   cout << "Value of var" << i << " = ";
  //     cout << &ptr[i] << endl;
  //  }

   return 0;
}
