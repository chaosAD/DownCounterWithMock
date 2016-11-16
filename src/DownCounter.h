#ifndef DownCounter_H
#define DownCounter_H

typedef struct {
  int data;
} Data;

void downCounter(Data *ms, int count);

#include "DownCounterStub.h"

#endif // DownCounter_H