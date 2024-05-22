#ifndef LEAK_DETECTION_H
#define LEAK_DETECTION_H

#include <stddef.h>
#include "memory_tracker.h"

void detectMemoryLeaks();
void analyzeMemoryState();
void generateReports();

#endif /* LEAK_DETECTION_H */

