#pragma once
#include "carro.hpp"
#include "mang.hpp"
#include "placartempo.hpp"
#include "html.hpp"
#include "tiro.hpp"
#include <vector>

class game {
public:
    game();
    ~game();
    void Draw();
    void Update();
    void HandleInput();
    bool run;
    int lives;
    Music music;

private:
    void DeleteInactiveLaser();
    std::vector<Mang> CreateVilao();
    void MoveVilao();
    void VilaoTiroLaser();
    void CheckForCollisions();
    void GameOver();
    void Reset();
    void InitGame();
    void operator--();
    bool operator<(int compareValue) const;

    carro carro;
    std::vector<Mang> vilaos;
    int vilaoDirection;
    std::vector<Tiro> vilaoLasers;
    constexpr static float vilaoLaserTiroIntevalo = 0.35;
    float timeLastVilaoTiro;
    float powerSpamIntervalo;
    float timeLastSpam;
    Html power;
    PlacarTempo score;  // Atualizado para usar PlacarTempo
    Sound gameOverSound;
    Sound collectSound;
};
