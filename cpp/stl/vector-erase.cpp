#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin >> N;
    
    vector<long long int> elements;
    long long int new_element;
    while(N--){
        cin >> new_element;
        elements.push_back(new_element);
    }
    
    int x;
    cin >> x;
    elements.erase(elements.begin() + (x-1));
    
    int a, b;
    cin >> a >> b;
    elements.erase(elements.begin() + (a - 1), elements.begin() + (b - 1));
    
    cout << elements.size() << endl;
    for(int index=0; index < elements.size(); index++){
        cout << elements.at(index) << " ";
    }
    cout << endl;    
    
    return 0;
}
