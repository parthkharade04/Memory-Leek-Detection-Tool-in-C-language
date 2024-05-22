#include <stdio.h>
#include "memory_tracker.h"
#include "leak_detection.h"
#include "user_interface.h"
#include "test_cases.h"

int main() {
    // Initialize the memory tracker
    initializeMemoryTracker();

    printf("Memory Tracker initialised.\n");

    // Run test cases for memory leak detection
    testMemoryLeakDetection();

    // Perform memory analysis and leak detection
    analyzeMemoryState();
    detectMemoryLeaks();
    generateReports();

    // Display user interface for interacting with the program
    handleUserInput();

    return 0;
}

