using namespace std;
#include <iostream>

int main()
{
   /* // 1 exercise (SUM of numbers)
    int num, k = 0, a = 0;
    cout << "input number\n"; cin >> num;
    for (; k <= num; k++) {
        a = a + k;
    }
    cout << "The SUM of all numbers to " << num << " is " << a << endl;

    // 2 exercise ( power of the number)
    int x, y;
    int a = 1 ;
    cout << "Input the number x\n"; cin >> x;
    cout << "Input the power y\n"; cin >> y;
    if (y == 1) {
        cout << x;
    }
    else if (y == 0) {
        cout << "1";
    }
    else {
        for (int k = y; k >= 1; k--) {
            a = a * x;
        }
        cout << a;
    }
    

    // середнє арифметичне від 1 до 1000
    int a = 0;
    for (int k = 1; k <= 1000; k++) {
        a = a + k;
    }
    a = a / 1000;
    cout << "The arithmetic mean is " << a << endl;
    

     //  4 exercise (Добуток усіх чисел)
    long long a = 1;
    int num;
    cout << "Input number (from 1 to 20)\n";  cin >> num;
    for (; num > 20;) {
        cout << "input numb up to 20" << endl;
        cin >> num;
    }
    for (int k = num; k <= 20; k++) {
        a = a * (long long)k;
    }
    cout << a << endl;
    */

    // 5 exercise (the multiplication table)
    int num;
    int a;
    cout << "Input number\n"; cin >> num;
    for (int k = 1; k <= 10; k++) {
        a = num * k;
        cout << num << " * " << k << " = " << a << endl;
    }
}