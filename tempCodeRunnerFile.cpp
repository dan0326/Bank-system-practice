#include <iostream>
#include<iomanip>
using namespace std;

void showbalance(double balance);
double deposit();
double withdraw(double balance);

int main(){

   double balance=0;
   int choice=0;


 do{
  cout<<"*************\n";
  cout<<"Enter your choice\n";
  cout<<"*************\n";
  cout<<"1.Show balance\n";
  cout<<"2.Deposit money\n";
  cout<<"3.Withdraw money\n";
  cout<<"4.Exit\n";
  cin>>choice;

  cin.clear();
  fflush(stdin);
  
  switch (choice)
  {
     case 1:showbalance(balance);
         break;
     case 2:balance+= deposit();
            showbalance(balance);
         break;
     case 3:balance-= withdraw(balance);
            showbalance(balance);
         break;
     case 4: cout<<"Thaanks for your visiting!\n";
         break;
     default: cout<<"Invalid choice\n";    
  }


     }while(choice!=4);

 return 0;
}

void showbalance(double balance){

    cout<<"you're balance is : $"<< std::setprecision(2) <<std::fixed<<balance<<'\n';
}

double withdraw(double balance){
   double amount=0;
   
   cout<<"Enter the amount you'd like to withdraw: ";
   cin>>amount;

    if(amount>balance){
        cout<<"Insufficient fund!\n";
        return 0;
    }
    else if(amount<0){
        cout<<"That's not a valid amount!\n";
        return 0;
    }
    else{
        return amount;
    }
    
}

double deposit(){
    double amount=0;

    cout<<"Enter amount to be deposited: ";
    cin>>amount;

    if (amount>0){
       return amount;
    }
    else{
        cout<<"That's not a valid amount!\n";
        return 0;
    }
}
