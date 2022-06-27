#include <iostream>

using namespace std;

class Line
{
    public:
        void setLength(double len);
        double getLength(void);
        Line(double len);

    private:
        double length;
};

Line::Line(double len): length(len)
{
    cout << "Line constructor called, length = " << len << endl;
}

// mesmo que o de cima mas não esta inicializando o length
// Line::Line(double len)
// {
//     cout << "Object is being created, length = " << len << endl;
//     length = len;
// }

void Line::setLength(double len) { length = len; };

double Line::getLength(void) { return length; };

int main()
{
    Line newLine(6.0);

    cout << "Largura: " << newLine.getLength() << endl;

    newLine.setLength(10.0);
    cout << "Largura: " << newLine.getLength() << endl;

    newLine.setLength(1.0);
    cout << "Largura: " << newLine.getLength() << endl;

    return 0;
}