#ifndef FALLING_ROCK_HPP
#define FALLING_ROCK_HPP

#include <SFML/Graphics.hpp>

#include "entity.hpp"

class fallingRock: public entity
{
public:
  bool firstSpawn = true;
  bool changedBaseSpeed = false;
  int baseMoveSpeed = 11;
  int moveSpeed = baseMoveSpeed;
  int size;
  int frameCounter = 0;
  int fallingAnimationFrame = 0;

  fallingRock();
  void update();
};

#endif