//----NOT GATE------

#include <stdio.h>

int main() {
    int a[4] = {1, 0, 1, 0};
    int i, ans;

    printf("------ NOT GATE ------\n");
    printf("A\tA'\n");

    for (i = 0; i < 4; i++) {
        ans = !a[i];
        printf("%d\t%d\n", a[i], ans);
    }

    return 0;
}
OUTPUT:
------ NOT GATE ------
A       A'
1       0
0       1
1       0
0       1
