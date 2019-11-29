#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    
    // p와 y의 갯수를 측정
    int countp = 0;
    int county = 0;
    
    // 문자열을 순회하며 계산
    for (int i=0; i<s.length(); i++) {
        // 모든 문자열을 소문자로 바꾼다
        s[i] = tolower(s[i]);
        
        // p와 y의 개수를 센다
        if (s[i] == 'p') countp++;
        else if (s[i] == 'y') county++;
    }
    
    // p와 y의 개수가 같으면 true 아니면 false
    
    if (countp == county) answer = true;
    else answer = false;
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;
    
    
    return answer;
}