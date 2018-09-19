//Authors:Drew Cornatzer
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
    string firstname;
    string lastname;
  //get user input
    cout << "What is your first name?";
    cout<<endl;
    cin >> firstname;
    cout << "What is your last name?";
    cout<<endl;
    cin >> lastname;
    cout << "Welcome, ";
    cout << firstname[0];
    cout << lastname[0];
    cout << " here is your fortune..."<<endl;
  //tell fortune

  return 0;
}
