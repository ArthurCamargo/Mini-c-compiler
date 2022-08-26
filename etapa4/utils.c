#include "utils.h"



void* reallocate(void* pointer, size_t oldSize, size_t newSize) {
    if (newSize == 0) {
        free(pointer);
        return NULL;
    }
    void* result = realloc(pointer, newSize);
    /*
     * Ok, afters some research, found taht when the pointer is null, realloc
     * behaves as malloc(newSize) which is pretty cool!
     */
    
    return result;
}
