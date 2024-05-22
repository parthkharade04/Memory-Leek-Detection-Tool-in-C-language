# Memory-Leek-Detection-Tool-in-C-language
Created a Command Line Interface Tool in Ubuntu System through terminal which can detect memory leeks that occur in a low level programming language like C where the user has to assign the memory dynamically.
It keeps the memory track and detects leek in the system, gives user a complete detailed report where the leek is found.
It conisists of main 2 modules:
1. Memory Tracking
2. Leek Detection

There are major 5 .c extension files which contain all the main codes
1. memory_tracker
2. leek_detection
3. test_cases
4. user_interface
5. main.c

Similary there are 4 header files for the same

After compiling all these files, memory_leak_detection_tool app is created

You can use the following steps to start with the project
1. Install virtual Box and Ubuntu Operating System on that.

Then on terminal of ubuntu run the following commands
1. sudo apt install build-essential
2. sudo apt install valgrind
3. mkdir ~/projects
4. cd ~/projects
5. mkdir memory_leak_detection_tool_c
6. cd memory_leak_detection_tool_c
7. nano memory_tracker.c
8. nano memory_tracker.h
9. nano leak_detection.c
10. nano leak_detection.h
11. nano test_cases.c
12. nano test_cases.h
13. nano user_interface.c
14. nano user_interface.h
15. nano main.c

Then compile all the files
1. gcc -c memory_tracker.c -o memory_tracker.o
2. gcc -c leak_detection.c -o leak_detection.o
3. gcc -c test_cases.c -o test_cases.o
4. gcc -c user_interface.c -o user_interface.o
5. gcc -c main.c -o main.o

Now one app will be created after merging all the object files together with the following command:
gcc memory_tracker.o leak_detection.o test_cases.o main.o user_interface.o -o memory_leak_detection_tool

To run this app use the following command
./memory_leak_detection_tool
