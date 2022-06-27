#include <iostream>

using namespace std;

class Line {
    public:
        void setLength(double len);
        double getLength(void);
        Line();
    private:
        double length;
};

Line::Line(void) {
    cout << "Line constructor called" << endl;
}

void Line::setLength(double len) {
    length = len;
}

double Line::getLength(void) {
    return length;
}

int main() {
    Line newLine;

    newLine.setLength(6.0);
    cout << "Largura da linha: " << newLine.getLength() << endl;

    return 0;
}