#pragma once

#include "raylib.h"

class Score {
public:
    virtual ~Score() = default;
    virtual void Update() = 0;
    virtual void Draw(Font font) = 0;
    virtual int GetScore() const = 0;
};

