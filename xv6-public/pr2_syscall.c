#include "types.h"
#include "x86.h"
#include "defs.h"
#include "date.h"
#include "param.h"
#include "memlayout.h"
#include "mmu.h"
#include "proc.h"

/*
 * Project2_ Implementing simple system schedulers on xv6
 * 
 * System call for Project2
*/

// void yield(void) // already made at sysproc.c
// 자신이 점유한 cpu 양보

int
getlev(void) {
  // 프로세서가 속한 큐의 레벨을 반환
  // MoQ에 속한 프로세스인 경유 99 반환

}

int
setpriority(int pid, int priority) {
  /*
   * 특정pid를 가지는 프로세스의 priority를 설정
   * Priority 설정에 성공한 경우 0을 반환.
   * 주어진 Pid를 가진 프로세스가 존재하지 않는 경우 -1을 반환
   * Priority가 0이상 10 이하의 정수가 아닌 경우 -2를 반환
   */

}

int
setmonopoly(int pid, int password) {
  /*
   * 특정 pid를 가진 프로세스의 MoQ로 이동. 인자로 독점 자격을 증명할 암호(자신의 학번)을 받는다.
   * 암호가 일치할 경우, MoQ의 크기를 반환
   * 존재하지 않는 프로세스의 pid인 경우 -1을 반환
   * 암호가 일치하지 않는 경우 -2를 반환
   * 이미 MoQ에 존재하는 프로세스인 경우 -3을 반환
   * 자기 자신을 MoQ로 이동시키려 하는 경우 -4를 반환
   */

}

void
monopolize() {
  // MoQ의 프로세스가 CPU를 독점하여 사용하도록 설정

}

void
unmonopolize() {
  // 독점적 스케줄링을 중지하고 기존의 MLFQ part로 돌아감

}



/////////////////////////////
/*
 * Wrapper functions
 */
/////////////////////////////

int
sys_getlev(void){
  getlev();
  return;
}

int
sys_setpriority(int pid, int priority) {
  setpriority(pid, priority);
  return;
}

int
sys_setmonopoly(int pid, int password) {
  setmonopoly(pid, password);
  return;
}

void
sys_monopolize() {
  monopolize();
  return;
}

void
sys_unmonopolize() {
  unmonopolize();
  return;
}
