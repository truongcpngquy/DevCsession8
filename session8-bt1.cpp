#include <stdio.h>

int main() {
    
    int i,arr[5] = {10, 20, 30, 40, 50};
    for ( i = 4; i >= 0; i--) {
        printf(" %d: %d\n", i, arr[i]);
    }


    return 0;
}
