#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("Process ID:%d\n",getpid());
	printf("parent process ID:%d\n",getpid());
	return 0;
}
