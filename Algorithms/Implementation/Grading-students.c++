#include <bits/stdc++.h>

using namespace std;

vector < int > solve(int range,vector < int > grades){

    for (int grades_i = 0; grades_i < range; grades_i++){

        if (grades[grades_i] < 38){
            grades[grades_i] = grades[grades_i];
        }
        else if (grades[grades_i] >= 38) {
            if ((grades[grades_i]%5 == 3) || (grades[grades_i]%5 == 4))
            {
                grades[grades_i] = grades[grades_i]+ 5-(grades[grades_i]%5);
            }
        }
    }
    return grades;
}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       cin >> grades[grades_i];
    }
    vector < int > result = solve(n,grades);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;


    return 0;
}
