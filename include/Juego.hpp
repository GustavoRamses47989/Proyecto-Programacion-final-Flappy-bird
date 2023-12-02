#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int PajaroPosition = 10;
int gravity = 1;
int score = 0;

void DrawBird() {
    cout << "<(o)>";
}

void DrawPipes() {
    // Código para dibujar los tubos (puedes personalizar esta parte)
}

void DrawGround() {
    for (int i = 0; i < 30; i++) {
        cout << "_";
    }
}

int main() {
    while (true) {
        system("cls");
        DrawBird();
        
        DrawP
DrawPipes();
        DrawGround();
        cout << 
        cout
"\nScore: " << score;

        if (_kbhit()) {
            char key = _getch();
            if (key == ' ') {
                
    
if (birdPosition > 0)
                    birdPosition -= 
    
2;
            }
        }

        birdPosition += gravity;
        
            }
        }

        birdPosi

   
Sleep(100);
    }

    
    }

    retur

 
return 0;
}