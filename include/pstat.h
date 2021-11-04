#ifndef _PSTAT_H_
#define _PSTAT_H_

#include "param.h"

enum procstate { UNUSED, EMBRYO, SLEEPING, RUNNABLE, RUNNING, ZOMBIE };

struct pstat {
  // whether this slot of the process table is in use (1 or 0)
  int inuse[NPROC]; 
  // PID of each process
  int pid[NPROC];   
  // current priority level of each process (0-3)
  int priority[NPROC];  
  // current state (e.g., SLEEPING or RUNNABLE) of each process
  enum procstate state[NPROC];  
  int ticks[NPROC][4];  
  // number of ticks each process has accumulated at each of 4 priorities
  int wait_ticks[NPROC][4]; 
};


#endif // _PSTAT_H_