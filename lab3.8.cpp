#include <stdio.h>
int main() {
    int h, m, s, add;
    scanf("%d:%d:%d", &h, &m, &s);
    scanf("%d", &add);
    m += add;
    h += m / 60;
    m %= 60;
    h %= 24;
    printf("Hour:%d\nMinute:%d\nsecond:%d", h, m, s);
}
