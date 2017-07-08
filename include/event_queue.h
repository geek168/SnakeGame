#pragma once

#include "event.h"

struct QueueNode
{
  Event* event;
  QueueNode* next;
};

QueueNode* MakeQueue(Event*);

void Enqueue(QueueNode* queue, Event* event);

Event* Dequeue(QueueNode* queue);

Event* PeekQueue(QueueNode* queue);

void DestroyQueue(QueueNode*);

