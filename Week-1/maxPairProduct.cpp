#include <bits/stdc++.h>

using namespace std;

#define ll long long 

ll MaxPairwiseProduct(const vector<int>& numbers) {
    ll result = 0;
    int n = numbers.size();

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if((ll)numbers[i] * numbers[j] > result){
                result = ((ll)numbers[i]) * numbers[j];
            }
           
        }
    }

    return result;
}

ll MaxPairwiseProductFast(const vector<int>& numbers) {
    
    int n = numbers.size();
    int max_index1 = -1;
    for(int i=0;i<n;i++){
        if((max_index1 == -1) || (numbers[i] > numbers[max_index1]))
            max_index1 = i;
    }
    
    int max_index2 = -1;
    for(int j=0;j<n;j++){
        if((j != max_index1) && ((max_index2 == -1) || (numbers[j] > numbers[max_index2])))
            max_index2 = j;
    }

    return((ll)numbers[max_index1])*numbers[max_index2];
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    ll result = MaxPairwiseProductFast(numbers);
    cout << result << "\n";
    return 0;
}
