#include <iostream>
#include <sstream>
#include <stdlib.h>
//#include <string>  - Kung sakaling ayaw magcompile sa inyo
//#include <cstring>   tanggalin niyo lang ang comment sa mga
//#include <cstdlib>   include na ito, Nakalimutan ko kasi kung alin lang ang mga kailangan ko para magawa ito. hahahaa
using namespace std;

// Pang tanggal kalawang lang guys, Madali lang ito :D
int number_magic(string num){
    stringstream themagic(num);
    int mynum=0;
    themagic >> mynum;
    return mynum;
}

string secret_key(string mykey){
    stringstream coderist;
    coderist << hex << uppercase << (int)mykey[0];
    string toreturn = coderist.str();
    return toreturn;
}
string magic_s(char mychar){
    string s;
    s+=mychar;
    return s;
}
int main()
{
    system("title Code Challenge");
    while(true) {
        system("cls");
        string password;
        string s;
        cout << "password: ";
        cin >> password;
        if(number_magic(secret_key(magic_s(password[0])))-7==50
           && number_magic(secret_key(magic_s(password[1])))-10==55
           && secret_key(magic_s(password[2]))=="5F"
           && number_magic(secret_key(magic_s(password[3])))-3==40
           && number_magic(secret_key(magic_s(password[4])))-1==40
           && secret_key(magic_s(password[5]))=="4E"
           && secret_key(magic_s(password[6]))=="5F"
           && number_magic(secret_key(magic_s(password[7])))==44
           && secret_key(magic_s(password[8]))=="6F"
           && secret_key(magic_s(password[9]))=="5F"
           && number_magic(secret_key(magic_s(password[10])))==49
           && number_magic(secret_key(magic_s(password[11])))-71==3){
            cout << "Congrats!!" << endl;
            break;
        }
        else {
            cout << "Wrong password!! Press any key to try again . . ." << endl;
            system("pause > nul");
        }
    }
}
