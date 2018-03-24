#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

string convert_number_to_string(int n){
    if(n == 1){
        return "one";
    }else if(n == 2){
        return "two";
    }else if(n == 3){
        return "three";
    }else if(n == 4){
        return "four";
    }else if(n == 5){
        return "five";
    }else if(n == 6){
        return "six";
    }else if(n == 7){
        return "seven";
    }else if(n == 8){
        return "eight";
    }else if(n == 9){
        return "nine";
    }
    return "";
}

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    for(int number = a; number <= b; number++){
        if(number > 0 && number <= 9){
            string number_string = convert_number_to_string(number);
            cout << number_string;        
        }else if (number > 9){
            if(number % 2 == 0){
                cout << "even";
            }else{
                cout << "odd";
            }
        }
        cout << endl;
    }
    return 0;
}
