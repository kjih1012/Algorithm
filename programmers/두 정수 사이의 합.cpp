#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;
    
    
    // a와 b의 대소 구분
    if (a>b) {
        
        // a가 더 크면 b에서부터 a까지의 모든 수를 더함
        for ( b ; b <= a ; b ++) {
            answer += b;
        }
    }
    else {
        
         // b가 더 크면 a에서부터 b까지의 모든 수를 더함
        for ( a ; a <= b; a ++) {
        answer += a;
        }
    }
    
    
    return answer;
}