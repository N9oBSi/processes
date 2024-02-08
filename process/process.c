#include "process.h"
#include <stdio.h>
#include <string.h>

struct Process processes[5];
int processCount = 0;

int nextProcessId(){
    static int nextId = 1;
    if(nextId <= 5){
        return nextId++;
    }
    else{
        return 0;
    }
}

int createNewProcess(const char name[]){
    if (processCount < 5) {
        int id = nextProcessId();
        if (id != 0) {
            processes[processCount].id = id;
            strcpy(processes[processCount].name, name);
            printf(processes[processCount].name, "%s", name);
            processCount++;
        }
        return id;
    } else {
        printf("Error: Maximum processes reached.\n");
        return 0;
    }
}

void stopProcess(int processId){
    for (int i = 0; i < processCount; i++) {
        if (processes[i].id == processId) {
            for (int j = i; j < processCount - 1; j++) {
                processes[j] = processes[j + 1];
            }
            processCount--;
            return;
        }
    }
    printf("Invalid process ID.\n");
}