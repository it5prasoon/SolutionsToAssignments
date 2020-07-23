#include <iostream> 
#include <sstream> 
#include <string>
using namespace std; 
  
int main() 
{ 
    // Converting String to Number
    string s = "12345"; 
  
    stringstream num(s); 

    int x = 0; 
    num >> x; 
  
    cout << "Value of x : " << x; 

    // Converting Numbers to String
    ostringstream str1; 
    str1 << x;

    string s1 = str1.str();

    cout<< "\nThe new string number is: "; cout<< s1<<endl;

  
    return 0; 
}
