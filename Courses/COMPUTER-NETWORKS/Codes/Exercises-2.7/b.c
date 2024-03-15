#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int our_init_data_1 = 30;
int our_init_data_2 = 30;
int our_noinit_data_1;
int our_noinit_data_2;

void func(int i) {
    int s1 = 3;
    int s2 = 4;
    printf("\n%p\n", &s1);
    printf("\n%p\n", &s2);
    if (i != 0) {
        func(i - 1);
    }
}

void our_prints(void)
{
        int our_local_data_1 = 1;
        int our_local_data_2 = 1;
        int *p_1 = (int *) malloc (sizeof(int));
        int *p_2 = (int *) malloc (sizeof(int));

        printf("\n Pid of the process is = %d", getpid());
        printf("\n Addresses which fall into:");
        printf("\n Data  segment 1 = %p", &our_init_data_1); // static
        printf("\n Data  segment 2 = %p", &our_init_data_2); // static
        printf("\n BSS   segment 1 = %p", &our_noinit_data_1); // static also
        printf("\n BSS   segment 2 = %p", &our_noinit_data_2); // static also
        printf("\n Stack segment 1 = %p", &our_local_data_1); // stack
        printf("\n Stack segment 2 = %p", &our_local_data_2); // stack
        func(1);
        printf("\n Heap segment  1 = %p", p_1); // heap 
        printf("\n Heap segment  2 = %p\n", p_2); // heap 

	// while(1);
}

int main()
{
        our_prints();
        return 0;
}