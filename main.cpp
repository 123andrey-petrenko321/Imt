/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int len ;
    cout << "Vvedite stroky: " << endl;

    getline(cin , s);
    len = s.size();

    for (int i = 0; i < len ;i++){
        if( s[i] == ' ' )
            cout << "probel" ;
        else
        {
            cout << s[i];
        }

        cout << endl;
    }


    return 0;
}
*/

#include <iostream>
#include <string>
using namespace std;
// funkcii
string getstr(string str)
{
    if  (str ==" ")
        return "Probel";
    else
        return str;
}
int main()
{
    string str;
    int len ;
    cout << "Vvedite stroky: " << endl;

    getline(cin , str);
    len = str.size();

    for (int i = 0; i < len ;i++){
        cout << getstr (str.substr(i,1)) << endl;
    }


    return 0;
}



