//administracija unos novih brisanje po idu, izmjena podataka, prikaz, prikaz prosjeka po ispitu, prikaz najboljeg, najgoreg, prikaz po idu, sort po uspjehu

#include<iostream>
#include<string>
#include<cstdlib>
#include<vector>

using namespace std;

struct Student{
  int id;
  string ime;
  string prezime;
  string spol;
  int prviKolokvij;
  int drugiKolokvij;
  int zavrsni;
  float uspjeh;
};

void meni(vector<Student>& studenti) {

  int izbor = -1;
  system("CLS");

  while(izbor != 0){
    cout << "1 Unos\n2 Brisanje po ID-u\nIzmjena\n3 Prikaz\n4 Prikaz prosjeka po ispitu\n5 Najbolji\n6 Najgori\n7 Prikaz po ID-u\n8 Sortirano prema uspjehu\n0 Izlaz" << endl;
    cin >> izbor;

    int temp;
    switch(izbor){

    case 1: {
      Student stud;
      cin >> stud.id >> stud.ime >> stud.prezime >> stud.spol >> stud.prviKolokvij >> stud.drugiKolokvij >> stud.zavrsni;
      studenti.push_back(stud);     
    }
      break;
    case 2: {
      int brisi;
      cin >> brisi;

      for (vector<Student>::iterator i = studenti.begin(); i != studenti.end();){
	if( (*i).id == brisi) studenti.erase(i);
	else i++;
      }
      
    }break;
    case 3: {
      vector<Student>::iterator i;
      for (i = studenti.begin(); i != studenti.end();i++){
	cout << (*i).ime << endl;
      }
    }
      break;
    default: system("PAUSE");
    }
    }
    
}


int main(int argc, char *argv[])
{
    vector<Student> studenti;
    meni(studenti);
  
  return 0;
}
  
