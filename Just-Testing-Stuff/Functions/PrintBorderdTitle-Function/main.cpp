#include <iostream>

using namespace std;

void printBorderedTitle(const std::string& title){
    size_t borderLength = title.length() + 6;
    string border(borderLength, '#');

    cout << border << '\n';
    cout << "## " << title << " ##" << '\n';
    cout << border << '\n';
}

int main(){
    printBorderedTitle("Cool Border!");
    return 0;
}