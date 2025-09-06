#include "task-manager.h"
#include <stdio.h>
#include <string.h>


void addTask(Task tasks[], int *taskCount)
{
int status;
printf("please enter task\n");
fgets(tasks[*taskCount].description,MAX_DESC_LENGTH,stdin);

printf("is it completed?\n");
scanf("%d", &status);
tasks[*taskCount].completed = status;

(*taskCount)++;

printf("task added\n");

}

