#ifndef TASK_MANAGER_H
#define TASK_MANAGER_H

#define MAX_TASKS 100
#define MAX_DESC_LENGTH 100

typedef struct {
    char description[MAX_DESC_LENGTH];
    int completed;
} Task;

void addTask(Task tasks[], int *taskCount);

#endif