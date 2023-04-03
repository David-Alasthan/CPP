#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main() {
        // double a,b,c,s,area;

        // cout << "Enter three sides of triangle\n";
        // cin >> a >> b >> c;
        // if ((a+b>c) && (b+c>a) && (c+a>b))
        // {
        //         s = (a+b+c)/2;
        //         area = sqrt(s*(s-a)*(s-b)*(s-c));
        //         cout << "\nArea of triangle = " << area << endl;
        // }
        // else 
        // cout << "\nTriangle can't be formed" << endl;

        // return 0;

        // int file_size = 0;
        // int counter = 0;
        // file_size = 100;

        // double sales = 9.99;

        // cout << file_size;

        // int a = 1;
        // int b = 2;
        // int temp = a;
        // a = b;
        // b = temp;

        // cout << a << endl;

        int kounter , oldCtr , newCtr;

        oldCtr = 1234;
        newCtr = ++oldCtr;
        kounter = newCtr--; //kounter=1234 , newCtr = 1234

        cout << "oldCtr = " << oldCtr << endl;

        cout << "newCtr = " << newCtr << endl;
        cout << "kounter = " << kounter << endl;

        return 0;
}