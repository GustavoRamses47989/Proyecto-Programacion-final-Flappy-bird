#pragma once 

class Actualizable {
public:
    virtual void Actualizar() = 0;
};

class Pajaro : public Actualizable {
private:
    int birdPosition;
    int gravity;

public:
    Pajaro() : birdPosition(10), gravity(1) {}

    void Dibujar() {
        Dibujo::DibujarTexto(3, birdPosition, "<(o)>");
    }

    void Saltar() {
        if (birdPosition > 0) {
            birdPosition -= 
         
2;
        }
    }

    
        }
    }

    voi
void Actualizar() override {
        birdPosition += gravity;
    }

    
        birdPosition 
int ObtenerPosicionY() const {
        return birdPosition;
    }
};