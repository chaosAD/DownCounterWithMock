#ifndef DownCounterStub_H
#define DownCounterStub_H

#ifdef TEST
// This is used in test code (mocking/non-mocking)
# include "DownCounter.h"
#else
// This is used in production code
# define _downCounter  downCounter
#endif // TEST

void _downCounter(Data *ms, int count);

#endif // DownCounterStub_H
