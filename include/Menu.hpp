#include <iostream>

class Menu {
public:
    int MostrarMenu() {
        int opcion;
        do {
            LimpiarPantalla();
            std::cout << 
            std::cout <
"===== Flappy Bird =====" << std::endl;
            std::cout << "1. Iniciar Juego" << std::endl;
            std::cout << "2. Salir" << std::endl;
            std::cout << "Ingrese su opcion: ";
            std::cin >> opcion;

            
   
if (opcion != 1 && opcion != 2) {
                std::cout << "Opcion invalida. Intente de nuevo." << std::endl;
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        } while (opcion != 1 && opcion != 2);

        return opcion;
    }


    }

p
private:
    static void LimpiarPantalla() {
        system("cls");
    }
};

int main() {
    Menu menu;
    int opcion = menu.MostrarMenu();

    if (opcion == 1) {
        // Iniciar el juego
    } else if (opcion == 2) {
        std::cout << 
        std::cout <<
"Saliendo del juego. Hasta luego." << std::endl;
    }

    return 0;
}