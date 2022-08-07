//
//  test2.c
//  proj
//
//  Created by yangsiji on 2022/8/7.
//

#include <sys/mman.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

void testMmap(){
    pid_t pid;
    
    char* shm = (char*)mmap(0, 4096, PROT_READ | PROT_WRITE,
                            MAP_SHARED | MAP_ANONYMOUS, -1, 0);
    
    if (!(pid = fork())){
        sleep(1);
        printf("child got a message: %s\n", shm);
        sprintf(shm, "%s", "hello, father.\n");
        exit(0);
    }
    
    sprintf(shm, "%s", "hello, my child\n");
    sleep(2);
    printf("parent got a message: %s\n", shm);
}

void testProcess()
{
    pid_t pid;
    if (!(pid = fork())) {
           printf("I am child process \n");
           exit(0);
       }
       else {
           printf("I am father process \n");
           //wait(pid);
           sleep(3);
       }
       return ;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    testMmap();
    //testProcess();
    
    return 0;
}
