#include "types.h"
#include "stat.h"
#include "user.h"

int main(void){
  int studentid = 2019092115;
  printf(1,"My student id is %d\n", studentid);
  int pid = getpid();
  printf(1,"My pid is %d\n", pid);
  int gpid = getgpid();
  printf(1,"My gpid is %d\n", gpid);
  exit();
}
