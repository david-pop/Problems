#include <iostream>
#include <string>
#include <limits>

using namespace std;
int main(){
	int n, p;
	double d;
	int r;

	string bestName;
	double bestPrice;
	double bestCompliance;

	string name;
	double compliance;

	string line;

	int rfpIndex = 1;

	while(cin >> n >> p && !(n == 0 && p == 0)){
		bestCompliance = 0.0;
		bestPrice = numeric_limits<double>::max();

		cin.ignore(1000, '\n');

		for(int i = 0; i < n; ++i){
		  cin.ignore(1000, '\n');
		}

		for(int prop = 0; prop < p; ++prop){
			getline(cin, name);
			cin >> d >> r;
			cin.ignore(1000, '\n');

			for(int i = 0; i < r; ++i){
				getline(cin, line);
			}

			compliance = (double)r / n;

			if(compliance > bestCompliance || (compliance == bestCompliance && d < bestPrice)){
				bestName = name;
				bestPrice = d;
				bestCompliance = compliance;
			}
		}

		if(rfpIndex > 1){
			cout << endl;
		}

		cout << "RFP #" << rfpIndex << endl;
		cout << bestName << endl;
		++rfpIndex	;
	}

	return 0;
}
