#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
       std::string a;
       std::string b;
       cin>>a;
       cin>>b;
        cout<<a.size()<<" "<<b.size()<<"\n";
        cout<<a+b<<"\n";
        std::string c1;
        c1=a[0];
        a[0]=b[0];
        b[0]=c1[0];
        cout<<a<<' '<<b;
    return 0;
}
