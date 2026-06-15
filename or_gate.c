//----OR GATE----

#include <stdio.h>

int main() {
    int a[4] = {1, 0, 1, 0};
    int b[4] = {0, 1, 1, 0};
    int i, ans;

    printf("------ OR GATE ------\n");
    printf("A + B = A + B\n");

    for (i = 0; i < 4; i++) {
        if (a[i] == 0 && b[i] == 0)
            ans = 0;
        else
            ans = 1;

        printf("%d + %d = %d\n", a[i], b[i], ans);
    }

    return 0;
}
OUTPUT:
------ OR GATE ------
A + B = A + B
1 + 0 = 1
0 + 1 = 1
1 + 1 = 1
0 + 0 = 0
