#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Process structure
struct Process
{
    char name[10];
    int arrivalTime;
    int burstTime;
};

// SJF algorithm
void sjfScheduling(struct Process processes[], int n)
{
    int currentTime = 0;
    int waitingTime = 0;

    printf("Process Scheduling Started:\n");

    for (int i = 0; i < n; i++)
    {

        if (processes[i].arrivalTime > currentTime)
        {
            currentTime = processes[i].arrivalTime;
        }
        printf(" CPU Time %d:  [%s Arrived] %s [%d/%d]\n", currentTime, processes[i].name, processes[i].name, currentTime, currentTime);

        currentTime += processes[i].burstTime;

        int turnaround_time = currentTime - processes[i].arrivalTime;
        int process_waiting_time = turnaround_time - processes[i].burstTime;
        printf("Process %s completed with Turnaround Time: %d, Waiting Time: %d\n", processes[i].name, turnaround_time, process_waiting_time);

        waitingTime += process_waiting_time;
    }

    float averageWaitingTime = (float)waitingTime / n;
    printf("Process Scheduling Completed:\n");
    printf("Average Waiting Time: %.2f\n", averageWaitingTime);
}

int main()
{
    // File opening
    FILE *file = fopen("sjf_input.txt", "r");
    if (file == NULL)
    {
        perror("File opening error");
        return 1;
    }

    char line[256];
    int testCaseNumber = 1;

    while (fgets(line, sizeof(line), file))
    {
        printf("Test case #%d: %s", testCaseNumber, line);
        testCaseNumber++;

        struct Process processes[100];
        int n = 0;

        // Reading the file to create an individual test case
        char *token = strtok(line, " ");
        while (token != NULL)
        {
            strcpy(processes[n].name, token);
            token = strtok(NULL, " ");
            processes[n].arrivalTime = atoi(token);
            token = strtok(NULL, " ");
            processes[n].burstTime = atoi(token);

            n++;
            token = strtok(NULL, " ");
        }

        // Calling scheduling algorithm
        sjfScheduling(processes, n);
        printf("\n");
    }

    // File closing
    fclose(file);

    return 0;
}