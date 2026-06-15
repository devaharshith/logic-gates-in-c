#include <stdio.h>

int main() {
    int a[4] = {1, 0, 1, 0};
    int b[4] = {0, 1, 1, 0};
    int i, ans;

    printf("------ NOR GATE ------\n");
    printf("A ↓ B = A↓B\n");

    for (i = 0; i < 4; i++) {
        ans = !(a[i] + b[i]);
        printf("%d ↓ %d = %d\n", a[i], b[i], ans);
    }

    return 0;
}
OUTPUT:
------ NOR GATE ------
A ↓ B = A↓B
1 ↓ 0 = 0
0 ↓ 1 = 0
1 ↓ 1 = 0
0 ↓ 0 = 1
