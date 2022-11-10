//
// Created by User on 11/9/2022.
//
// version 1

#include "iostream"
#include "fstream"
using namespace std;
#ifndef UNTITLED_CYCLETICKETFORNCC_H
#define UNTITLED_CYCLETICKETFORNCC_H

namespace CYCLE {
    class CycleTicketForNCC {
    public:
        //loading declare
        int size=10;
        int _avNum[10];       // user ထိုးလို့ရနိုင်တဲ့ နံပါတ်တွေ
        int _luckyNum[10];    // user ထိုးလိုက်တဲ့ နံပါတ်တွေ
        string _uName[10];    // user နာမည်တွေ
        int _uPhone[10];      // user ဖုန်းတွေ
        string _uAddress[10]; // user လိပ်စာတွေ
        int couponPrice = 10000;
        int luckyNumberIdx=0;
        //Method declare
        void welcome();
        void availableNum();
        void luckyNum();
        void paymentFun();
        void showDetail();
        void dataToFile();

    };
}

#endif //UNTITLED_CYCLETICKETFORNCC_H
