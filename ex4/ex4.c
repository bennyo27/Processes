// Write a program that calls `fork()` and then calls some form of `exec()`
// to run the program `/bin/ls`. Try a few variants of `exec()`, such as 
// `execl()`, `execle()`, `execv()`, and others. Why do you think there 
// are so many variants of the same basic call?

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(void)
{
    // Your code here    
    pid_t child = fork();

    if(child == 0) {
        int exec = execl("/bin/ls", "ls", "-l", NULL);
    }
    }else {
       int exec = execle("/bin/ls", "ls", "-l", NULL);
    }

    return 0;
}
