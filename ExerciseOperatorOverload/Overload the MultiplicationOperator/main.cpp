//
// Created by damya on 30.1.2024 г..
//

#include "Price.h"


int main(){

    Price p1(5, "bgn");
    Price p2(5, "bgn");

    Price p3 = p1 + p2;

//    try {
//        Price p1(5, "bgn");
//        Price p2(5, "bn");
//
//        Price p3 = p1 + p2;
//
//        cout << p3.getAmount() << " " << p3.getCurrency() << endl;
//    } catch (const std::invalid_argument& e) {
//        cout << "Error: " << e.what() << endl;
//    }

    cout << p1 << endl;
    p1.operator++();
    cout << p1 << endl;
    p1.operator++(2); // 2 is a dummy value
    cout<<p1 <<endl;

    p2.operator*(5);
    cout << p2 << endl;


    Price profit = p1(10.0);

    cout << p1 << endl;

    return 0;
}