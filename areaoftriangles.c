#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

int area(int aw, int bw, int cw){
    int p = (double)(aw+bw+cw)/2;

    double heron = sqrt(p*((p-aw)*(p-bw)*(p-cw)));
    return heron;
}
void sort_by_area(triangle* tr, int n) {
    int areat[100];
    for (int i = 0; i < n; i++){
        areat[i] = area(tr[i].a, tr[i].b, tr[i].c);
    }
	for (int i = 0; i < n; i++){
        for (int j = 0; j < n - 1 -i; j++){
            if (areat[j] > areat[j+1]){
                triangle temp = tr[j];
                tr[j] = tr[j+1];
                tr[j+1] = temp;
            }
        }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);

    printf("\n\n----------------------------\n\n");

	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}