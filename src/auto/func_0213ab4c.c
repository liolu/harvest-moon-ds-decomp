/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* NNS_SndHeapClear from https://github.com/RonyxDumb/mkds src/arm9/0212d98c_Sound_Context_MaybeReset.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
typedef struct {
    void *prevObject;
    void *nextObject;
} NNSFndLink;
typedef struct {
    void *headObject;
    void *tailObject;
    u16 numObjects;
    u16 offset;
} NNSFndList;
extern void func_02138680(NNSFndList *list, void *object);
extern void *func_02138654(NNSFndList *list, void *object);
typedef struct NNSiFndHeapHead NNSiFndHeapHead;
struct NNSiFndHeapHead {
    u32 signature;
    NNSFndLink link;
    NNSFndList childList;
    void *heapStart;
    void *heapEnd;
    u32 attribute;
};
typedef NNSiFndHeapHead *NNSFndHeapHandle;
extern void func_02138a78(NNSFndHeapHandle heap, int mode);
typedef void (*NNSSndHeapDisposeCallback)(void *mem, u32 size, u32 data1, u32 data2);
typedef struct NNSSndHeap *NNSSndHeapHandle;
extern void func_0213ab4c(NNSSndHeapHandle heap);
typedef struct NNSSndHeap {
    NNSFndHeapHandle handle;
    NNSFndList sectionList;
} NNSSndHeap;
typedef struct NNSSndHeapBlock {
    NNSFndLink link;
    u32 size;
    NNSSndHeapDisposeCallback callback;
    u32 data1;
    u32 data2;
    u8 padding[0x20 - ((sizeof(NNSFndLink) + sizeof(NNSSndHeapDisposeCallback) + sizeof(u32) * 3) & 0x1f)];
    u32 buffer[0];
} NNSSndHeapBlock;
typedef struct NNSSndHeapSection {
    NNSFndList blockList;
    NNSFndLink link;
} NNSSndHeapSection;
extern BOOL func_0213a8f8(NNSSndHeap *heap);
extern void func_0213a8d4(void);
void func_0213ab4c(NNSSndHeapHandle heap) {
    NNSSndHeapSection *section = ((void *) 0);
    void *object;
    BOOL result;
    BOOL doCallback = 0;

    ((void) 0);

    while ((section = (NNSSndHeapSection *) func_02138654(&heap->sectionList, ((void *) 0))) != ((void *) 0)) {

        object = ((void *) 0);
        while ((object = func_02138654(&section->blockList, object)) != ((void *) 0)) {
            NNSSndHeapBlock *block = (NNSSndHeapBlock *) object;
            if (block->callback != ((void *) 0)) {
                block->callback(block->buffer, block->size, block->data1, block->data2);
                doCallback = 1;
            }
        }

        func_02138680(&heap->sectionList, section);
    }

    func_02138a78(heap->handle, ((1 << 0) | (1 << 1)));

    if (doCallback) {
        func_0213a8d4();
    }

    result = func_0213a8f8(heap);
    ((void) 0);
}
BOOL func_0213a8f8(NNSSndHeap *heap);
void func_0213a8d4(void);
