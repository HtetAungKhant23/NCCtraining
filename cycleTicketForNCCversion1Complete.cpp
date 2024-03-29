//
// Created by Htet Aung Khant on 11/9/2022.
//
#include "iostream"
#include "sstream"
#include "cycleTicketForNCC.h"
using namespace std;
using namespace CYCLE;

void CycleTicketForNCC::welcome() {
//    arraySize();
    cout<<"Welcome from our cycle lucky show"<<endl;
    cout<<"10000mmk per coupon"<<endl;
    reloadAvaNumber();
}

//void CycleTicketForNCC::arraySize(){
//    for(int i=0; i<size; i++){
//        if(_uName[i]=="\0"){
//            userInfoIdx=i;
//            cout<<i<<endl;
//            break;
//        }
//    }
//
//}


// get all user info from file to respective array
//void CycleTicketForNCC::reloadAllInfo(){
//
//
//
//} // get all user info from file to respective array


// get available number from file to _avaNum array
void CycleTicketForNCC::reloadAvaNumber() {
    int idx = 0;
    string data;
    string avaNumber = "availableNumber.txt";
    string dataLine;
    ifstream avaNumFile(avaNumber);
    if (avaNumFile.is_open()) {
        while(getline(avaNumFile,dataLine)){

            for(auto &ch: dataLine){
                if(ch==' '){
                    _avNum[idx]= data;
            //        cout<<"we have data"<<idx+1<<" "<<_avNum[idx]<<endl;
                    idx++;
                    data="";

                } else{
                    string st(1,ch);
                    data += st;
                }
            }

        }


        avaNumFile.close();

        // testing
//        for(int i=0; i<idx; i++){
//            cout<<_avNum[i]<<" ";
//        }

        luckyNum();

    } else{
    //    cout<<"File cannot open"<<endl;
        availableNum();
    }

} // get available number from file to _avaNum array


// array data while running the program and showing available number
// when program is begin for the next time , need to add reading new data function from file
void CycleTicketForNCC::availableNum(){
    cout<<endl;

    for(int i=0; i<size; i++){
        _tempAvaNum[i]=i;
    }

    for(int i=0; i<size; i++){
        if(_tempAvaNum[i]>=0 && _tempAvaNum[i]<10) {
            _avNum[i] = "00" + to_string(_tempAvaNum[i]);
        } else if(_tempAvaNum[i]>=10 && _tempAvaNum[i]<100){
            _avNum[i] = "0" + to_string(_tempAvaNum[i]);
        } else{
            _avNum[i]= to_string(_tempAvaNum[i]);
        }
    }


//    cout<<"Available number are:";
//    for(int j=0; j<size; j++){
//        cout<<" "<<_avNum[j];
//    }
//    cout<<endl;

    luckyNum();

} // array data while running the program and showing available number


