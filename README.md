# Shortest Job First (SJF) Scheduling Algorithm

This program implements the Shortest Job First (SJF) scheduling algorithm in C. SJF is a non-preemptive scheduling algorithm where the process with the smallest burst time is selected for execution next.

## Overview

The program reads input from a file named `sjf_input.txt`, where each line represents a test case. Each test case consists of process details including process name, arrival time, and burst time. The program then schedules these processes using the SJF algorithm and calculates the average waiting time.

## File Structure

- `sjf.c`: Contains the C code implementing the SJF scheduling algorithm.
- `sjf_input.txt`: Input file containing test cases for process scheduling.

## Dependencies

- Standard C libraries: `stdio.h`, `string.h`, `stdlib.h`

## Structure

### `struct Process`

- Represents a process with attributes:
  - `name`: Name of the process (up to 10 characters).
  - `arrivalTime`: Arrival time of the process.
  - `burstTime`: Burst time required by the process for execution.

### `sjfScheduling()`

- Implements the SJF scheduling algorithm.
- Iterates through the processes, schedules them based on burst time, and calculates waiting time.
- Prints scheduling details and the average waiting time.

### `main()`

- Opens `sjf_input.txt` for reading test cases.
- Parses each line to create process structures.
- Calls `sjfScheduling()` for each test case.
- Prints test case details and scheduling results.
- Closes the input file.

## Usage

1. Compile the program:

2. Run the program:

3. Ensure `sjf_input.txt` exists in the same directory with test case data formatted as specified.

## Input Format (sjf_input.txt)

Each line represents a test case with space-separated values:

markdown

# Shortest Job First (SJF) Scheduling Algorithm

This program implements the Shortest Job First (SJF) scheduling algorithm in C. SJF is a non-preemptive scheduling algorithm where the process with the smallest burst time is selected for execution next.

## Overview

The program reads input from a file named `sjf_input.txt`, where each line represents a test case. Each test case consists of process details including process name, arrival time, and burst time. The program then schedules these processes using the SJF algorithm and calculates the average waiting time.

## File Structure

- `sjf.c`: Contains the C code implementing the SJF scheduling algorithm.
- `sjf_input.txt`: Input file containing test cases for process scheduling.

## Dependencies

- Standard C libraries: `stdio.h`, `string.h`, `stdlib.h`

## Structure

### `struct Process`

- Represents a process with attributes:
  - `name`: Name of the process (up to 10 characters).
  - `arrivalTime`: Arrival time of the process.
  - `burstTime`: Burst time required by the process for execution.

### `sjfScheduling()`

- Implements the SJF scheduling algorithm.
- Iterates through the processes, schedules them based on burst time, and calculates waiting time.
- Prints scheduling details and the average waiting time.

### `main()`

- Opens `sjf_input.txt` for reading test cases.
- Parses each line to create process structures.
- Calls `sjfScheduling()` for each test case.
- Prints test case details and scheduling results.
- Closes the input file.

## Usage

1. Compile the program:

gcc sjf.c -o sjf

markdown


2. Run the program:

./sjf

sql


3. Ensure `sjf_input.txt` exists in the same directory with test case data formatted as specified.

## Input Format (sjf_input.txt)

Each line represents a test case with space-separated values:

<process_name1> <arrival_time1> <burst_time1> <process_name2> <arrival_time2> <burst_time2> ...

shell


## Output

The program outputs the scheduling details for each test case and the average waiting time.

## Example

### Input (sjf_input.txt)

P1 0 8 P2 1 4 P3 2 9

P1 0 4 P2 1 3 P3 2 6

### Output

Process Scheduling Started:

CPU Time 0: [P1 Arrived] P1 [0/0]

Process P1 completed with Turnaround Time: 8, Waiting Time: 0

CPU Time 8: [P2 Arrived] P2 [8/8]

Process P2 completed with Turnaround Time: 12, Waiting Time: 8

CPU Time 12: [P3 Arrived] P3 [12/12]

Process P3 completed with Turnaround Time: 21, Waiting Time: 12

Process Scheduling Completed:

Average Waiting Time: 6.67


Process Scheduling Started:

CPU Time 0: [P1 Arrived] P1 [0/0]

Process P1 completed with Turnaround Time: 4, Waiting Time: 0

CPU Time 4: [P2 Arrived] P2 [4/4]

Process P2 completed with Turnaround Time: 7, Waiting Time: 4

CPU Time 7: [P3 Arrived] P3 [7/7]

Process P3 completed with Turnaround Time: 13, Waiting Time: 7

Process Scheduling Completed:

Average Waiting Time: 3.67