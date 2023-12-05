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
// Function to calculate the area of a triangle using Heron's formula
double calculate_area(int a, int b, int c)
{
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

// Function to compare triangles based on their areas
int compare_triangles(const void* a, const void* b)
{
    double area_a = calculate_area(((triangle*)a)->a, ((triangle*)a)->b, ((triangle*)a)->c);
    double area_b = calculate_area(((triangle*)b)->a, ((triangle*)b)->b, ((triangle*)b)->c);

    if (area_a < area_b) return -1;
    if (area_a > area_b) return 1;
    return 0;
}

void sort_by_area(triangle* tr, int n)
{
    qsort(tr, n, sizeof(triangle), compare_triangles);
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
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}