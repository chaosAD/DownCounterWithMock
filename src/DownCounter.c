#include <stdio.h>
#include "DownCounter.h"

void downCounter(Data *ms, int count) {
  printf("count: %d\n", count);
  if(count != 0)
    _downCounter(ms, count - 1);
}