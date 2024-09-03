#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(void) {
    int ppid = getppid();
    printf("El ID de mi proceso padre es: %d\n", ppid);
    exit(0);
}

