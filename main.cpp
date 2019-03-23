#include <iostream>
#include <cstdio>

#include <queue>

const char*  DEFAULT_DICTIONARY = "words.txt";
int main() {
    std::cout << "Hello, World!" << std::endl;
    std::queue<const char*> test_q;
    test_q.push("test1");
    std::cout << test_q.front() << std::endl;
    test_q.pop();
    return 0;
}