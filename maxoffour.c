#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int arr [4] = {a, b, c, d};
    int maximum = 0;
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] > maximum){
            maximum = arr[i];
        }
    }
    printf ("%d", maximum);
    
    return 0;
}