#include <iostream>
#include <vector>

using namespace std;

int main(){
    int months{};
    double down{};
    double loan{};
    int numdep{};

    double amort{};
    double value{};

    int month{};
    double dep{};
    int curr_month{};

    while((cin >> months >> down >> loan >> numdep) && (months > 0))
    {
        curr_month = 0;
        month = 0;

        vector<int> month_vector(numdep);
        vector<double> dep_vector(numdep);

        for(int i = 0; i < numdep; ++i)
        {
            cin >> month_vector[i] >> dep_vector[i];
        }

        value = (loan + down);
        amort = loan / months;
        dep = dep_vector[0];

        while(curr_month < months)
        {
            value *= (1.0 - dep);

            if(loan < value){
                break;
            }

            ++curr_month;

            if((month + 1) < numdep && curr_month >= month_vector[month + 1])
            {
                ++month;
                dep = dep_vector[month];
            }

            loan -= amort;
        }

        cout << curr_month << " " << ((curr_month == 1) ? "month" : "months") << endl;
    }
}
