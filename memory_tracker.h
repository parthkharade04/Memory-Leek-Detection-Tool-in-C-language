#ifndef MEMORY_TRACKER_H
#define MEMORY_TRACKER_H

#include <stddef.h>

typedef struct MemoryBlock {
    void* address;
    size_t size;
    const char* allocation_point;
} MemoryBlock;

extern MemoryBlock memory_blocks[];
extern int num_blocks;

void* tracked_malloc(size_t size, const char* allocation_point);
void tracked_free(void* ptr);
void initializeMemoryTracker();

#endif /* MEMORY_TRACKER_H */

