#include "types.h"
#include "user.h"
#include "syscall.h"

int main(int argc, char *argv[])
{

char *a[] = {"test1", "test2", "test3", "test3_5", "test3_75", "test4"};

int x;
for (x = 0; x < 6; x++)
{
   if (fork() == 0)
   {
      exec(a[x], argv);
   } 
   else
   {
      wait();
      printf(1,"########################################\n");
   }
     
}
   exit();
}

