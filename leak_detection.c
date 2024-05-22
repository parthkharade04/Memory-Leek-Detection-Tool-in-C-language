#include <stdio.h>
#include "memory_tracker.h"
#include "leak_detection.h"

void detectMemoryLeaks() {
    if (num_blocks > 0) {
        printf("Memory leak detected!\n");
        printf("Number of memory leaks: %d\n", num_blocks);
        printf("Memory leaks details:\n");
        for (int i = 0; i < num_blocks; i++) {
            printf("Address: %p, Size: %zu, Allocation Point: %s\n", memory_blocks[i].address,
                   memory_blocks[i].size, memory_blocks[i].allocation_point);
        }
    } else {
        printf("No memory leaks detected.\n");
    }
}
void analyzeMemoryState() {
    printf("Analyzing memory state...\n");
    printf("Total memory blocks allocated: %d\n", num_blocks);
    printf("\n");
}

void generateReports() {
    printf("Generating memory leak detection reports...\n");
    printf("Summary Report:\n");
    printf("Total memory blocks allocated: %d\n", num_blocks);
    printf("Number of memory leaks detected: %d\n", num_blocks);
    printf("\n");
    printf("Detailed Report:\n");
    for (int i = 0; i < num_blocks; i++) {
        printf("Memory block %d:\n", i + 1);
        printf("Address: %p\n", memory_blocks[i].address);
        printf("Size: %zu bytes\n", memory_blocks[i].size);
        printf("Allocation point: %s\n", memory_blocks[i].allocation_point);
        printf("\n");
    }
}

