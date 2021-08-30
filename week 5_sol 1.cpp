#include<iostream>
#include<string>
using namespace std;

main()
{
    string s;
    cout << "Input String : " ;
    getline(cin,s);

    int l=s.length();

    while(l>0)
    {
        cout << s << "\n" ;
        s.pop_back();
        l--;
    }
    return 0;
}
