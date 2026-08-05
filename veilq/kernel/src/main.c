
// VeilQ Kernel Main (Skeleton)
// Apache 2.0 Licensed
#include "kernel.h"

int main() {
    kernel_init();
    while (1) {
        kernel_loop();
    }
    return 0;
}
