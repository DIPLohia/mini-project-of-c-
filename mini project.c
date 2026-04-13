#include <stdio.h>
#include <string.h>

struct C { char n[50], p[15]; } c[100];
int n = 0;

int main() {
    int ch, i;

    while (1) {
        printf("\n1.Add 2.Show 3.Search 4.Delete 5.Exit\n");
        scanf("%d", &ch);

        if (ch == 1) {
            scanf(" %[^\n]", c[n].n);
            scanf("%s", c[n].p);
            n++;
        }

        else if (ch == 2) {
            for (i = 0; i < n; i++)
                printf("%s - %s\n", c[i].n, c[i].p);
        }

        else if (ch == 3) {
            char s[50];
            scanf(" %[^\n]", s);
            for (i = 0; i < n; i++)
                if (!strcmp(c[i].n, s))
                    printf("%s - %s\n", c[i].n, c[i].p);
        }

        else if (ch == 4) {
            char s[50];
            scanf(" %[^\n]", s);
            for (i = 0; i < n; i++)
                if (!strcmp(c[i].n, s)) {
                    for (int j = i; j < n - 1; j++)
                        c[j] = c[j + 1];
                    n--;
                }
        }

        else if (ch == 5)
            return 0;
    }
}