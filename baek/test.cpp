#include <iostream>
#include <cassert>

using namespace std;

// 정상까지 도착하면 미끄러지지 않는다는 것은
// 마지막날에는 무조건 미끄러지지 않는다는 뜻임
// C/(B-A) 는 정상까지 도착하는데 걸리는 날이라고 하면
// C/(B-A) - A가 된다 
// 여기서 - A 가 정상에 도착했을때 미끄러지지 않으므로 생긴 값이다

// (C : 정상까지 길이, B : 낮에 올라가는 길이, A : 밤에 미끄러지는 길이)

int main(){
    int day, night, goal, result;

    cin >> day >> night >> goal;

    assert(1 <= day && day <= 1'000'000'000);
    assert(1 <= night && night <= 1'000'000'000);
    assert(1 <= goal && goal <= 1'000'000'000);

    result = goal/(day-night) - night;
    cout << result << '\n';

    return 0;
}