/*
Ruleta de Riesgo
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

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

        cout << "\n=====================\n";
        cout << "      BLACKJACK\n";
        cout << "=====================\n";

        cout << "¿Quieres comenzar (y/n)?\n";
        cin >> ans;

        if (ans == 'n') {
            return 0;
        }

        cout << "\nComienza el juego!!!\n";

        cart_1 = generarCarta();
        cart_2 = generarCarta();
        cart_3 = generarCarta();

        sum_1y2 = cart_1 + cart_2;

        // Primera carta
        cout << "\nPrimera carta:\n";
        cout << "+-----+\n";
        cout << "|  " << cart_1 << "  |\n";
        cout << "+-----+\n";

        // Segunda carta
        cout << "\nSegunda carta:\n";
        cout << "+-----+\n";
        cout << "|  " << cart_2 << "  |\n";
        cout << "+-----+\n";

        cout << "\nSuma actual: " << sum_1y2 << endl;

        if (sum_1y2 < 21) {

            cout << "\n¿Desea sacar una tercera carta? (y/n)\n";
            cin >> respuesta;
        }

        if (respuesta == 'y') {

            // Tercera carta
            cout << "\nTercera carta:\n";
            cout << "+-----+\n";
            cout << "|  " << cart_3 << "  |\n";
            cout << "+-----+\n";

            sum_total = cart_3 + sum_1y2;

            cout << "\nSuma total: " << sum_total << endl;

            if (sum_total > 21) {

                cout << "\nTe pasaste. Perdiste\n";
            }

            else if (sum_total == 21) {

                cout << "\nGanaste con 21\n";
            }

            else {

                if (sum_total >= 17) {

                    cout << "\nGanaste\n";
                }

                else {

                    cout << "\nPerdiste\n";
                }
            }
        }

        else if (respuesta == 'n') {

            if (sum_1y2 >= 17) {

                cout << "\nGanaste\n";
            }

            else {

                cout << "\nPerdiste\n";
            }
        }

        cout << "\n¿Quieres jugar otra vez? (y/n): ";
        cin >> jugar;
    }

    return 0;
}
