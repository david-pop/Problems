#include <iostream>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

vector<string> digits = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
vector<string> words = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int getCalibration(string line){
    int first = 0;
    size_t firstIndex = string::npos;

    int last = 0;
    size_t lastIndex = 0;

    size_t tempIndex = string::npos;

    for(int i = 0; i < 10; i++){
        tempIndex = line.find(digits[i]);
        if(tempIndex != string::npos && tempIndex <= firstIndex){
            firstIndex = tempIndex;
            first = i;
        }

        tempIndex = line.find(words[i]);
        if(tempIndex != string::npos && tempIndex <= firstIndex){
            firstIndex = tempIndex;
            first = i;
        }

        tempIndex = line.rfind(digits[i]);
        if(tempIndex != string::npos && tempIndex >= lastIndex){
            lastIndex = tempIndex;
            last = i;
        }

        tempIndex = line.rfind(words[i]);
        if(tempIndex != string::npos && tempIndex >= lastIndex){
            lastIndex = tempIndex;
            last = i;
        }
    }

    return first * 10 + last;
}

int main() {
    string line;

    int sum = 0;

    while(getline(cin, line)){
        transform(line.begin(), line.end(), line.begin(), [](unsigned char c){ return tolower(c); });
        
        cout << getCalibration(line) << endl;

        sum += getCalibration(line);
    }

    cout << sum << endl;

    return 0;
}