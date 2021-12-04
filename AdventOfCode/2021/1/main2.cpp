#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> measurements = vector<int>();

    int num;
    int numIncreased = 0;

    int x1, x2;

    while(cin >> num){
        measurements.push_back(num);
    }

    for(auto it = measurements.begin(); it < measurements.end(); it++){
        if(it + 3 >= measurements.end()){
            break;
        }

        x1 = it[0] + it[1] + it[2];
        x2 = it[1] + it[2] + it[3];

        if(x1 < x2){
            numIncreased++;
        }

    }

    cout << numIncreased;

    return 0;
}