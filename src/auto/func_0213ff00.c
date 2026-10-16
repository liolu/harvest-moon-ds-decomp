/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020787c4 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_thread.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
extern u32 func_02141124(void);
extern u32 func_02141138(u32 irq_flag);
extern void func_02141708(u32 data, void *dst, u32 size);
typedef struct OSContext {
    u32 cpsr;
    u32 r[13];
    u32 sp;
    u32 lr;
    u32 pc;
    char unk_40[0x20];
} OSContext;
typedef struct OSThread OSThread;
typedef struct OSMutex OSMutex;
typedef void (*OSThreadDestructor)(void *);
typedef struct OSThreadLinkedList {
    OSThread *prev;
    OSThread *next;
} OSThreadLinkedList;
typedef struct OSMutexQueue {
    OSMutex *head;
    OSMutex *tail;
} OSMutexQueue;
typedef struct OSMutexLinkedList {
    OSMutex *next;
    OSMutex *prev;
} OSMutexLinkedList;
typedef struct OSThreadQueue {
    OSThread *head;
    OSThread *tail;
} OSThreadQueue;
typedef struct OSThread {
    OSContext context;
    s32 state;
    OSThread *next;
    u32 id;
    u32 priority;
    void *profiler;
    OSThreadQueue *queue;
    OSThreadLinkedList list;
    OSMutex *mutex;
    OSMutexQueue mutexQueue;
    u32 stackTop;
    u32 stackBottom;
    u32 stackOffset;
    OSThreadQueue joinQueue;
    void *unk_A4[3];
    void *unk_B0;
    OSThreadDestructor destructor;
    void *userParam;
    s32 error;
} OSThread;
typedef struct OSMutex {
    OSThreadQueue queue;
    OSThread *thread;
    s32 count;
    OSMutexLinkedList list;
} OSMutex;
extern void func_02140428(OSThread *thread, OSThreadDestructor destructor);
extern void func_02140430(OSContext *context, void (*func)(void *), void *sp);
extern void func_0213ff00(OSThread *thread, void (*func)(void *), void *arg, void *stack, u32 stackSize, u32 prio);
extern void func_0213fffc(void);
s32 func_0213fbbc(void);
void func_0213fd04(OSThread *thread);
void func_0213ff00(OSThread *thread, void (*func)(void *), void *arg, void *stack, u32 stackSize, u32 prio) {
    u32 prev = func_02141124();
    s32 id   = func_0213fbbc();

    thread->priority = prio;
    thread->id       = id;
    thread->state    = 0;
    thread->profiler = 0;

    func_0213fd04(thread);

    thread->stackBottom = (u32) stack;
    thread->stackTop    = (u32) stack - stackSize;
    thread->stackOffset = 0;

    *(u32 *) (thread->stackBottom - sizeof(u32)) = 0xFDDB597D;
    *(u32 *) thread->stackTop                    = 0x7BF9DD5B;

    thread->joinQueue.head = thread->joinQueue.tail = 0;

    func_02140430(&thread->context, func, (void *) ((u32) stack - sizeof(u32)));

    thread->context.r[0] = (u32) arg;
    thread->context.lr   = (u32) func_0213fffc;

    func_02141708(0, (void *) ((u32) stack - stackSize + sizeof(u32)), stackSize - sizeof(u32) * 2);

    thread->mutex           = 0;
    thread->mutexQueue.head = 0;
    thread->mutexQueue.tail = 0;

    func_02140428(thread, 0);

    thread->queue     = 0;
    thread->list.next = 0;
    thread->list.prev = 0;

    func_02141708(0, thread->unk_A4, sizeof(thread->unk_A4));

    thread->unk_B0 = 0;

    func_02141138(prev);
}
void func_0213fffc(void);
void func_02140428(OSThread *thread, OSThreadDestructor destructor);
