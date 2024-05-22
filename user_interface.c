#include <stdio.h>
#include "user_interface.h"
#include "memory_tracker.h"
#include "leak_detection.h"

// Function to display the menu options
void displayMenu() {
    printf("\nMemory Leak Detection Tool\n");
    printf("1. Allocate Memory\n");
    printf("2. Free Memory\n");
    printf("3. Detect Memory Leaks\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
}

// Function to handle user input and perform actions accordingly
void handleUserInput() {
    int choice;
    do {
        displayMenu();
        scanf("%d", &choice);
        switch (choice) {
            case 1: // Allocate memory
                {
                    size_t size;
                    printf("Enter the size of memory to allocate: ");
                    scanf("%zu", &size);
                    void* ptr = tracked_malloc(size, "User allocation");
                    if (ptr) {
                        printf("Memory allocated successfully at address: %p\n", ptr);
                    } else {
                        printf("Failed to allocate memory.\n");
                    }
                }
                break;
            case 2: // Free memory
                {
                    void* ptr;
                    printf("Enter the memory address to free: ");
                    scanf("%p", &ptr);
                    if (ptr) {
                        tracked_free(ptr);
                        printf("Memory at address %p freed successfully.\n", ptr);
                    } else {
                        printf("Invalid memory address.\n");
                    }
                }
                break;
            case 3: // Detect memory leaks
                printf("Running memory leak detection...\n");
                analyzeMemoryState();
                detectMemoryLeaks();
                generateReports();
                printf("Memory leak detection completed.\n");
                break;
            case 4: // Exit
                printf("Exiting program.\n");
                break;
            default: // Invalid choice
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 4);
}

