#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {

    // 계단의 층 수 만큼 반복한다.
    for (int i =0; i< n; i++) {

        // solution 1.
        // i를 현재 층수라고 정의한다면,
        //(전체 층수-현재 층수(i)-1)만큼 공백을 입력, 현재 층 수 만큼 '#'을 입력
        for (int i =1; i<= n; i++) {
            for (int j =0 ; j < n-i; j++){
                 cout << ' ';
            }
            for (int k=0; k<i; k++){
                cout << '#';
            }
            cout << endl;
        }

        // solution 2.
        // j를 초기화 후 똑같이 (전체 층수-현재 층수(i)-1)만큼 공백을 입력
        // '#'은 j를 반복한 횟수를 기억 후 전체 층수에서 j를 뺀 만큼 입력
        
        //int j = 0;
        //for (;j < n -i - 1; j++) {
        //     cout << " ";
        //     }
        //for (;j < n ;j++) {
        //    cout << "#";
        //    }
        //cout <<endl;
}

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
