# OS Practical Viva Questions

---

### 1. What is an Operating System?
> An **Operating System (OS)** is a system software that acts as an intermediary between the computer hardware and the user. It manages computer hardware, software resources, and provides common services for computer programs.

---

### 2. What are the main functions of an Operating System?
> The main functions include:
> *   **Process Management:** Creating, scheduling, and terminating processes.
> *   **Memory Management:** Allocating and deallocating memory space.
> *   **File Management:** Organizing, storing, and retrieving files.
> *   **Device Management:** Managing I/O devices.
> *   **Security & Protection:** Protecting the system from unauthorized access and viruses.

---

### 3. What is a process?
> A **process** is a program in execution. It is an *active entity* that requires resources like CPU time, memory, and files to accomplish its task.

---

### 4. What is a thread?
> A **thread** is the smallest unit of processing that can be performed in an OS. It is a lightweight process that exists within a process and shares its resources (like memory and files) with other threads in the same process.

---

### 5. What is process scheduling?
> Process scheduling is the activity of the process manager that handles the removal of the running process from the CPU and the selection of another process on the basis of a particular strategy (like `FCFS`, `SJF`, `Round Robin`, etc.).

---

### 6. What is a CPU scheduler?
> A **CPU scheduler** (or short-term scheduler) is a component of the OS that decides which of the ready, in-memory processes is to be executed (allocated the CPU) next.

---

### 7. What is the difference between process and program?
> *   **Program:** It is a passive entity, like a file containing a list of instructions stored on disk.
> *   **Process:** It is an active entity. A program becomes a process when it is loaded into memory and its instructions are executed by the CPU.

---

### 8. What is deadlock?
> **Deadlock** is a situation where a set of processes are blocked because each process is holding a resource and waiting for another resource acquired by some other process. None of them can proceed.

---

### 9. What are the necessary conditions for deadlock?
> Deadlock can arise if four conditions hold simultaneously (Coffman conditions):
> 1.  **Mutual Exclusion:** At least one resource must be held in a non-sharable mode.
> 2.  **Hold and Wait:** A process holding at least one resource is waiting to acquire additional resources held by others.
> 3.  **No Preemption:** A resource can be released only voluntarily by the process holding it.
> 4.  **Circular Wait:** A set of waiting processes must exist such that P0 is waiting for P1, P1 is waiting for P2... and Pn is waiting for P0.

---

### 10. What is virtual memory?
> **Virtual memory** is a memory management technique that creates an illusion for users of a very large (main) memory. It allows the execution of processes that are not completely in the main memory by swapping data between RAM and the disk.

---

### 11. What is paging?
> **Paging** is a memory management scheme that eliminates the need for contiguous allocation of physical memory. It divides physical memory into fixed-sized blocks called **frames** and logical memory into blocks of the same size called **pages**. 

---

### 12. What is segmentation?
> **Segmentation** is a memory management technique that divides memory into variable-sized blocks called segments, based on the logical divisions of a program (like functions, arrays, objects) rather than fixed page sizes.

---

### 13. What is context switching?
> **Context switching** is the process of saving the state or context (register values, program counter, etc.) of a currently running process so that it can be restored and resumed later, and then loading the context of the next process to run on the CPU.

---

### 14. What is a file system?
> A **file system** is a method and data structure that the OS uses to control how data is stored, organized, and retrieved on a storage disk. 

---

### 15. What is the difference between multitasking and multiprocessing?
> *   **Multitasking:** A single CPU executes multiple tasks (processes) by rapidly switching between them, giving the illusion of parallel execution. 
> *   **Multiprocessing:** The system has more than one physically distinct CPU (or cores) executing multiple processes genuinely at the exact same time.
