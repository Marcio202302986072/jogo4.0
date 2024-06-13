#include "tiro.hpp"

Tiro::Tiro(Vector2 position, int speed) : Laser(position, speed) {
    // Definir a imagem específica para Tiro
    SetImage(LoadTexture("C++.png")); // Chama um método de Laser para configurar a imagem
}
