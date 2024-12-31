#include <iostream>
#include <random>

size_t len;

char char_gen(void){
    int a;
    do{
        a = rand() % 127;
    }while (a <= 21 || a >= 126);
    
    return char(a);
}

size_t gen_len(void){
    int a;
    do{
        a = rand() % 20;
    }while (a <= 8 || a >= 21);
    
    return a;
}


int main(void){
    srand(clock());
    len = gen_len(); 
    char *password = new char[len];
    
    for(ptrdiff_t i = 0; i < len; i++)
            password[i] = char_gen();

    std::cout << password << '\n';
    
    delete[] password;
    
    return 0;
}
