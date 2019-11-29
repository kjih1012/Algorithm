#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    
    
    // 뒤에서 4자리 숫자만 빼고 *로 바꾼다.
    for (int i = 0; i<phone_number.length()-4; i++) {
        phone_number[i] = '*';
    }
    
    answer = phone_number;
    
    
    return answer;
}