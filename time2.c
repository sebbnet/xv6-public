#include "types.h"
#include "user.h"
#include "syscall.h"

int main(int argc, char *argv[])
{
   printf(1, "\ntest 2: timed run\n");
   printf(1, "time() called, and # ticks returned when child/parent proc are finished\n\n");
   time();
   if (fork() == 0)
   {
        printf(1, "child\n");
        sleep(100);
   } 
   else
   {
       wait();
       printf(1, "parent\n");
   }
     sleep(200);
     exit();
}

