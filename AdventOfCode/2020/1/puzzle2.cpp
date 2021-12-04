#include <iostream>
#include <vector>

using namespace std;

int find2020(vector<int>& numbers){
    for(int i = 0; i < numbers.size(); ++i){
        for(int j = i + 1; j < numbers.size(); ++j){
            for(int k = j + 1; k < numbers.size(); ++k){
                if(numbers[i] + numbers[j] + numbers[k] == 2020){
                    return numbers[i] * numbers[j] * numbers[k];
                }
            }
        }
    }

    return 0;
}

int main(){

    vector<int> numbers;
    int number, result;

    while(cin >> number){
        numbers.push_back(number);
    }

    cout << find2020(numbers) << endl;

    return 0;
}