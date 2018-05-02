#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int Q;
    cin >> Q;
    
    set<int> elements;
    int query_index=0;
    int y, x;
    while(query_index < Q){
        cin >> y >> x;
        if(y==1){
            elements.insert(x);
        }else if(y==2){
            elements.erase(x);
        }else if(y==3){
            set<int>::iterator itr = elements.find(x); 
            if(itr == elements.end()){
                cout << "No" << endl;
            }else{
                cout << "Yes" << endl;
            }
        }
        query_index++;
    }
    
    return 0;
}
