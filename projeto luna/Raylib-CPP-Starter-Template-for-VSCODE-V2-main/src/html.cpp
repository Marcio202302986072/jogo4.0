#include "html.hpp"

Html::Html() : Power() {
    image = LoadTexture("html.png");  // Carrega a textura específica para HTML
    alive = false;                    // Inicializa como não vivo
}

Html::~Html() {
    UnloadTexture(image);  // Descarrega a textura ao destruir o objeto
}

void Html::Spam() {
    Power::Spam(); // Chama a função Spam da classe base (Power)
    // Implementação específica de Spam para Html, se necessário
}

Rectangle Html::getRect() {
    return Power::getRect(); // Chama a função getRect da classe base (Power)
}

void Html::Update() {
    Power::Update(); // Chama a função Update da classe base (Power)
    // Implementação específica de Update para Html, se necessário
}

void Html::Draw() {
    Power::Draw(); // Chama a função Draw da classe base (Power)
    // Implementação específica de Draw para Html, se necessário
}