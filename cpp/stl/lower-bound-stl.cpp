#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N, new_element;
    vector<int> elements;
    cin >> N;    
    while(N--){
        cin >> new_element;
        elements.push_back(new_element);
    }
    
    int Q, query;
    cin >> Q;
    while(Q--){
        cin >> query;
        vector<int>::iterator lower = lower_bound(elements.begin(), elements.end(), query);
        cout << (*lower==query ?"Yes" :"No") << " " << (distance(elements.begin(),lower)+1) << endl;
    }    
    
    return 0;
}
