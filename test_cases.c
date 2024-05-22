#include "test_cases.h"
#include "memory_tracker.h"
#include "leak_detection.h"

void testMemoryLeakDetection() {
   
    void* ptr1 = tracked_malloc(100, "Test case 1");
    
    
    void* ptr2 = tracked_malloc(200, "Test case 2");
    tracked_free(ptr2);
    

    void* ptr3 = tracked_malloc(300, "Test case 3");
    void* ptr4 = tracked_malloc(400, "Test case 3");
    tracked_free(ptr3);
    
    void* ptr5 = tracked_malloc(500, "Test case 4");
    
    
    void* ptr6 = tracked_malloc(600, "Test case 5");
    ptr6 = tracked_malloc(700, "Test case 5 (leak)");
}

