#include <stdio.h>

int is_finished(int *disk_count, int *disks_src, int *disks_aux, int *disks_dest);
void solve(int *disk_count, int *disks_src, int *disks_aux, int *disks_dest);

int main() {
    int disk_count = 8;
    int disks_src[8];
    int disks_aux[8];
    int disks_dest[8];
    for (int i = 0; i < disk_count; i++) {
        disks_src[i] = disk_count - i;
    }
    return 0;
}

int is_finished(int *disk_count, int *disks_src, int *disks_aux, int *disks_dest) {
    for (int i = 0; i < *disk_count; i++) {
        if (disks_src[i] != 0 || disks_aux[i] != 0) {
            return 0;
        }
        if (disks_dest[i] != *disk_count - i) {
            return 0;
        }
    }
    return 1;
}
