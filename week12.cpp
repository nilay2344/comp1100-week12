#include "iostream"
#include "string"
#include "chrono"
#include "thread"

using namespace std;

void sum (){
    int sum;
     int x,y;
     
     cout<<"enter first number:";
     cin>>x;
     cout<<"\nenter second number:";
     cin>>y;
     sum=x+y;
     cout<<"\nsum is:"<<sum<<endl<<endl;
}
void sub() {
    int sub;
     int x1,y1;
     
     cout<<"enter first number:";
     cin>>x1;
     cout<<"\nenter second number:";
     cin>>y1;
     sub=x1-y1;
     cout<<"\nSubtraction is:"<<sub<<endl<<endl;
}
void multi() {
    double multi;
     double x2,y2;
     
     cout<<"enter first number:";
     cin>>x2;
     cout<<"\nenter second number:";
     cin>>y2;
     multi=x2*y2;
     cout<<"\n Multipliation is  :"<<multi<<endl<<endl;
}
void div (){
    double divison;
     double x3,y3;

     cout<<"enter first number:";
     cin>>x3;
     cout<<"\nenter second number:";
     cin>>y3;
     divison=x3/y3;
     cout<<"\n Divison is:"<<divison<<endl<<endl;
}
void sqrt () {
    int square,n;
    cout << "Enter number " << endl;
    cin>> n;
    square=sqrt(n);
    cout << " \nSquare root is:" << square << endl;
     
}


int main() {
    while(0==0){
    cout << "Welcome to the Command line Calculator!" << endl;
    cout << "================================" << endl;
    cout << endl;
    cout << "Enter a number to select the program you want to run:" << endl;
    cout << endl;
    cout << "1: Add" << endl;
    cout << "2: Sub" << endl;
    cout << "3: Multiply" << endl;
    cout << "4: div" << endl;
    cout << "5: squrt" << endl;
    cout << "6: power" << endl;
    int selection;
    cin >> selection;
    
     

    if (cin.fail() || selection < 1 || selection > 6) {
        cout << endl;
        cout << "Have a nice day, goodbye!" << endl;
    }
    if(selection == 1) {
        sum();
    
    } else if(selection == 2) {
       sub(); 
      

    } else if(selection == 3) {
        multi();


    } else if(selection == 4) {
        div();


    } else if(selection == 5) {
        
      sqrt();

    } 
    }
    return 0;
} 