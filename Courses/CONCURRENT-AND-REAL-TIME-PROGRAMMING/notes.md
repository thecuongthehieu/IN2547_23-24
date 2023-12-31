
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


## Final Project notes
- https://stackoverflow.com/questions/15164484/when-to-call-sem-unlink
- https://medium.com/helderco/semaphores-in-mac-os-x-fd7a7418e13b
- 