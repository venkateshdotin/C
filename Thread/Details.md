
THREADS:
-------------------------------------------------

Thread Basics: A thread is the smallest unit of execution within a process. Threads share the same memory space and resources within a process but have their own execution context, including a program counter, stack, and set of registers.

Thread operations include thread creation,termination,synchronization(joins,blocking),scheduling,data management and process interaction.
A thread does not maintain a list of created threads, nor does it know the thread that created it.
All threads within a process share the same address space.
Threads in the same process share:
	Process instructions
	Most data
	open files (descriptors)
	signals and signal handlers
	current working directory
	User and group id
Each thread has a unique:
	Thread ID
	set of registers, stack pointer
	stack for local variables, return addresses
	signal mask
	priority
	Return value: errno
pthread functions return "0" if OK.

MULTITHREADING
-------------------------------
In Multiple thread concept code, data, files are same for all thread and but it have seperate Registers,stack.
Multithreading: Multithreading allows multiple threads to execute concurrently within the same process. This concurrency can lead to improved performance and responsiveness in embedded systems by allowing tasks to run in parallel.

Responsiveness :- Multithreading an interactive application may allow a program to continue running even if part of it is blocked or is performing a lengthy 
operation, thereby increasing responsiveness to the user.
Resource sharing:- By Default, threads share the memory and the resources of the process to which they belong.The benefit of sharing code and data is that it 
allows an application to have several different threads of activity within the same address space.
Economy :- Allocating memory and resources for process creation is costly. Because threads share resources of the process to which they belong,it is more 
economical to create and context-switch threads.
Utilization of multiprocessor architectures:- The benefits of multithreading can be greatly increased in an multiprocessor architecture, where threads may be 
running in parallel on different processors. A single-threaded process can only run on one CPU, no matter how many are available. Multithreading on a multi-CPU 
machine increases concurrency.


	MULTITHREADING MODELS AND HYPERTHREADING
--------------------------------------------------------
Types of Threads:
1. User threads:- Supported above the kernel and are managed without kernel support.
2. Kernel threads:- Supported and managed directly by the operating system.

Ultimatley, there must exist a relationship between user threads and kernel threads.
1. Many to one Model
2. One to One Model
3. Many to Many Model

1. Many to one Model :-
   Maps Many user-level threads to one kernel thread.
   Thread management is done by the thread library in user space,so it is efficient.
   Limitation :- the entire process will bloack if a thread makes a blocking system call.
    		Because only one thread can access the kernel at a time, multiple threads are unable to run in parallel on multiprocessors.
2. One to One Model:-
   Maps each user thread to a kernel thread.
   Provides more concurrency than the many-to one model by allowing anotherthread to run when a thread makes a blocking systemcall
   also allows multiple threads to run in parallel on multiprocessors.
   Limitation :- Creating a user thread requires creating the corresponding kernel thread.
   		Breacuse the overhead of creating kernel threads can burden the performance of an application, most implemenattions of this model restrict the 
		number of threads supported by the system.
4. Many to Many Model :-
   Multiplexes many user-level threads to a smaller or equal number of kernel threads.
   The number of kernel threads may be specific to either a particaular application or a particular machine.
   Developers can create as many user threads as necessary, and the corresponding kernel threads can run in parallel on a multiprocessor.
   Also, When a thread performs a blocking system call, the kernel can schedule another thread for execution.
 
Hyperthreading or Simultaneous Multicthreading(SMT)
--------------------------------------------------------------
Hyperthreaded systems allows their processor cores resources to become multiple logical processors for performance.
It enables the processor to execute two threads, or sets of instructions, at the same time. Since hyper-threading allows two streams to be executed in parallel, itis almost like having two seperate processors working together.

CPU Get NumberOfCores,NumberOFLogicalProcessors

Thread Cancellation:
-----------------------------
Thread cancellation of a target thread may occur in two different scenarios:
1. Asynchronous cancellation :- one thread immediately terminates the target thread.
2. Deferred cancellation :-  The target thread periodically checks whether it should terminate, allowing it an opportunity to terminat itself in an oderly fashion.

Where the difficulty with cancellation lies:-

In situations where:
1. Resources have been allocated to canceled thread -- Often , the os will reclaim system resources from a canceled thread but will not reclaim all resources.
Therefore, canceling a thread asynchronously may not free a necessary system-wide resource.

2. (With deffered Cancellation):- one thread indicates that a target thread is to be canceled. but cancellation occurs only after the target thread has checked a flag to determine if it should be canceled or not. This allows a thread to check whether it should be canceled at a point when it can be canceled safely.

The fork() and exec() System calls
---------------------------------------------
fork() :- The fork() system call is used to create a separate, duplicate process.
The Fork system call is used for creating a new process in Linux, and Unix systems, which is called the child process, which runs concurrently with the process 
that makes the fork() call (parent process). After a new child process is created, both processes will execute the next instruction following the fork() system 
call.

The child process uses the same pc(program counter), same CPU registers, and same open files which use in the parent process. It takes no parameters and returns an integer value.

n = 2^n;

Below are different values returned by fork().

Negative Value: The creation of a child process was unsuccessful.
Zero: Returned to the newly created child process.
Positive value: Returned to parent or caller. The value contains the process ID of the newly created child process.

in fork() have two options or versions where all threads can be duplicate or only particular thread should be duplicate it is depends on application.

exec() :- When an exxec() system call is invoked, the program specified in the parameter to exec() will replace the entire process --including all threads.

