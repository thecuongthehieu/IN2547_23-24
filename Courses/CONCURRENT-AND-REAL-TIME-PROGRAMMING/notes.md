
## Lab src
- https://gitlab.dei.unipd.it/andrearigoni/crtp.git

## Final Project
- https://github.com/thecuongthehieu/producer-consumer-orchestrator

## Lecture 1
- Intro


## Lecture 2
- TLB (Translation Lookaside Buffer) review

## Lecture 3
## Lab 1
- Spectre


## Lab 2
- auto keyword in C
 
## Lecture 4
- https://stackoverflow.com/questions/67416686/serializing-structure-which-includes-pointers

## Lab 3
- Sobel Operator

## Lab 4
- https://stackoverflow.com/questions/7335920/what-specifically-are-wall-clock-time-user-cpu-time-and-system-cpu-time-in-uni

## Lab 5
- (Copy-On-Write)
- https://stackoverflow.com/questions/4594329/difference-between-the-address-space-of-parent-process-and-its-child-process-in
- https://www.sobyte.net/post/2022-08/fork-cow/

## Lecture 5
- Deadlock prevention vs Deadlock avoidance
- Banker’s Algorithm (https://en.wikipedia.org/wiki/Banker%27s_algorithm#:~:text=Banker's%20algorithm%20is%20a%20resource,conditions%20for%20all%20other%20pending)

## Lecture 6

## Lab 6
- int[10000000] vs new int[10000000 (Because of stack size: ulimit -s)
- man ps in mac vs linux (It is different https://askubuntu.com/questions/11392/what-are-the-key-differences-between-mac-os-and-linux-that-prevent-application-c)
- undertand fork(), shmat(), Virtual and Physical Memory when fork(), msgget()
- (msgget, shmat)
- IPC_CREAT | 0666 versus 0666
- https://stackoverflow.com/questions/34288108/keys-of-shared-memory-segments-are-0
- https://man7.org/linux/man-pages/man2/shmget.2.html

## Lab 7
- Why not UDP/IP?
- Raw Socket
- Why casting sockaddr_in to sockaddr_in? (https://stackoverflow.com/questions/21099041/why-do-we-cast-sockaddr-in-to-sockaddr-when-calling-bind)

## Lab 8
- Out-of-band data ??
- MSG_CONFIRM flag ??
- Socket Options (SO_REUSEADDR, SO_KEEPALIVE, ...) ??
- Mask in IP address


## Lecture 7

- Critical instant theorem
- Note ri,j is the release time, but not necessarily same with the beginning time of execution
- Rate-monotonic scheduling algorithm (Proof of Optimality)

## Lab 9

- $@ in Makefile
- Deadlock src
- pthead\_lock and pthread\_cond
- Issue: wait() inside Critical Section

## Lecture 8
- Processor Utilization
- Response Time Analysis (The smallest solution is the actual worst-case)
- In RM, we are assuming that all the initial task jobs are released simultaneously at time 0 (Critical Instant)

## Lecture 9
- Sporadic task
- Minimum interarrival time
- Deadline Monotonic Priority Order
- How does Scheduler know the characteristics of tasks?
- " If critical regions cannot be nested " ?
- Priority Inheritance and Priority Ceiling Protocol

## Lab 10
- OpenMP

## Lecture 10
- What Realtime system means?
- VxWorks Realtime OS
- PREEMPT RT Linux patch 
- Spinlock
	- https://stackoverflow.com/questions/43043260/interrupt-on-a-processor-while-another-process-is-spinning-for-lock#:~:text=6-,So%20what%20will%20happen%20if%20an%20interrupt%20happens%20on%20the,will%20go%20back%20to%20spinning.
	- Because they avoid overhead from operating system process rescheduling or context switching, spinlocks are efficient if threads are likely to be blocked for only short periods. For this reason, operating-system kernels often use spinlocks. (https://en.wikipedia.org/wiki/Spinlock) 
	- Semaphores have the advantage over spinlocks of allowing another task gain processor usage while waiting for the resource, but cannot be used for synchronization with ISRs (the ISR does not run in the context of any task). Moreover, when the critical section is very short, it may be preferable to use spinlocks because they are simpler and introduce less overhead.
- Scheduler() in textbook page 405:
	- The kernel code provides routine schedule() that can be invoked in a system routine or in response to an interrupt. In the former case, the run- ning task voluntarily yields the processor, for example, when issuing an I/O operation or waiting on a semaphore. In these cases, the kernel code running in the task’s context will call schedule() after starting the I/O operation or when detecting that the semaphore count is already zero.

## Lab 11
- Linux to Linux-Realtime
- Mesured Delayed and Jitter
- \<sched.h\>
- What happens with concurrency inside kernels?
- NICE VS PRIORITY ( PR )
- Avoid memory swap (vmstat, panic_on_oom)
- Consider sched for final project

## Lab 12
- Thread CPU affinity
- Task activation pattern 
- Early Deadline First
- The deadline scheduler is optimal for periodic and sporadic tasks with deadlines less than or equal to
their periods on uniprocessor systems.
- The SCHED_DEADLINE in chrt
- chrt command in linux
- Rate Monotonic threshold of CPU utilization
- Can't run multiple scheduling policies in one core (the Kernel will apply CPU affinity!) What happen when run processes with chrt cmd
- echo $$ > cgroup.procs


## Final Project notes
- https://stackoverflow.com/questions/15164484/when-to-call-sem-unlink
- https://medium.com/helderco/semaphores-in-mac-os-x-fd7a7418e13b
- https://stackoverflow.com/questions/8063613/c-macs-os-x-semaphore-h-trouble-with-sem-open-and-sem-wait
	- Try putting sem\_unlink(""); before sem\_open(),
- https://pubs.opengroup.org/onlinepubs/009696699/functions/sem_open.html 
	- If O\_EXCL is set and O\_CREAT is not set, the effect is undefined
- https://stackoverflow.com/questions/71765047/why-we-unlink-semaphores-before-we-initializes-them 
	- Because named semaphores such as are created by sem_open() have kernel persistence.
- Rate Limiter
	- https://github.com/mfycheng/ratelimiter/tree/master 
	- https://github.com/google/guava/blob/master/guava/src/com/google/common/util/concurrent/RateLimiter.java
	- https://www.alibabacloud.com/blog/detailed-explanation-of-guava-ratelimiters-throttling-mechanism_594820
	*(The token bucket limits the average inflow rate and allows sudden increase in traffic. The request can be processed as long as it has a token. Three or four tokens can be given at one time. The leaky bucket limits the constant outflow rate, which is set to a fixed value. )*
	- https://www.quora.com/What-is-the-difference-between-token-bucket-and-leaky-bucket-algorithms
- https://lists.freebsd.org/pipermail/freebsd-performance/2005-February/001143.html
	- unix domain sockets vs internet sockets 
- Makefile
	- https://stackoverflow.com/questions/3220277/what-do-the-makefile-symbols-and-mean
- Function Pointer
	- https://www.ibm.com/docs/en/zos/2.2.0?topic=functions-pointers 
- https://www.baeldung.com/java-synchronized 
	- When we use a synchronized block, Java internally uses a monitor, also known as a monitor lock or intrinsic lock, to provide synchronization
- Process Synchronization
	- Process Synchronisation ensures the orderly and conflict-free execution of concurrent processes
	- Another purpose of synchronization, presented in Chapter 4, is to regulate process access to shared resources.
- Spinlock vs Mutex
	- https://stackoverflow.com/questions/5869825/when-should-one-use-a-spinlock-instead-of-mutex

- Question\-Answer:
	- Timesharing is an effective policy for interactive systems but cannot be considered in real-time applications because it is not possible to predict in advance the maximum response time for a given task
	- Earliest Deadline First, which not only ensures real-time behavior in a system of periodic tasks, but represents the “best” scheduling policy ever attainable for a given set of periodic tasks under certain conditions:
		- Tasks are scheduled preemptively
		- There is only one processor
- The PCI protocol, in fact, poses a limit in the number of connected devices and, therefore, in order to handle a larger number of devices, it is necessary to use PCI to PCI bridges
- Bridge setting, as well as other very low-level configurations are normally performed before the operating system starts, and are carried out by the Basic Input/Output System (BIOS), a code which is normally stored on ROM and executed as soon as the computer is powered