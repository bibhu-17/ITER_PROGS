// binarybibhu@B-Dock:~/DPOS_2241014006/DPOS_Assignment4$ code a4q2q.c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main( ) 
{ 
      int j,i=5; 
      for(j=1;j<3;j++) 
      { 
            if(fork()==0) 
            { 
                  i=i+1; 
                  break; 
            } 
            else  
                  wait(NULL);  
      }      
      printf("%d",i); 
      return 0; 
} 