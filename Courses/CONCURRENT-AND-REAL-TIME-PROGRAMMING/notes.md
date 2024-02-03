
## Lab src
- https://gitlab.dei.unipd.it/andrearigoni/crtp.git

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
	- https://github.com/google/guava/blob/master/guava/src/com/google/common/util/concurrent/RateLimiter.java
	- https://www.alibabacloud.com/blog/detailed-explanation-of-guava-ratelimiters-throttling-mechanism_594820
	- https://www.quora.com/What-is-the-difference-between-token-bucket-and-leaky-bucket-algorithms