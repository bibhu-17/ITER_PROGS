// binarybibhu@B-Dock:~/DPOS_2241014006/DPOS_Assignment4$ code a4q2l.c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

 int main( ) 
{ 
       pid_t c1; 
       int n=10; 
       c1=vfork( ); 
       if(c1==0) 
       { 
              printf(" Child\n");  
              n=20; 
              printf("n=%d \n",n); 
              _exit(0); 
       } 
       else 
       { 
              printf("Parent\n"); 
              printf("n=%d \n",n); 
       } 
       return 0; 
} 