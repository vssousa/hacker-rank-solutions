#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size;
    cin >> size;
    int array[size];
    // build array
    for(int index = size-1; index >= 0; index--){
        cin >> array[index];
    }
    // print array
    for(int index = 0; index < size; index++){
        cout << array[index] << " ";
    }
    return 0;
}
