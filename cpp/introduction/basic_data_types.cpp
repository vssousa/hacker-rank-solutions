#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int first;
    long second;
    char third;
    float fourth;
    double fifth;
    scanf("%d %ld %c %f %lf", &first, &second, &third, &fourth, &fifth);
    printf("%d\n%ld\n%c\n%f\n%lf", first, second, third, fourth, fifth);
    return 0;
}
