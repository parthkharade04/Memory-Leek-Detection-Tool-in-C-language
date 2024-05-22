#include <stdio.h>
#include <stdlib.h>
#include "memory_tracker.h"

#define MAX_BLOCKS 1000

MemoryBlock memory_blocks[MAX_BLOCKS];
int num_blocks = 0;

void* tracked_malloc(size_t size, const char* allocation_point) {
    void* ptr = malloc(size);
    if (ptr != NULL && num_blocks < MAX_BLOCKS) {
        memory_blocks[num_blocks].address = ptr;
        memory_blocks[num_blocks].size = size;
        memory_blocks[num_blocks].allocation_point = allocation_point;
        num_blocks++;
    }
    return ptr;
}

void tracked_free(void* ptr) {
    for (int i = 0; i < num_blocks; i++) {
        if (memory_blocks[i].address == ptr) {
            free(ptr);
            memory_blocks[i] = memory_blocks[--num_blocks];
            return;
        }
    }
}
void initializeMemoryTracker() {
    num_blocks = 0;
}

