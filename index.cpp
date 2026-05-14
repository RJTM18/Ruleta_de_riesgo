#include <iostream>
#include <cstdlib>
#include <ctime>
#include "random_numbers.cpp"

using namespace std;

int generarCarta();

int main() {

    srand(time(0));

    char jugar = 'y';

    while (jugar == 'y') {

	    char ans;
	    int cart_1, cart_2, sum_1y2;
        char respuesta = 'n';
	    int cart_3, sum_total;

	    cout << "\nBienvenido a BlackJack\n";
	    cout << "¿Quieres comenzar (y/n)?\n  ";
	    cin >> ans;

        if (ans == 'n') {
            return 0;
        }

	    cout << "Comienza el juego!!!\n";

	    cart_1 = generarCarta();
        cart_2 = generarCarta();
        cart_3 = generarCarta();

        sum_1y2 = cart_1 + cart_2;

	    cout << "Recibes la primera carta:\n " << cart_1 << endl;
	    cout << "Recibes la segunda carta:\n " << cart_2 << endl;

	    if (sum_1y2 < 21) { cout << "¿Desea sacar una tercera carta (y/n)?\n"; cin >> respuesta; }

	    if (respuesta == 'y') {

		    cout << "Recibes la tercera carta:\n " << cart_3 << endl;
		    sum_total = cart_3 + sum_1y2;

		    if (sum_total > 21) { cout << "Te pasaste. Perdiste\n"; }

		    else if (sum_total == 21) { cout << "Ganaste con 21\n"; }

		    else { 
                if (sum_total >= 17) { cout << "Ganaste\n"; }
		        else { cout << "Perdiste\n"; }
            }
	    }

	    else if (respuesta == 'n') {

		    if (sum_1y2 >= 17) { cout << "Ganaste\n"; }
		    else { cout << "Perdiste\n";}
	    }

        cout << "\n¿Quieres jugar otra vez? (y/n): ";
        cin >> jugar;
    }

	return 0;
}

//ya culmine los cambios: Alejandro

