#ifndef DownCounterStub_H
#define DownCounterStub_H

// The below include must be placed here (bottom most) to break
// cyclic inclusion of header files:
//              +--> DownCounterStub.h --+
//   (include)  |                        |  (include)
//              +--- DownCounter.h <----+
#ifdef TEST
// This is used in test code (mocking/non-mocking)
# include "DownCounter.h"
#else
// This is used in production code
# define _downCounter  downCounter
#endif // TEST

void _downCounter(Data *ms, int count);

#endif // DownCounterStub_H
