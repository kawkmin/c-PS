우선순위가 있는 큐

- priority queue

문자열 split하기
str.erase(remove(str.begin(),str.end(),','),str.end()); =split효과

- for ever young에서 r 다음에 있는 스페이스를 발견하고 그 뒤에 있는 e부터 young의 g까지 전부 한칸씩 앞으로 복사하다 보니 마지막에 있던 ng도 출력된다.

정규표현식으로 문자열 바꾸기

- str=regex_replace(s,regex("[정규표현식]","[바꿀 문자]))

백터안 가장 큰 값 찾는법

- int max=*max_element(v.begin(),v,end());

한 문자열에 많은 변수가 주어질 때, s.substr은 시간이 오래걸리므로 stream 사용

띄어쓰기 기준으로 변수가 저장됨 
<br>#include <sstream.>
<br>stringstream ss(문자열);
<br>ss >> 변수1 >> 변수2 >> 변수3.....변수X;
