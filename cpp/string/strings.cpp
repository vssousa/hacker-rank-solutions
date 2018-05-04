#include <iostream>
#include <string>
using namespace std;

int main() {
   // Complete the program
    string a, b;
    cin >> a >> b;
    
    printf("%ld %ld\n", a.size(), b.size());
    printf("%s\n", (a + b).c_str());
    
    string a_line = a;
    a_line[0] = b[0];
    string b_line = b;
    b_line[0] = a[0];
    printf("%s %s", a_line.c_str(), b_line.c_str());
  
    return 0;
}
