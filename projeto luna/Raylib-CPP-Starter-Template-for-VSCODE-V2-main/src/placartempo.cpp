#include "placartempo.hpp"

PlacarTempo::PlacarTempo() : score(0), startTime(GetTime()) {}

void PlacarTempo::Update() {
    score = static_cast<int>(GetTime() - startTime);
}

void PlacarTempo::Draw(Font font) {
    DrawTextEx(font, TextFormat("Score: %i", score), {400 , 0}, 34, 2, RED);
}

int PlacarTempo::GetScore() const {
    return score;
}
