#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    // index는 문자열 중 가운데 글자의 index값을 의미한다.
    int index = s.length()/2;
    
    // 단어의 길이가 짝수 일 때
    if (s.length()%2 == 0) {
        //substr 함수는 문자열의 일부를 리턴하는 함수. index-1부터 2개의 글자를 리턴한다.
        answer = s.substr(index-1,2);
    }
    // 단어의 길이가 홀수 일 때
    else {
        answer = s[index];
    }
    
    return answer;
}

/*
#include <string>

using namespace std;

string solution(string s) {
    return s.length()&1 ? s.substr(s.length()*0.5,1) : s.substr(s.length()*0.5-1,2);
}
*/