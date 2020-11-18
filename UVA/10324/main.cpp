#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    string line, subline;
    int n, i, j;
    int minInd, maxInd;
    int caseNumber = 0;


    while((cin >> line) && (line.length() != 0)){
        caseNumber++;
        cout << "Case " << caseNumber << ":" << endl;

        cin >> n;
        while(n > 0){
            n--;

            cin >> i >> j;

            minInd = min(i, j);
            maxInd = max(i, j);

            subline = line.substr(minInd, maxInd - minInd + 1);

            if(subline.find("0") != string::npos && subline.find("1") != string::npos){
                cout << "No" << endl;
            } else {
                cout << "Yes" << endl;
            }
        }
    }

    return 0;
}