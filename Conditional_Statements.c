#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    // Write your code here
        if(0<n && n<=9 && n<10)
    {
        if(1==n)
        {
            printf("one");
        }
        if(2==n)
        {
            printf("two");
        }
        if(3==n)
        {
            printf("three");
            
        }
        if(4==n)
        {
            printf("four");
        }
        if(5==n)
        {
            printf("five");
        }
        if(6==n)
        {
            printf("six");
        }
        if(7==n)
        {
            printf("seven");
        }
        if(8==n)
        {
            printf("eight");
        }
        if(9==n)
        {
            printf("nine");
        }
        
    }
    else
    {
        printf("Greater than 9");
    }
    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
