#ifndef DownCounter_H
#define DownCounter_H

typedef struct {
  int data;
} Data;

void downCounter(Data *ms, int count);

// The below include must be placed here (bottom most) to break
// cyclic inclusion of header files:
//              +--> DownCounterStub.h --+
//   (include)  |                        |  (include)
//              +--- DownCounter.h <----+
#include "DownCounterStub.h"

#endif // DownCounter_H