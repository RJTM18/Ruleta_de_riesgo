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

        int opcion;

        cout << "\n=====================\n";
        cout << "      BLACKJACK\n";
        cout << "=====================\n";

        cout << "1. Jugar\n";
        cout << "2. Ver reglas\n";
        cout << "3. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion == 3) {
            return 0;
        }

        if (opcion == 2) {

            cout << "\n===== REGLAS =====\n";
            cout << "- Debes acercarte a 21.\n";
            cout << "- Si pasas de 21, pierdes.\n";
            cout << "- Si obtienes entre 17 y 21, ganas.\n";
        }

        if (opcion == 1) {

            int cart_1, cart_2, sum_1y2;
            char respuesta = 'n';
            int cart_3, sum_total;

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

                cout << "\nDesea sacar una tercera carta? (y/n)\n";
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
        }

        cout << "\nQuieres jugar otra vez? (y/n): ";
        cin >> jugar;
    }

    return 0;
}
