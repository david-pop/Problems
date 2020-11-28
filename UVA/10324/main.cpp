#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    string line;
    int n, i, j;
    int minInd, maxInd;
    int caseNumber = 0;

    char first;
    bool same;

    while((cin >> line) && (line.length() != 0)){
        caseNumber++;
        cout << "Case " << caseNumber << ":" << endl;

        cin >> n;
        while(n > 0){
            n--;
            same = true;

            cin >> i >> j;

            minInd = min(i, j);
            maxInd = max(i, j);

            first = line[minInd];
            for (int i = minInd+1; i <= maxInd; ++i){
                if (line[i] != first){
                    same = false;
                    break;
                }
            }

            if(same){
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}