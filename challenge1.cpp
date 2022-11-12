//
// Created by Htet Aung Khant on 11/12/2022(sat).
//

// generate random character and write to file and then choose their respective character and replace it all.
// version1

#include "iostream"
#include "stdlib.h"
#include "fstream"
using namespace std;

int main(){

    string tempArr[10];


// random character generate
    char arr[1000];
    srand(time(0));
    for(int i=0; i<1000; i++) {
 //       cout << "random lowercase = " << char('a' + rand() % 26) << endl;
        arr[i]=char('a' + rand() % 26);
    }


// random character writing to file
    string fileName = "charfile.txt";
    ofstream charFile(fileName);
    if(charFile.is_open()){
        for(int i=0; i<1000; i++){
            charFile << arr[i] << ' ';
        }
        charFile.close();
    } else{
        cout<<"file cannot open"<<endl;
    }


// writing character to final file
//    string finalFile="finalfile.txt";
//    ofstream finalCharFile;
//    finalCharFile.open(finalFile);


    string a;
    string b;
    string c;
    string d;
    string e;
    string f;
    string g;
    string h;
    string i;

    int count=0;
    int aNum=0;
    int bNum=0;
    int cNum=0;


    int largestNum[3];



// reading char from file
    string dataLine;
    string data;
    ifstream readFile(fileName);
    if(readFile.is_open()){
        while(getline(readFile,dataLine)){

            for(auto &ch: dataLine){
                if(ch==' '){
                    if(data=="a"){
                        aNum++;
                        a=a+data+"\n";
                        cout<<"char a is = "<<data<<endl;
                        data="";
                        largestNum[count]=aNum;

                    }else if(data=="b"){
                        count=1;
                        bNum++;
                        cout<<"char b is = "<<data<<endl;
                        b=b+data;
                        data="";
                        largestNum[count]=bNum;

                    }else if(data=="c"){
                        count=2;
                        cNum++;
                        cout<<"char c is = "<<data<<endl;
                        c=c+data;
                        data="";
                        largestNum[count]=cNum;

                    }else if(data=="d"){
                        cout<<"char d is = "<<data<<endl;
                        d=d+data;
                        data="";

                    }else if(data=="e"){
                        cout<<"char e is = "<<data<<endl;
                        e=e+data;
                        data="";

                    }else if(data=="f"){
                        cout<<"char f is = "<<data<<endl;
                        f=f+data;
                        data="";

                    }else if(data=="g"){
                        cout<<"char g is = "<<data<<endl;
                        g=g+data;
                        data="";

                    }else if(data=="h"){
                        cout<<"char h is = "<<data<<endl;
                        h=h+data;
                        data="";

                    }else if(data=="i"){
                        cout<<"char i is = "<<data<<endl;
                        i=i+data;
                        data="";

                    }else{
                        data="";
                    }
                }
                else{
                    data = ch;
                }
                tempArr[0]=a;
                tempArr[1]=b;
                tempArr[2]=c;
                tempArr[3]=d;
                tempArr[4]=e;
                tempArr[5]=f;
                tempArr[6]=g;
                tempArr[7]=h;
                tempArr[8]=i;

            }

        }
        readFile.close();
    } else{
        cout<<"File cannot open"<<endl;
    }


    for(int i=0; i<3; i++){
        if(largestNum[0]< largestNum[i+1]){
            largestNum[0]= largestNum[i+1];
        }
    }


    string mostResult;
    if(largestNum[0]==aNum){
        mostResult='a';
    } else if(largestNum[0]==bNum){
        mostResult='b';
    } else if(largestNum[0]==cNum){
        mostResult='c';
    }

    cout<<"most result is = "<<mostResult<<endl;






    cout<<"temp arr a is "<<tempArr[0]<<endl;
    cout<<"temp arr b is "<<tempArr[1]<<endl;

    // writing character to final file
    string finalFile="finalfile.txt";
    ofstream finalCharFile;
    finalCharFile.open(finalFile);


    finalCharFile<<"A"<<"   "<<"B"<<"   "<<endl;




    finalCharFile<<tempArr[0]<<"   "<<tempArr[1]<<"   "<<tempArr[2]<<"   "<<endl;
    finalCharFile<<"a = "<<aNum<<endl<<"b = "<<bNum<<endl<<"c = "<<cNum<<endl<<"most of char is = "<<largestNum[0]<<endl;
    finalCharFile.close();







//    string finalFile="finalfile.txt";
//    ofstream finalCharFile(finalFile);
//    if(finalCharFile.is_open()){
//
//        finalCharFile<<data;
//
//    } else{
//        cout<<"file cannot open"<<endl;
//    }






//    if(data=="b"){
//
//        cout<<"char b is = "<<data<<endl;
//        finalCharFile<<data;
//        data="";
//
//    }else{
//        data="";
//    }
//    if(data=="c"){
//
//        cout<<"char c is = "<<data<<endl;
//        finalCharFile<<data;
//        data="";
//
//    } else{
//        data="";
//    }




    return 0;
}
