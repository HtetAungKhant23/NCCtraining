//
// Created by User on 11/9/2022.
//
// version 1

#include "iostream"
#include "cycleTicketForNCC.h"
using namespace std;
using namespace CYCLE;

void CycleTicketForNCC::welcome() {
    cout<<"Welcome from our cycle lucky show"<<endl;
    cout<<"10000mmk per coupon"<<endl;
    availableNum();
}


// array data while running the program and showing available number
// when program is begin for the next time , need to add reading new data function from file
void CycleTicketForNCC::availableNum(){
    cout<<endl;

    for(int i=0; i<size; i++){
        _avNum[i]=i+1;
    }
    cout<<"Available number are:";
    for(int j=0; j<size; j++){
        cout<<" "<<_avNum[j];
    }
    cout<<endl;

    luckyNum();

} // array data while running the program and showing available number


// lucky Number function
void CycleTicketForNCC::luckyNum(){
    string option;
    int lucNum=0;

    while (true) {
        cout << "Enter Your Lucky Number : ";
        cin >> lucNum;

        //    cin >> _luckyNum[luckyNumberIdx]; // ဖျက်ရန်

// to check is user lucky number in available luckyNumber array
        for (int i = 0; i < size; i++) {
            if (_avNum[i] == lucNum) {
                _luckyNum[luckyNumberIdx] = lucNum;

                // to delete data(lucky number) in (_avNum)array
                for (int j = i; j < size; j++) {
                    _avNum[j] = _avNum[j + 1];
                }

                // testing output of (_avNum)array data
                for (int k = 0; k < size - 1; k++) {
                    cout << _avNum[k] << " ";
                }

                cout << "Enter 1 to add lucky number || Enter 2 to pay for lucky number :";
                cin >> option;

                if (option == "1") {
                    luckyNumberIdx++;
                    size--;
                    luckyNum();
                } else if (option == "2") {
                    dataToFile(); // စမ်းထားတာ ဖျက်ရန်
                    // to add ငွေချေ function
                    paymentFun();
                }
            }
        }

        cout << "Your number cannot out of access!" << endl;

    }



// ဖျက်ရန် [
//        cout<<"Enter 1 to add lucky number : Enter 2 to pay for lucky number :";
//        cin>>option;
//
//        if(option=="1"){
//            luckyNumberIdx++;
//            luckyNum();
//        } else if (option=="2"){
//            // to add ငွေချေ function
//            paymentFun();
//        }
// ဖျက်ရန် ]

} // lucky Number function


// ငွေချေ function
void CycleTicketForNCC::paymentFun(){

    string userName;
    int userPhone;
    string userAddress;
    int userPayment=0;
    int userPaid=0;
    cout<<"Enter your name : ";
    cin>>userName;
    cout<<"Enter your phone number : ";
    cin>>userPhone;
    cout<<"Enter your address : ";
    cin>>userAddress;

    userPayment = couponPrice*luckyNumberIdx;
    while(true) {
        cout << "Please paid " << userPayment << "mmk " << "for your " << luckyNumberIdx << "coupon";
        cin >> userPaid;

        if (userPaid == userPayment) {
            cout<<"Your payment success!"<<endl;
            cout<<"Thank you and Good Luck"<<endl;
            // to add name , ph , address to respective array



            // to show detail about user's lucky number and his info
            showDetail();

            // to add asking function that is play again or wanna quit ?

        } else{
            cout<<"Please retype your payment amount correctly!";
        }
    }

} // ငွေချေ function




// show detail about user's lucky number and his info
void CycleTicketForNCC::showDetail(){





} // show detail about user's lucky number and his info









// array data overwriting to file when close the program
void CycleTicketForNCC::dataToFile(){

    string avaNumber = "availableNumber.txt";
    ofstream avaNumFile(avaNumber);
    if(avaNumFile.is_open()){
       for(int i=0; i<size-1; i++){
           avaNumFile<<_avNum[i]<<" ";
       }
       avaNumFile.close();
    } else{
        cout<<"Error File cannot open!"<<endl;
        exit(1);
    }
} // array data overwriting to file when close the program

