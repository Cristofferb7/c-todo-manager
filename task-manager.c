#include "task-manager.h"
#include <stdio.h>
#include <string.h>

int status;
void addTask(Task tasks[], int *taskCount)
{
printf("please enter task\n");
fgets(tasks[*taskCount].description,MAX_DESC_LENGTH,stdin);

printf("is it completed?\n");
scanf("%d", &status);
(tasks[*taskCount].completed = status);



}

