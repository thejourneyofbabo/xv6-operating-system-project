#include "types.h"
#include "x86.h"
#include "defs.h"
#include "date.h"
#include "param.h"
#include "memlayout.h"
#include "mmu.h"
#include "proc.h"

// Simple system call
int
getgpid(void)
{
  return myproc()->parent->parent->pid;
}

//Wrapper for my_syscall
int
sys_getgpid(void){
  return getgpid();
}
