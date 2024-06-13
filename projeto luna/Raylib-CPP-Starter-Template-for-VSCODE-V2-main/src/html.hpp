#pragma once
#include "power.hpp"

class Html : public Power {
public:
    Html();
    ~Html();
    void Spam() override;
    Rectangle getRect() override;
    void Update() override;
    void Draw() override;

private:
    // Adicione membros específicos de Html, se necessário
};
