#include <iostream>

using namespace std;
class Name {
    public:
        void setName(string name);
        string getName(void);
        Name();     // constructor
        ~Name();    // destructor
    private:
        string name;
};

Name::Name(void){
    cout << "Name constructor called" << endl;
}

Name::~Name(void){
    cout << "Name destructor called" << endl;
}

void Name::setName(string name){
    this->name = name;
}

string Name::getName(void){
    return name;
}

int main() {
    Name newName;
    newName.setName("Joao");
    cout << "Nome: " << newName.getName() << endl;
    
    return 0;
}