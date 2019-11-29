#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    vector<int>::iterator iter=arr.begin();
    int num = arr[0];
    
    
    // arr의 처음 원소는 무조건 넣어준다.
    answer.push_back(arr[0]);
    
    // arr를 순회하면서 이전과 같은 숫자가 나타나는지 검사
    for (iter; iter != arr.end();iter++) {
        // 전 인덱스의 원소와 현 인덱스 원소가 다르면 answer 배열에 넣고 num의 값을 바꾸어서 다음 인덱스와 비교.
        if (num != *iter) {
            answer.push_back(*iter);
            num = *iter;
        }
    }
    
    // 같은 방식으로 풀었으나 arr의 원소를 직접 지우는 방식을 채택하여 효율성 테스트에서 실패하였다.
    //for (iter; iter != arr.end();) {
    //    if (num == *iter) {
    //        arr.erase(iter);
    //    }
    //    else {
    //      num = *iter;
    //      iter++;
    //    }
    //}
    //answer = arr;

    return answer;
}