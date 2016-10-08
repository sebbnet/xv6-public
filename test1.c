#include "types.h"
#include "user.h"
#include "syscall.h"

int main(int argc, char *argv[])
{
   printf(1, "\n[+] test 1: plain run\n");
   printf(1, "[+] no new sys calls, parent forks to child; child returns after ~300; parent ~500 ticks\n\n");
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

