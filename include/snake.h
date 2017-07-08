#include "grid.h"

struct SnakeNodeInfo
{
  //size, color, etc
};

struct SnakeNode
{
  SnakeNodeInfo info;
  SnakeNode* next;
};

struct Snake
{
  int speed;
  SnakeNode* head;
};
