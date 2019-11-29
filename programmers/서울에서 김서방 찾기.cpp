#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    int count = 0;
    
    // seoul 배열의 반복자 선언
    vector<string>::iterator iter=seoul.begin();
    
    // seoul 배열의 처음부터 끝까지 검색
    for(iter;iter !=seoul.end(); iter++) {
        
        // "Kim"을 찾지 못하면 배열의 현재 위치를 하나 늘린다.
        if(*iter != "Kim") {
            count++;
        }
        // "Kim"을 찾으면 배열의 현재 위치를 출력하고 반복문을 빠져나온다.
        else {
            string index = to_string(count);
            answer = "김서방은 "+index+"에 있다";
            break;
        }
        
    }
    
    return answer;
}

/*
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    int pos=find(seoul.begin(),seoul.end(),"Kim")-seoul.begin();
    answer="김서방은 "+to_string(pos)+"에 있다";
    return answer;
}

#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    for(int i=0;i<seoul.size();i++){
        if(seoul[i]=="Kim")
            answer="김서방은 "+to_string(i)+"에 있다";
    }
    return answer;
}

*/