#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int Q;
    cin >> Q;
    
    map<string, int> students;
    
    int query_index = 0;
    int type, Y;
    string X;    
    while(query_index < Q){
        query_index++;
        
        cin >> type >> X;
        if(type == 1){
            cin >> Y;
            map<string,int>::iterator itr = students.find(X);
            if(itr == students.end()){
                students.insert(make_pair(X,Y));
            }else{
                itr->second += Y;
            }            
        }else if(type == 2){
            students.erase(X);
        }else if(type == 3){
            map<string,int>::iterator itr = students.find(X);
            if(itr == students.end()){
                cout << 0 << endl;
                continue;
            }
            cout << itr->second << endl;
        }        
    }    
    
    return 0;
}
