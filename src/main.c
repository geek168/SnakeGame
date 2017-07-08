#include <stdio.h>
#include <stdbool.h>

#include "platform.h"
#include "event.h"
#include "events.h"
#include "event_queue.h"
#include "grid.h"
#include "input.h"
#include "platform_input.h"
#include "snake.h"


//TODO: game info
static bool g_can_run;
static struct QueueNode* g_event_queue;


void update(float delta)
{
  while(PeekQueue(g_event_queue)){
    struct Event* e = Dequeue(g_event_queue);
    switch(e->event_type){
    case INPUT_EVENT:
      //process input
      break;
    case GAME_START_EVENT:
      break;
    case GAME_OVER_EVENT:
      g_can_run = false;
      break;
    }
  }
}

void render(float delta)
{
  
}

int main(){
  g_event_queue = MakeQueue(NULL);
  while(g_can_run){
    update(0);
    render(0);
  }
  
  printf("hello world\n");
}
