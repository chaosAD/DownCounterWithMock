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
#ifdef TEST
// This is used in test code (mocking/non-mocking)
# include "DownCounterStub.h"
#else
// This is used in production code
# define _downCounter  downCounter
#endif // TEST

#endif // DownCounter_H
