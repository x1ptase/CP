#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    double a, b, c;
    double delta, x1, x2;
	cin >> a >> b >> c;

    if(a == 0){
        // Linear equation: bx + c = 0
        if(b == 0){
            if(c == 0){
                cout << "WOW";
            } else{
                cout << "NO";
            }
        } else{
            double x=-c/b;
            cout << fixed << setprecision(2) << x;
        }
    } else{
        // Quadratic equation: ax^2 + bx + c = 0
        delta=b*b - 4*a*c;
        
        if(delta < 0){
            cout << "NO";
        } else if(delta == 0){
            cout << fixed << setprecision(2) << -b / (2*a);
        } else{
            x1=(-b-sqrt(delta)) / (2*a);
            x2=(-b+sqrt(delta)) / (2*a);
            cout << fixed << setprecision(2) << x1 << " " << x2;
        }
    }

    return 0;
}
