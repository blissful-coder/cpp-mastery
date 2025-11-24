#include<iostream>

using namespace std;

int main(){
    int ival = 10;
    int &refVal = ival;
    // int &refVal2;
    cout<<"\n--------------\n";
    cout<<refVal++<<"\n";
    cout<<ival<<"\n";

    cout<<"\n--------------\n";
    refVal = 50;
    cout<<refVal<<"\n";
    cout<<ival<<"\n";
    int ii = refVal;
    cout<<ii<<"\n";
    
    cout<<"\n--------------\n";
    int &refVal3 = refVal;
    cout<<refVal3++<<"\n";
    cout<<refVal<<"\n";
    cout<<ival<<"\n";

    cout<<"\n--------------\n";
    int i = 1024, i2 = 2048; // i and i2 are both ints
    cout<<i<<" "<<i2 <<"\n";
    int &r = i, r2 = i2; // r is a reference bound to i; r2 is an int
    cout<<r<<" "<<r2 <<"\n";
    int i3 = 1024, &ri = i3; // i3 is an int; ri is a reference bound to i3
    cout<<i3<<" "<<ri <<"\n";
    int &r3 = i3, &r4 = i2; // both r3 and r4 are references
    cout<<r3<<" "<<r4 <<"\n";

    cout<<"\n--------------\n";
    int ivalq = 1.01;
    // int &rvalq1 = 1.01;
    int &rvalq2 = ival;
    // int &rvalq3;

    cout<<"\n--------Test1------\n";
    int qi = 0, &qr1 = qi; double qd = 0, &qr2 = qd;
    cout<<"\n"<<qi<<" "<<qr1<<" "<<qd<<" "<<qr2;
    qr2 = 3.14159;
    cout<<"\n"<<qi<<" "<<qr1<<" "<<qd<<" "<<qr2;
    qr2 = qr1;
    cout<<"\n"<<qi<<" "<<qr1<<" "<<qd<<" "<<qr2;
    qi = qr2;
    cout<<"\n"<<qi<<" "<<qr1<<" "<<qd<<" "<<qr2;
    qr1 = qd;
    cout<<"\n"<<qi<<" "<<qr1<<" "<<qd<<" "<<qr2;

    cout<<"\n--------Test2------\n";
    int ai, &ari = ai;
    ai = 5; ari = 10;
    std::cout << ai << " " << ari << std::endl;

    return 0;

}
