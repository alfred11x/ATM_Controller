# ATM_Controller
Thos Code is of a simple ATM Controller. The content shows the overall flow of the process and the backend/frontend feature as refered as dmmy functions meant to be outsourced. Some Test Cases: 

**Successful Login and Account Selection
**

Input:

Card inserted: true
PIN entered: correct PIN
Accounts retrieved: [1001, 2002, 3003]
Account chosen: 1001

Expected Output:

Please insert your card
Please insert your PIN
Account0 : 1001
Account1 : 2002
Account2 : 3003
Please Choose Account
Balance: <balance of account 1001>
Would you like to Withdraw or deposit

**Incorrect Card Insertion
**

Input:

Card inserted: false

Expected Output:

Please insert your card
Please try again

**Incorrect PIN
**

Input:
yaml
Copy code
Card inserted: true
PIN entered: incorrect PIN

Expected Output:
lua
Copy code
Please insert your card
Please insert your PIN
Please try again

**No Accounts Found
**

Input:

Card inserted: true
PIN entered: correct PIN
Accounts retrieved: []

Expected Output:

Please insert your card
Please insert your PIN
Please try again

**Withdrawal Attempt with Sufficient Balance
**
Input:

Card inserted: true
PIN entered: correct PIN
Accounts retrieved: [1001]
Account chosen: 1001
Withdraw amount: 50

Expected Output:

Please insert your card
Please insert your PIN
Account0 : 1001
Please Choose Account
Balance: <balance of account 1001>
Would you like to Withdraw or deposit
Thanks for your withdrawal
Thanks for your deposit
