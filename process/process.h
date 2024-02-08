#ifndef PROCESSES_H
#define PROCESSES_H

struct Process{
    int id;
    char name[30];
};

extern struct Process processes[5];
extern int processCount;

int nextProcessId();
int createNewProcess(const char name[5]);
void stopProcess(int processId);

#endif