// lucky Number function
void CycleTicketForNCC::luckyNum(){

    cout<<"Available number are:"<<endl;
    for(int j=0; j<size; j++){
        cout<<" "<<_avNum[j];
    }
    cout<<endl;

    string option;

    while (true) {
        cout << "Enter Your Lucky Number : ";
        cin >> lucNum;

        //    cin >> _luckyNum[luckyNumberIdx]; // ဖျက်ရန်

// to check is user lucky number in available luckyNumber array
        for (int i = 0; i < size; i++) {
            if (_avNum[i] == lucNum) {

                _luckyNum[luckyNumberIdx] = lucNum;  // need to check again

                // to delete data(lucky number) in (_avNum)array
                for (int j = i; j < size; j++) {
                    _avNum[j] = _avNum[j + 1];
                }

                // testing output of (_avNum)array data
//                for (int k = 0; k < size - 1; k++) {
//                    cout << _avNum[k] << " ";
//                }

                while (true) {

                    cout << endl << "Enter 1 to add lucky number || Enter 2 to pay for lucky number : ";
                    cin >> option;

                    if (option == "1") {
                        luckyNumberIdx++;
                        tempLuckyNumberIdx++;
                        //            cout<<"luckyNumberIdx = "<<luckyNumberIdx<<endl;  // to delete just test
                        size--;
                        //            cout<<"size is = "<<size<<endl;  // to delete just test
                        luckyNum();
                    } else if (option == "2") {
                        dataToFile(); // စမ်းထားတာ ဖျက်ရန်
                        // to add ငွေချေ function
                        paymentFun();
                    } else{
                        cout<<"Please choose option carefully!!!"<<endl;
                    }
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

//    string userName;
//    string userPhone;
//    string userAddress;
    int userPayment=0;
    int userPaid=0;
    cout<<"Enter your name : ";
    cin>>userName;
    cout<<"Enter your phone number : ";
    cin>>userPhone;
    cout<<"Enter your address : ";
    cin>>userAddress;

    int couponAmount=luckyNumberIdx+1;
//    cout<<"justTest"<<couponAmount<<endl; // to delete just test
    userPayment = couponPrice*couponAmount;

    while(true) {
        cout << "Please paid " << userPayment << "mmk " << "for your " << couponAmount << "coupon : ";
        cin >> userPaid;

        if (userPaid == userPayment) {
            cout<<"Your payment success!"<<endl;
            cout<<"Thank you and Good Luck"<<endl;
            // to add name , ph , address to respective array

//            _uName[userInfoIdx]=userName;
//            _uPhone[userInfoIdx]=userPhone;
//            _uAddress[userInfoIdx]=userAddress;

            // to show detail about user's lucky number and his info
            showDetail();

//            userInfoIdx++;

            // to add asking function that is play again or want to quit ?
            askFun();

        } else{
            cout<<"Please retype your payment amount correctly!";
        }
    }

} // ငွေချေ function




// show detail about user's lucky number and his info
void CycleTicketForNCC::showDetail(){

//    cout<<"Name: "<<_uName[userInfoIdx]<<" | Phone: "<<_uPhone[userInfoIdx]<<" | Address: "<<_uAddress[userInfoIdx]<<endl;
    cout<<"Name: "<<userName<<" | Phone: "<<userPhone<<" | Address: "<<userAddress<<endl;
    cout<<"Lucky Number: ";
    for(int i=0; i<=luckyNumberIdx; i++){
        cout<<_luckyNum[i]<<" , ";
    }

    tempLuckyNumberIdx=luckyNumberIdx;
    luckyNumberIdx=0;

    cout<<endl;

} // show detail about user's lucky number and his info





// asking function that is play again or want to quit?
void CycleTicketForNCC::askFun(){
    string askOption;

    while (true) {
        cout << "Enter 1 to quit : enter 2 to choose your lucky number more :";
        cin >> askOption;

        if (askOption == "1") {
            cout << "Good Luck and thanks again!";
            allUserInfo();
            exit(1);
        } else if (askOption == "2") {
//            arraySize();
            allUserInfo();   // just testing
            size--;
            luckyNum();
        } else {
            cout<<"Please choose carefully!!";
        }
    }



} // asking function that is play again or wanna quit





// array data overwriting to file when close the program
void CycleTicketForNCC::dataToFile(){

//    cout<<"size is "<<size<<endl; // to delete

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


// all users info overwriting to file when close the program
void CycleTicketForNCC::allUserInfo(){

//    cout<< endl<< "this is all user info to file"<< endl;

    for(int j=0; j<=tempLuckyNumberIdx; j++){
                cout<<_luckyNum[j]<<endl;
            }

    stringstream ss("");
    for (int i = 0; i <= tempLuckyNumberIdx; i++) {
        ss << _luckyNum[i]<<",";
    }

//    cout<<ss.str()<<endl;

    string userData = "usersInfo.txt";
    ofstream userInfoFile(userData,ios::app);
    if(userInfoFile.is_open()){
//        for(int i=0; i<userInfoIdx; i++){
            userInfoFile<<userName<<" "<<userPhone<<" "<<userAddress<<" "<<ss.str()<<" "<<endl;

//            for(int j=0; j<=luckyNumberIdx; j++){
//                userInfoFile<<_luckyNum[j];
//            }

//        }
        userInfoFile.close();
    } else{
        cout<<"Error File cannot open!"<<endl;
        exit(1);
    }





} // all users info overwriting to file when close the program








// need to count for next coming new user and that count is represent for username array as index
// when next user choose his lucky number , still need to fix =>luckyNumberIdx(for his own coupon amount) and
// still need to fix size of array that is showing available lucky number
// still need to fix show detail function

