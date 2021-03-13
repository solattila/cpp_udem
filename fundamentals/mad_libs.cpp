/*
    Created by: Attila Soltész
    * MadLibs clone
*/

#include<iostream>
#include <string>
using namespace std;

int main()
{
    string adj1;
    string girl;
    string adj2;
    string occ1;
    string place;
    string cloth;
    string hobby;
    string adj3;
    string occ2;
    string boy;
    string man;

    cout << "Írj be egy jelzőt:" << endl;
    getline(cin, adj1);

    cout << "Írj be egy lány nevet:" << endl;
    getline(cin, girl);

    cout << "Írj be egy jelzőt:" << endl;
    getline(cin, adj2);

    cout << "Írj be egy foglalkozást:" << endl;
    getline(cin, occ1);

    cout << "Írj be egy helyet:" << endl;
    getline(cin, place);

    cout << "Írj be egy ruhadarabot:" << endl;
    getline(cin, cloth);

    cout << "Írj be egy hobbit:" << endl;
    getline(cin, hobby);

    cout << "Írj be egy jelzőt:" << endl;
    getline(cin, adj3);

    cout << "Írj be egy foglalkozást:" << endl;
    getline(cin, occ2);

    cout << "Írj be egy fiú nevet:" << endl;
    getline(cin, boy);

    cout << "Írj be egy férfi nevet:" << endl;
    getline(cin, man);


    cout << "Élt egyszer egy " << adj1 << " lány, " << girl << " aki egy " << adj2 << " " << occ1 << " volt a " << place << " királyságban. " 
    << girl << " szeretett " << cloth << "t hordani, főképp miközben " << hobby << "t csinált. Hozzá akart menni a " << adj3 << " " << occ2 
    << "hez, akinek a neve " << boy << " volt. Ám a lány apja, " << man << " király kitíltotta " << boy << "t a királyságból." << endl;
    
    

    return 0;
}