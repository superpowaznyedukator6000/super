#include <iostream>
#include <cstdlib>
#include <ctime>

const int nn = 10; //liczba komorek w tabeli, mozna wpisac poprostu deklarujac tabele ale jak mozna tak to czemu nie szczegolnie ze bedzie to wykorzystywane w milionie innych miejsc i mozna to zmieniac dowoli
int tab[nn];
int maxx, maxx2;

using namespace std;

int main() {

    //srand(time(NULL));    //losowe liczby za kazdym razem, zakomentarzowane zeby moc ogarniac czy cos sie pierdoli

	for(int i = 0; i<nn; i++) {
		tab[i] = rand() % 10; //procencik ogranicza przedzial losowanych liczb do tej liczby
		cout << i << " = " << tab[i] << endl;
	}

    if(tab[0]>tab[1]) {
        maxx = tab[0];
        maxx2 = tab[1];
    } else {
        maxx = tab[1];
        maxx2 = tab[0];
    }


	for(int i=0; i<nn; i++) {
        if(tab[i]>maxx) {
            maxx2 = maxx;
            maxx = tab[i];
        } else if(tab[i]>maxx2) {
            maxx2 = tab[i];
        }
	}

	cout << maxx << "; " << maxx2;

}
