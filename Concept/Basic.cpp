#include <iostream>

int HelloWorld(){
    /* ***************** Input Output *************** */
    std::cout << "Hello, world" << std::endl;

    std::cout << "hi" << std::endl
          << "my name is "
          << "Psi" << std::endl;
    // <output>
    // hi
    // my name is Psi
    /* ************************************ */
    return 0;
}
int B(){
    // //======= <for, while ,if else> ============
    // int i, sum = 0;

    // for (i = 1; i<=10; i++){
    //     sum += i;
    // }
    // std::cout << "Sum: " << sum << std::endl;
    // // ============================================

    // ============ < if else> =====================
    int lucky_num = 3;
    int user_input;

    std::cout << "행운의 숫자를 맞춰보세요" << std::endl;

    while(1){
        std::cout << "Input: " << std::endl;
        std::cin >> user_input;
        if (lucky_num == user_input){
            std::cout << "정답입니다!!" << std::endl;
            break;
        } 
        else {
            std::cout << "오답입니다.." << std::endl;
        }
    }
    return 0;
}
int Change_val(int* p){
    *p = 3;
    return 0;
}
int main(){
    int a = 5;
    std::cout << "a: "<< a << std::endl;

    Change_val(&a);

    std::cout << "Num: "<< a << std::endl;
    
    int b = 3;
    int& another_b = b; //정의할때 참조해야함, reference는 메모리 상에 존재하지 않을 수도 있음.
    std::cout << "b: "<< b << std::endl;
    std::cout << "another_b: "<< another_b << std::endl;

    another_b = 1;
    std::cout << "b: "<< b << std::endl;
    std::cout << "another_b: "<< another_b << std::endl;
    
    return 0;
}