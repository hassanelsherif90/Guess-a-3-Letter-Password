#include <iostream>
#include <string>
using namespace std;

string ReadPassWord()
{
    string PassWoed = "";
    cout << "Please Enter 3 Capetal Letter ?" << endl;
    cin >> PassWoed;
    return PassWoed;
}


bool GuessPassWord(string OriginalPassWord){
    string word = "";
    int Counter = 0;
    cout << "\n";
    for (int i = 65 ; i <= 90 ; i++)
    {
        for (int j = 65 ; j <= 90 ; j++)
        {
            for (int k = 65 ; k <= 90 ; k++)
            {
                Counter ++;

                word = word + char(i);
                word = word + char(j);
                word = word + char(k);
                
                cout << "Trail [ " << Counter << " ] :" << word << endl;
                if (word == OriginalPassWord)
                    {
                        cout << "\nPassword is " << word << "\n";
                        cout << "Found after " << Counter << "\n";
                        return true;
                    }
                else
                    {
                        word = "";
                    }
            }
        }
    }
    return false;
}

int main()
{
    GuessPassWord(ReadPassWord());
    return 0;
}
