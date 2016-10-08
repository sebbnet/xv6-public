#include "types.h"
#include "user.h"
#include "syscall.h"

int main(int argc, char *argv[])
{
   printf(1, "\n[+] test 3: time + trap count run\n");
   printf(1, "[+] time() & traps() called; # ticks & trap count returned when child/parent proc are finished\n\n");
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

