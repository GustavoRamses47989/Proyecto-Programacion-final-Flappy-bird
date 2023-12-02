#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;
class Juego {
private:
    Pajaro pajaro;
    Tuberia tuberia;
    
    Pajaro pajaro;
    Tu
int score;

public:
    Juego() : score(0) {}

    void Iniciar() {
        while (true) {
            Dibujo::LimpiarPantalla();
            pajaro.Dibujar();
            tuberias.Dibujar();
            Dibujo::
       
DibujarTexto(0, 0, "Score: " + std::to_string(score));

            if (_kbhit()) {
                
           
char key = _getch();
                if (key == ' ') {
                    pajaro.Saltar();
                }
            }

            pajaro.Actualizar();
            tuberias.
            tuberi
Actualizar();

            // Lógica de colisiones y puntaje

            Sleep(100);
        }
    }
};


        }
    }
};