#include "types.h"
#include "user.h"
#include "syscall.h"

int main(int argc, char *argv[])
{
   printf(1, "\n[+] test 3.75: time + trap count (with more traps) run\n");
   printf(1, "[+] time() & traps() called; # ticks & trap count returned when child/parent proc are finished\n\n");
   printf(1,"[+] this run should contain the same amt of traps as the test3.c run\n");
   printf(1,"[+] plus the amount of extra characters, which will result in the same\n");
   printf(1,"[+] number of extra write traps, (59 - 38) + 71 + 73 + 69  ~= 233\n\n");
   time();
   traps();
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

