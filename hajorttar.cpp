#include <iostream>
#include <cstring>

void popoxutyun(char*);

int main(){
    
    std::string myString = "";
    getline(std::cin, myString);
    popoxutyun(&myString[0]);
}


void popoxutyun(char* s){
    for (int i = 0; i < strlen(s); i++) {
        std::cout<<((char)(*(s + i)+1));
    }
}
