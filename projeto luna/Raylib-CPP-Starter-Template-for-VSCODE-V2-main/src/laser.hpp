#pragma once
#include <raylib.h>

class Laser {
public:
    Laser(Vector2 position, int speed);
    void Update();
    void Draw();
    Rectangle getRect();
    bool active;
    // Método público para configurar a imagem
    void SetImage(Texture2D tex);

protected:
    Texture2D image;
    Vector2 position;
    int speed;
};
