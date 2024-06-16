#include <iostream>
using namespace std;

pair<bool, int> CheckifCardIn(){
    bool card_check=false;
    int card_number=0;
    // OUTSOURCED
    return make_pair(card_check, card_number);
}

bool CheckifPINiscorrect(pin) {
    bool pin_check=false;
    // OUTSOURCED
    return pin_check;
}

int get_accounts(card_number, pin) {
    int accounts={};
    //OUTSOURCED
    return accounts;
}
void withdraw_action(account,amount) {
    //OUTSOURCED
    if (amount>balance) {
        cout<<"Try again"<<endl;
    }
    else {
        execute_withdraw(account, amount);
        cout<< "Thanks for your withdrawal"<<endl;
    }
}
void deposit_action(account, amount) {
    execute_deposit(account, amount);
    cout<< "Thanks for your deposit"<<endl;
}

void account_features(account_chosen) {
    int balance=getBalance(account_chosen);
    int withdraw=0;
    int deposit=0;
    bool action=false;
    int account=account_chosen;
    //OUTSOURCED: Allows user to go in their respective account info and get Balance info, Display buttons for Withdrawal and Deposit
    cout<< "Balance" << balance <<endl;
    cout<< "Would you like to Withdraw or deposit" <<endl;
    // OUTSOURCED take_userinput() return if he will do an action
    cin>> action;
    if (action==true){
        // OUTSOURCED ASK IN UI FOR DEPOSIT OR WITHDRAW
        cin>> deposit;
        cin>> withdraw;
        withdraw_action(account, withdraw);
        deposit_action(account, deposit);
    }
}


int main() {
    int pin=0;
    int accounts[]={};
    int card_number=0;
    bool Card_in=false;
    int account_chosen[]={};

    cout<<"Please insert your card" <<endl;
    tie(card_number, Card_in)= CheckifCardIn();
    if (Card_in == false ) {
        cout<<"Please try again" <<endl;
    }
    cout<<"Please insert your PIN" <<endl;
    cin>> pin;
    if (CheckifPINiscorrect(pin) == false) {
        cout<<"Please try again" <<endl;
    }
    accounts=get_accounts();
    for (int i=0; i<sizeof(accounts); i++) {
        cout<< "Account"<< i <<" : " << accounts[i];
    }
    cout<< "Please Choose Account"<<endl;
    account_features(account_chosen);

    return 0;

}
