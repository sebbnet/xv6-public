#include "types.h"
#include "user.h"
#include "syscall.h"

int main(int argc, char *argv[])
{
   printf(1, "\n[+] test 4: time + trap count run (with debug)\n");
   printf(1, "[+] time() & traps() called; # ticks & trap count returned when child/parent proc are finished (with debug)\n");
   printf(1, "[+] write trap recognition debug is disabled from printing to screen however, because it is super spammy\n\n");
   debug();
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

