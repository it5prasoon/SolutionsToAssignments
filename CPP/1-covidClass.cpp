#include<iostream>

using namespace std;

class Covid {
    private:
        char name[30];
        bool fever, cough, breath;
    
    public:
        void getDetails(void);
        void putDetails(void);
        bool suspect(void);

};

void Covid :: getDetails(void){
    cout<<"Name: ";
    cin>>name;
    cout<<"Enter the details as 1 for Yes and 0 for False: "<<endl;
    cout<<"Fever: "; cin>>fever;
    cout<<"Cough: "; cin>>cough;
    cout<<"Breath: "; cin>>breath;
}

bool Covid :: suspect() {
    if(fever&cough || cough&breath || fever&breath ) {
        return true;
    }
    else
    {
        return false;
    }
}

void Covid :: putDetails(void) {

    cout<< "Name: "<<name;
    if(suspect()) {
        cout<<"\nHe is a Suspect.";
    }
    else
    {
        cout<<"\nHe is not a Suspect.";
    }
    
}

int main() {
    Covid cvd[10];
    int n;

    cout << "Enter total number of person: ";
    cin >> n;

    for(int i=0;i<n;i++) {
        cout<<"Enter the details: "<<i+1<<":\n";
        cvd[i].getDetails();
    }
    cout<<endl;

    for(int i=0;i<n;i++) {
        cout<< "\n\nDetails of person: "<<i+1<<":\n";
        cvd[i].putDetails();
    }



    return 0;
}
