#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// funcion del otro archivo
int generarCarta();

int main() {

    srand(time(0));

	char ans;
	int cart_1, cart_2, sum_1y2;
    char respuesta;
	int cart_3, sum_total;

	cout << "Bienvenido a BlackJack\n";
	cout << "¿Quieres comenzar (y/n)?\n  ";
	cin >> ans;

    if (ans == 'n') {
        return 0;
    }

	cout << "Comienza el juego!!!\n";

	// cartas aleatorias
	cart_1 = generarCarta();
    cart_2 = generarCarta();
    cart_3 = generarCarta();

    // suma de primeras cartas
    sum_1y2 = cart_1 + cart_2;

	cout << "Recibes la primera carta:\n " << cart_1 << endl;
	cout << "Recibes la segunda carta:\n " << cart_2 << endl;

	if (sum_1y2 < 21) {

        cout << "¿Desea sacar una tercera carta (y/n)?\n";
        cin >> respuesta;
    }

	if (respuesta == 'y') {

		cout << "Recibes la tercera carta:\n " << cart_3 << endl;

		sum_total = cart_3 + sum_1y2;

		if (sum_total > 21) {

            cout << "Te pasaste. Perdiste";
            return 0;
        }

		else if (sum_total == 21) {

            cout << "Ganaste con 21";
            return 0;
        }

		else {

            if (sum_total >= 17) {

                cout << "Ganaste";
                return 0;
            }

		    else {

                cout << "Perdiste";
                return 0;
            }
        }
	}

	else if (respuesta == 'n') {

		if (sum_1y2 >= 17) {

            cout << "Ganaste";
            return 0;
        }

		else {

            cout << "Perdiste";
            return 0;
        }
	}

	return 0;
}
