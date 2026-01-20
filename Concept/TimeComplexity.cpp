#include <iostream>

int Func1(int N);
int Func4(int N);

int main(){
    int N = 100000;
    std::cout << "N: " << N << std::endl << "제곱수: " << Func4(N) << std::endl;
    return 0;
}

//==============================================================================
// 문제 1: N 이하의 자연수 중에서 3, 5의 배수인 수를 모두 합한 값을 구해라, (N<50,000의 자연수)
int Func1(int N){
    int sum = 0;

    for (int i=1; i<=N; i++){
        if((i % 3 == 0) || (i%5 == 0)){
            sum += i;
        }
    }
    return sum;
}
//==============================================================================
// 문제 4: N 이하의 자연수 중에서 가장 큰 2의 거듭제곱수를 반환하는 함수 (N은 10억 이하의 자연수)
int Func4(int N){
    int val = 1;
    while(val< N){
        val*=2;
    }
    return val/2;
}