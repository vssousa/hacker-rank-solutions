#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
   vector<int> integers;
    stringstream str_stream(str);
    char ch;
    int element;
    
    while(str_stream >> element){        
        integers.push_back(element);
        str_stream >> ch;
    }
    
    return integers;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
