#include <iostream>
#include <cstdlib>
#include <ctime>

const int nn = 10; //liczba komorek w tabeli, mozna wpisac poprostu deklarujac tabele ale jak mozna tak to czemu nie szczegolnie ze bedzie to wykorzystywane w milionie innych miejsc i mozna to zmieniac dowoli
int tab[nn];
int s=0, sr;

using namespace std;

int main() {

    //srand(time(NULL));    //losowe liczby za kazdym razem, zakomentarzowane zeby moc ogarniac czy cos sie pierdoli

	for(int i = 0; i<nn; i++) {
		tab[i] = rand() % 10; //procencik ogranicza przedzial losowanych liczb do tej liczby
		cout << i << " = " << tab[i] << endl;
	}

    //liczenie sumy


    for(int i=0; i<nn; i++) {
        s = s+tab[i];
    }


    sr = s/nn; //liczenie sredniej

    cout << "sr = " << sr << endl;

    //zamianka liczb

    for(int i=0; i<nn; i++) {
        if(sr>tab[i]) {
            cout << "liczba tab[" << i << "] nie spelnia warunku" << endl;
            tab[i] = 0;
        } else {
            cout << "liczba tab[" << i << "] spelnia warunek" << endl;
        }
    }

    //wypisanko nowej tablicy

	for(int i = 0; i<nn; i++) {
		cout << i << " = " << tab[i] << endl;
	}


    cout << s;



}
