    .export __sdcc_heap
    .export __sdcc_heap_end
    .export __sdcc_heap_size

    .const __sdcc_heap_size = 1024
    .section bss.heap
__sdcc_heap:
    res 1024
__sdcc_heap_end:
