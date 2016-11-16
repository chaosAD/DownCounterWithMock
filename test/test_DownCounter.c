#include "unity.h"
#include "DownCounter.h"
// Use _downCounter() that helps call downCounter()
#include "DownCounterStub.h"

void setUp(void) {}

void tearDown(void) {}

void test_downCounter(void) {
  Data ms;

  downCounter(&ms, 5);
}
