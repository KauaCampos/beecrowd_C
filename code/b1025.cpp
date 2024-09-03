#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main () {
    _;

    int quantMarmore, quantConsulta, casos = 0, num;

    while (true) {
        cin >> quantMarmore >> quantConsulta;
        if (quantMarmore == 0 && quantConsulta == 0) break;
        casos++;

        vector<int> nums;
        for (int cont = 0; cont < quantMarmore; cont++) {
            cin >> num;
            nums.push_back(num);
        }

        sort (nums.begin(), nums.end());
        cout << "CASE# " << casos << ":" << endl;

        for (int cont = 0; cont < quantConsulta; cont++) {
            cin >> num;
            if (binary_search(nums.begin(), nums.end(), num)) {
                cout << num << " found at " << lower_bound(nums.begin(), nums.end(), num) 
                                               - nums.begin() + 1<< endl;
            }

            else cout << num << " not found" << endl;
        }
    }

    return 0;
}