#pragma once

#include "score.hpp"

class PlacarTempo : public Score {
public:
    PlacarTempo();
    void Update() override;
    void Draw(Font font) override;
    int GetScore() const override;

private:
    int score;
    double startTime;
};
