#include <iostream>

using namespace std;

int main() {

	char ans;
	int cart_1, cart_2, sum_1y2 = cart_1 + cart_2;
    char respuesta;
	int cart_3, sum_total;

	cout << "Bienvenido a BlackJack";
	cout << "¿Quieres comenzar (y/n)?";
	cin >> ans; if (ans == 'n') { return 0; }

	cout << "Comienza el juego!!!";

	cout << "Recibes la primera carta: " << cart_1;
	cout << "Recibes la segunda carta: " << cart_2;

	//funciones que generen los valores de carta 1, 2 y 3
    // sum_1y2 va a ser mayor que 0 de todas maneras

	if (sum_1y2 < 21) { cout << "¿Desea sacar una tercera carta (y/n)?"; cin >> respuesta; }

	if (respuesta == 'y') {
		cout << "Recibes la tercera carta: " << cart_3;
		sum_total = cart_3 + sum_1y2;

		if (sum_total > 21) { cout << "Te pasaste. Perdiste"; return 0; }
		else if (sum_total == 21) { cout << "Ganaste con 21"; return 0; }
		else {
            if (sum_total >= 17) { cout << "Ganaste"; return 0; }
		    else { cout << "Perdiste"; return 0; }
        }
	}
	else if (respuesta == 'n') {
		if (sum_1y2 >= 17) { cout << "Ganaste"; return 0; }
		else { cout << "Perdiste"; return 0; }
	}

	return 0;
}