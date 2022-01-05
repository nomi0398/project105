Winclude <stdio.h
#include <stdlib.h>
#include <stdbool.h
#include math.h>
// To implement first come first serve scheduling
void fcfs(int, Node*, Node*, Node*);
//To implement round robin scheduling
void rr(int, Node*, Node*, Node*);
//To implement shortest runtime first
void srtf(int, Node*, Node*, Node*);
//To calculate turn around time
void turn_around(int, Node*, Node*);
//To calculate the CPU usage
void cpu_usage(int, Node*, Node*);
//For duplicating arrays
void copy_array(int, Node*, Node*);

struct node
{
    int data;
    node *next;
};

int main(int arge, char *argv[])
   
   int size = 0;
   
   int quantum;
   int pid[20], arrival time(20], burst time(20];
   FILE file;
   file = fopen(argv[1). "r"):
   if ((arge < 3) || (arge > 4))
       printf("Usage: projz input_file FCFS|RR| SRJF [quantum]");
   else
    {
      if (file)
       {
           while (Ifeof(file))
           {
             fscanf(file, "d sd d", &pid[size), &arrivalt[size];
               size 1;
           }
       }
}
}

if(size 0)
    goto empty_queue;
printf("Schdeuling Algorithm: "):
IFirst-Come-First-Serve
if (Istremp(argv[2), "FCFS"))
    printf("FCFS\n"):
    fefs(size, pid, burst time, arrival tine):
else if (istremp(argv(2), "RR")
   if (arge 4)
        printf("RR\n"):
        quantum atoi(argv(3]):
        rr(size, pid, burst time, arrival tine, quantun);
    else
        printf("..In Invalid Entryin"):
else if (Istremp(argv(21, "SRTF"))
    printf("SRTF\n"):
    srtf(size, pid, burst time, arrival tine):
else
    printf("USAGE: FCFS, RR, SRTF\n"):

printf("\nProcess queue is enpty. End of run. In"):
id srtf(int size, int pid[), int burst timel);
 int arrival timel
 int i, j, n, k, time, result;
 int temp burst[size), waiting(size), response tine(size):
 int turnaround tine(size), wait tine(size):
 float float result:
 bool done, processed[size]:
 //Duplicates burst time array
 copy array(size, burst time, temp burst);
 printf("Total of Xd tasks are read. Press 'enter to start...
 getchar();
printf("
 Initializes al1 processed to false
 for (1 0: i size: )
     processed(1) false;
 iInitializes the response tine
 for (1 0: i < size: 1)
     response_timeti)- 1:
 /Initializes the wait time
 for (i 0; i size; )
    wait time(i)- 0:
 IShortest Runtine First
done false;
time 0:
while (1done)
{
     n 1000000;
     k.1;
      for (i- 0; i < size; 1)
      {
         if (ctemp_burst[ij t- 0) (arrival_timeti) time)
      }
}