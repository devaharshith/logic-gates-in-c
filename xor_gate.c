#include <stdio.h>

int main() {
    int a[4] = {0, 0, 1, 1};
    int b[4] = {0, 1, 0, 1};
    int i, ans;

    printf("------ XOR GATE ------\n");
    printf("A\tB\tA⊕B\n");

    for (i = 0; i < 4; i++) {
        ans = a[i] ^ b[i];
        printf("%d\t%d\t%d\n", a[i], b[i], ans);
    }

    return 0;
}
OUTPUT:
------ XOR GATE ------
A       B       A⊕ B
0       0       0
0       1       1
1       0       1
1       1       0
