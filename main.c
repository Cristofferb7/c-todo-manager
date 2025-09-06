#include <stdio.h>
#include "task-manager.h"

int main()
{
 Task tasks[MAX_TASKS];
 int taskCount=0;
 addTask(tasks, &taskCount);

 return 0;
}
