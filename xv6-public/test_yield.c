#include "types.h"
#include "stat.h"
#include "user.h"

#define NUM_LOOP 100

int main(int argc, char* argv[]){
  int p, i;
  p = fork(); // create child process
  if(p == 0) { // if child process
    for(i = 0; i < NUM_LOOP; i++){
      printf(1, "Child\n");
      yield();
    }
  }else{
    for(i = 0; i < NUM_LOOP; i++){
      printf(1,"Parent\n");
      yield();
    }
    wait();
  }
  exit();
}
