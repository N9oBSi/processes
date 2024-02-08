#include "process.h"
#include <stdio.h>

void printProcesses() {
    printf("Processes:\n");
    for (int i = 0; i < processCount; i++) {
        printf("ID: %d, Name: %s \n", processes[i].id, processes[i].name);
    }
}

int main() {
    int choice;
    char name[30];
    int processId;

    while (1) {
        printf("\nOptions:\n");
        printf("1. Create Process\n");
        printf("2. Print Processes\n");
        printf("3. Stop Process\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter process name: ");
                scanf("%s", &name);
                createNewProcess(name);
                break;
            case 2:
                printProcesses();
                break;
            case 3:
                printf("Enter process ID to stop: ");
                scanf("%d", &processId);
                stopProcess(processId);
                break;
            case 4:
                printf("\nExiting...");
            return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}