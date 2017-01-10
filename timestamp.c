#include <time.h>
#include <stdint.h>

#include "timestamp.h"

uint64_t get_timestamp() {
    struct timespec cur;
    clock_gettime(CLOCK_MONOTONIC, &cur);
    return (cur.tv_sec) * 1000000 + (cur.tv_nsec) / 1000;
}
