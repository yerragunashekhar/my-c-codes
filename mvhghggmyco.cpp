#include<iostream>
#include<string>
using namespace std;
class FixedDepositAccount {
	private:
		string depositorname;
		string accountNumber;
		int timepriod;
		double Amount;
		public:
			fixedDepositAccount( )
			{
			
		 depositorName="";
		account number="";
			 timeperiod=0;
		 amount=0.0;
		
}
fixedDepositAccount(string name,string accNumber,int period,double initialAmount)
{
	depositorName=name;
	accountNumber=accNumber;
	timePeriod=period;
	amount = initialAmount;
	
}
     void withdraw(double withdrawalAmount){
     	int halfPeriod(double withdrawalAmount){
     		if(withdrawalAmount>0 && halfPeriod >0 ) {
     			cout<<"Half of the time period("<< halfPeriod<<"years)has passed."<<endl;
				 			cout<<"you can now withdraw money."<<endl;
							 if(withdrawalAmount <=amount){
							 	amount -=withdrawalAmount;
							 	cout<<"withdrawal successful.New balance:$"<<amount<<endl;
							 } 
							 }
							 
							 void display()
							 cout<<"Account Houlder:"<<depositorName<<endl;
							  cout<<"Account Number"<<accNumber<<endl;
							   cout<<"Time Period:"<<timePeriod<<endl;
							    cout<<"Deposit Amount:"<<amount<<endl;
							  }
		 };
		 int main()
		 {
		 
		 
		 FixedDepositAccount accounts[2]={
		 } FixedDepositAccount("customer 1","FD001",3,5000.0),
		 FixedDepositAccount("customer 2","FD002",5,10000.0),
		 	 };
		 	 for (int i=0;i<2;i++)
		 	 {
		 	 	accounts[i].display();
			  }
			  accounts[0].withdraw(1000.0);
			  return 0;
		}
