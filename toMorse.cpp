#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main(){
    
    int n1 = 0;
    char ch;
    
    string s1;
    string morseC[] = {".____","..___","...__","...._",".....","_....","__...","___..","____.","_____","._","_...","_._.","_..",".",".._.","__.","....","..",".___","_._","._..","__","_.","___",".__.","__._","._.","...","_",".._","..._",".__","_.._","_.__","__.."};
    
    cout<<"Enter Encrypted Message: ";
    getline(cin,s1);
    
    cout<<"Secret Morse Code: ";

    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == ' ')
        {
            cout<<"   ";
        }else
        {
            ch = s1[i];
            n1 = ch;
            if (n1 >= 97)
            {
                cout<<morseC[n1-55-32]<<" ";
            }else if (n1 >= 65)
            {
                cout<<morseC[n1-55]<<" ";
            }else
            {
                n1 = ch - '0';
                cout<<morseC[n1-1]<<" ";
            }

        }  

    }
   

    cout<<endl;
    

}