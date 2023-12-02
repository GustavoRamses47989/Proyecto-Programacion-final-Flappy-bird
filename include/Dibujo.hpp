#pragma once 

class Dibujo {
public:
    static void LimpiarPantalla() {
        system("cls");
    }

    static void DibujarTexto(int x, int y, const std::string& texto) {
        COORD coordenada;
        coordenada.X = x;
        coordenada.Y = y;
        
        COORD coordenada;
        coordenada.X = x;
        coordenada.Y = y;
        SetConsole

        COORD coor
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordenada);
        std::cout << texto;
    }
};


        std::cout