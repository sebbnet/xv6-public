#include "types.h"
#include "user.h"
#include "syscall.h"

int main(int argc, char *argv[])
{
   printf(1, "\n[+] test 3.5: timed run with different sleep values\n");
   printf(1, "[+] time() called, and # ticks returned when child/parent proc are finished\n");
   printf(1, "[+] expected ~550 ticks for child (150 + 400); ~1025 ticks for parent (150 + 400) + (75 + 400)\n\n");
   time();
   if (fork() == 0)
   {
        printf(1, "child\n");
        sleep(150);
   } 
   else
   {
       wait();
       printf(1, "parent\n");
       sleep(75);
   }
     sleep(400);
     exit();
}

