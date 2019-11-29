#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    
    // 문자열 크기만큼 순회
       for (int i=0; i<n; i++) {
           
           //문자열 인덱스가 홀수면 수를 입력, 짝수면 박을 입력
        answer += i%2==0 ? "수":"박";
        //if (i%2 == 0) answer.append("수");
        //else answer.append("박");
    }
    
    
    return answer;
}