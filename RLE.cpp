#include <iostream>
#include <map>

void findChars(std::map<char, int>* , std::string*);

int main()
{
    std::string s;
    getline(std::cin, s);
    std::map<char, int> myMap;
    findChars(&myMap, &s);
    return 0;
}

void tareriqanak(std::map<char, int>* map, std::string* str){
    int count = 1;
    for (int i = 0; i < str->length(); i++) {
        char a = str->at(i);
        for (int j = i+1; j < str->length(); j++) {
            if(a == str->at(j)){
                count++;
            }
        }
        map->insert({a, count});
        count = 1;
    }
    std::cout << std::endl;
    for (auto i = map->begin(); i!= map->end(); i++) {
        std::cout<<i->first<<i->second;
    }
}
