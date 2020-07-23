#include<iostream>

using namespace std;

class listManagers {
    private:
        char name[30];
        int age;
    public:
        void getDetails();
        void putDetails();
};

void listManagers :: getDetails() {
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter age: ";
    cin>>age;
} 

void listManagers :: putDetails() {
    cout<<" name is "<<name<<" and his age is "<<age<<endl;
}

int main() {
    listManagers list[10];
    int n;

    cout << "Enter total number of person: ";
    cin >> n;

    for(int i=0;i<n;i++) {
        cout<<"Enter the details of Manager"<<i+1<<":\n";
        list[i].getDetails();
    }
    cout<<endl;

    for(int i=0;i<n;i++) {
        cout<< "\nThe Manager"<<i+1;
        list[i].putDetails();
    }

    return 0;
}
