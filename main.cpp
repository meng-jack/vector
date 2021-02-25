#include <iostream>
#include <vector>
#include <stdexcept>

typedef std::vector<int>::size_type vc_size;

int add(std::vector<int> v_add);
int sub(std::vector<int> v_sub);
int mult(std::vector<int> v_mult);
int div(std::vector<int> v_div);
void p_info();
void user_info();

int main(){
    return 0;
}

int add(std::vector<int> v_add){
    vc_size vector_size = v_add.size();
    int add_result = v_add[0];

    for(int i = 1; i < vector_size; i++){
        add_result += v_add[i];
    }

    return add_result;
}

int sub(std::vector<int> v_sub){
    vc_size vector_size = v_sub.size();
    int sub_result = v_sub[0];

    for(int i = 1; i < vector_size; i++){
        sub_result -= v_sub[i];
    }

    return sub_result;
}

int mult(std::vector<int> v_mult){
    vc_size vector_size = v_mult.size();
    int mult_result = v_mult[0];

    for(int i = 1; i < vector_size; i++){
        mult_result *= v_mult[i];
    }

    return mult_result;
}

int div(std::vector<int> v_div){
    vc_size vector_size = v_div.size();
    int div_result = v_div[0];

    for(int i = 1; i < vector_size; i++){
        div_result /= v_div[i];
    }

    return div_result;
}

void p_info(){
    std::cout << "Vector" << std::endl;
    std::cout << "To Calculate: ";
}

void user_info(){
    char user_symbol;
    int user_value;
    std::vector<int> v;

    std::cin >> user_value;
    v.push_back(user_value)

    switch(user_symbol){
        case '+':
            std::cout << add(v);
            break;
        case '-':
            std::cout << sub(v);
            break;
        case '*':
            std::cout << mult(v);
            break;
        case '/':
            std::cout << div(v);
            break;
        default:
            throw std::runtime_error("Run Time Error");
    }
}
