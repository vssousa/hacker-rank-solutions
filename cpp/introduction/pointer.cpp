#include <stdio.h>
#include <cmath>
using namespace std;

void update(int *a,int *b) {
    // Complete this function
    int temp_sum = *a + *b;
    int temp_abs_difference = abs(*a - *b);
    *a = temp_sum;
    *b = temp_abs_difference;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}