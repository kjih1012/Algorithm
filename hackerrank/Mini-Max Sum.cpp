#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the miniMaxSum function below.
void miniMaxSum(vector<int> arr) {

    // 문제에서 32bit를 넘어가는 정수를 받을 수 있다고 했기 때문에 long 타입의 변수를 선언.
    // long min = 0, max = 0;
    // min은 배열의 최소값을 찾는것이기 때문에 long 타입 중 가장 큰 수를 저장.
    long min = 2147483647, max = 0;
    long total = 0;

    // solution 1. 배열을 내림차순으로 정렬 후 앞에서 4개, 뒤에서 4개의 수를 더한 것이 최대값과 최소값이 된다.
    //sort(arr.begin(), arr.end());

    //for (int i = 0 ; i < 4 ; i ++) {
       // min += arr[i];
       // max += arr[arr.size()-1-i];
    //}
    //cout << min << ' ' << max << endl;

    // solution 2. 배열에서 가장 큰 값과 가장 작은 값을 구한 후 배열의 총 합에서 가장 큰 값과 가장 작은 값을 뺀 것이 최대값과 최소값이 된다.
    for (int i = 0; i < arr.size(); i++) {
        total += arr[i];
        min = (arr[i] < min) ? arr[i] : min;
        max = (arr[i] > max) ? arr[i] : max;
    }

    cout << total-max << ' ' << total-min;
}

int main()
{
    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(5);

    for (int i = 0; i < 5; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    miniMaxSum(arr);

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
