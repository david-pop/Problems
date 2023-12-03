#include <iostream>
#include <cctype>

using namespace std;

int getCalibration(string line){
    int first = -1;
    int last = -1;

    for(char c : line){
        if(isdigit(c)){
            if(first == -1){
                first = c - '0';
                last = c - '0';
            } else {
                last = c - '0';
            }
        }
    }

    return first * 10 + last;
}

int main() {
    string line;
    int sum = 0;

    while(getline(cin, line)){
        sum += getCalibration(line);
    }

    cout << sum << endl;

    return 0;
}