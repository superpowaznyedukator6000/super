#include <iostream>
#include <cstdlib>
#include <ctime>

const int nn = 10; //liczba komorek w tabeli, mozna wpisac poprostu deklarujac tabele ale jak mozna tak to czemu nie szczegolnie ze bedzie to wykorzystywane w milionie innych miejsc i mozna to zmieniac dowoli
int tab[nn];
int a(1), b(2), c(0);   //c to liczba wystapien

using namespace std;

int main() {

    //srand(time(NULL));    //losowe liczby za kazdym razem, zakomentarzowane zeby moc ogarniac czy cos sie pierdoli

	for(int i = 0; i<nn; i++) {
		tab[i] = rand() % 10; //procencik ogranicza przedzial losowanych liczb do tej liczby
		cout << i << " = " << tab[i] << endl;
	}

	for(int i=0; i<nn-1; i++) {         //nn-1 poniewaz jak dojdzie do liczby 9 to bedzie chcialo zobaczyc co jest w tab[10] ktore nie istnieje i wyjdzie guwno
        if(tab[i] == a && tab[i+1] == b) {
            c++;
        }
	}

	cout << c;

}
