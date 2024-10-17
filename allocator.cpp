/*
THIS IS THE ACTUAL CUSTOM ALLOCATOR :)
*/

#include <iostream>
#include <memory>

struct AllocationMetrics{
    uint32_t TotalAllocated = 0;
    uint32_t TotalFreed = 0;

    uint32_t CurrentUsage(){ return TotalAllocated - TotalFreed; }
};

static AllocationMetrics s_AllocationMetrics;

void* operator new(size_t size){
    s_AllocationMetrics.TotalAllocated += size;
    return malloc(size); // -> allocate the size in the heap
}

void operator delete(void *memory, size_t size){
    s_AllocationMetrics.TotalFreed += size;
    free(memory); // -> free the memory
}

static void PrintMemoryUsage(){
    std::cout << "Memory Usage: " << s_AllocationMetrics.CurrentUsage() << " bytes" << std::endl;
}


// === DECLARING OBJECT (to be declared as ptr)===
struct Object{
    int x, y, z;
};

// === MAIN ===
int main(){ 
    PrintMemoryUsage(); 
    std::string name = "Jose";
    PrintMemoryUsage(); 

    {
        std::unique_ptr<Object> obj = std::make_unique<Object>();
        PrintMemoryUsage(); 
    }
    PrintMemoryUsage(); 
}