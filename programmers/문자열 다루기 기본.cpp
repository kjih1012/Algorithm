#include <string>
#include <vector>
#include <cctype>

using namespace std;

bool solution(string s) {
    bool answer = true;
    
    // 문자열의 길이 측정
    if (s.length() != 4 && s.length() != 6) {
        answer = false;
    }
    else { 
        // 문자열을 순회하며 숫자인지 검사
        for (int i = 0; i<s.length(); i++) {
           if (!isdigit(s[i])){
               // 문자열에서 숫자가 아닌것을 만나면 정답을 false로 반환하고 반복문을 빠져나온다.
               answer = isdigit(s[i]);
               break;   
           }
        }
    }
    return answer;
}