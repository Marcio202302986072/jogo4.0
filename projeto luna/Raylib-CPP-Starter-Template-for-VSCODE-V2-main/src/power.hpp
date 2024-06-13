#pragma once
#include <raylib.h>

class Power {
public:
    Power();
    virtual ~Power(); // Declarando destrutor virtual
    virtual void Update();
    virtual void Draw();
    virtual void Spam();
    virtual Rectangle getRect();
    
    bool alive;

protected: // Protected para que as classes derivadas possam acessar
    Texture2D image; // Textura da classe base

private:
    Vector2 position;
    int speed;
};
