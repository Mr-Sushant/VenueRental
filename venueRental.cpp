#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

class User {
    string userName, aadhar, email;
    int age;

    public :
        string getAadhar(){
            return aadhar;
        }
        void inputDetails(){
            cout<<"Enter Name ";
            getline(cin,userName);
            cout<<"Enter age ";
            cin>>age;
            cout<<"Enter Email ";
            cin>>email;
            cout<<"Enter Aadhar Number ";
            cin>>aadhar;
        }

        void printDetails(){
            cout<<"Name "<<userName<<endl;
            cout<<"Age "<<age<<endl;
            cout<<"Email "<<email<<endl;
            cout<<"Aadhar Number "<<aadhar<<endl;
        }
};

class Venue{
    int id;
    int start, end;
    string aadhar;
    public:
        int getId(){
            return id;
        }
        int getStart(){
            return start;
        }
        int getEnd(){
            return end;
        }
        string getAad(){
            return aadhar;
        }
        void inputDetails(User ob) {
            cout<<" Enter Court ID ";
            cin>>id;
            cout<<"Enter Start Time ";
            cin>>start;
            cout<<"Enter End Time ";
            cin>>end;
            aadhar = ob.getAadhar();
        }
        void printDetails() {
            cout<<"Venue ID "<<id<<endl;
            cout<<"Start time "<<start<<endl;
            cout<<"End time "<<end<<endl;
            cout<<"Aadhaar Number "<<aadhar<<endl;
        }
};

void insertDetails(vector<Venue> &v, Venue obj) {
    if(find(v.begin(),v.end(),obj) != v.end()){
        cout<<"You have already done a booking... \n";
        return;
    }
    for(Venue x : v){
        if(x.getId() == obj.getId() && obj.getStart() >= x.getStart() && obj.getEnd() <= x.getEnd()){
            cout<<"Sorry.. Some other booking is present.\n";
            return;
        }
    }
    v.push_back(obj);
    cout<<"Successfully Inserted\n";
    return;
}

void findByAad(vector<Venue> &v, string aad) {
    for(Venue x : v){
        if(x.getAad() == aad)
        {
            cout<<"Booking Found !!\n Here are the details:\n";
            x.printDetails();
        }
    }
    cout<<"No Booking Found\n";
}

int main(){
    vector<Venue> v;
    char choice = 'y';
    cout<<"1. Make a new Booking\n";
    cout<<"2. Find a booking\n";
    int ch;
    cin>>ch;
    if(ch == 1){
        do{
            User ob;
            ob.inputDetails();
            cout<<"Badminton Court ID = 1\n";
            cout<<"Futsal Court    ID = 2\n";
            cout<<"Tennis Court    ID = 3\n";
            cout<<"Billiards Court ID = 4\n";
            Venue obj;
            obj.inputDetails(ob);
            insertDetails(v,obj);
            cout<<"Continue ? ";
            cin>>choice;
        }while(choice != 'n');
    }
    if(ch == 2){
        cout<<"Enter Aadhaar Number to Find Booking ";
        string aad;
        cin>>aad;
        findByAad(v,aad);
    }
    return 0;
}