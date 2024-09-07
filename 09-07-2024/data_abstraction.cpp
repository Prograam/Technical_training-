#include<iostream>
using namespace std;
class Rectangle {
    private:
    int width,height;
    public:
    void set_values(int x ,int y) {
        height = y;
        width = x;
    }
    int area () {
        return width * height;
    } 

};
int main() {
    Rectangle rect;
    int widht , height;
    cout << "enter the width value " << endl;
    cin >> widht;
    cout << "enter the height value " << endl;
    cin >> height ;
    rect.set_values(widht,height);
    cout << rect.area() << endl;
}