#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin >> N;
    
    vector<int> elements;
    int new_element;
    while(N--){
        cin >> new_element;
        elements.push_back(new_element);
    }
    
    sort(elements.begin(), elements.end());
    for(int index=0; index < elements.size(); index++){
        cout << elements.at(index) << " ";
    }
    cout << endl;
    
    return 0;
}
