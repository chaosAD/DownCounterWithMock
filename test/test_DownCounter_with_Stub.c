#include "unity.h"
#include "DownCounter.h"
// Mock _downCounter()
#include "mock_DownCounterStub.h"

void setUp(void) {}

void tearDown(void) {}

void test_downCounter_with_count_5_should_recursive_call_with_4(void) {
  Data ms;
  
  // Mock recursive call: Expecting the next immediate recursive call to because
  // called with 4
  _downCounter_Expect(&ms, 4);
  
  downCounter(&ms, 5);
}

void test_downCounter_with_count_5_should_recursive_call_with_3(void) {
  Data ms;
  
  // Mock recursive call: Expecting the next immediate recursive call to because
  // called with 3
  _downCounter_Expect(&ms, 3);
  
  downCounter(&ms, 4);
}

void test_downCounter_with_count_equals_0_it_should_stop_recursive(void) {
  Data ms;
  
  // Expect no call to _downCounter() because 0 is the stop value
  
  downCounter(&ms, 0);
}