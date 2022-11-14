//
// Created by Htet Aung Khant on 11/12/2022(sat).
//

// generate random character and write to file and then choose their respective character and replace it all.
// version1 
// version2 (final and a little different from question, but I tried my best)

#include "iostream"
//#include "stdlib.h"
#include "fstream"
using namespace std;

int main(){

    string tempArr[26];
    int largestNum[26];


// random character generate
    char arr[1000];
    char randChar;
    srand(time(NULL));
    for(int i=0; i<1000; i++) {
//        cout << "random lowercase = " << char('a' + rand() % 26) << endl;
        randChar = 97 + (rand() % 26);
        arr[i]=randChar;
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
    string j;
    string jj;
    string k;
    string l;
    string m;
    string n;
    string o;
    string p;
    string q;
    string r;
    string s;
    string t;
    string u;
    string v;
    string w;
    string x;
    string y;
    string z;

    int count;
    int aNum=0;
    int bNum=0;
    int cNum=0;
    int dNum=0;
    int eNum=0;
    int fNum=0;
    int gNum=0;
    int hNum=0;
    int iNum=0;
    int jNum=0;
    int kNum=0;
    int lNum=0;
    int mNum=0;
    int nNum=0;
    int oNum=0;
    int pNum=0;
    int qNum=0;
    int rNum=0;
    int sNum=0;
    int tNum=0;
    int uNum=0;
    int vNum=0;
    int wNum=0;
    int xNum=0;
    int yNum=0;
    int zNum=0;






// reading char from file
    string dataLine;
    string data;
    ifstream readFile(fileName);
    if(readFile.is_open()){
        while(getline(readFile,dataLine)){

            for(auto &ch: dataLine){
                if(ch==' '){
                    if(data=="a"){
                        count=0;
                        aNum++;
//                        a=a+data+"\n";
                        a+=data;
                        cout<<"char a is = "<<data<<endl;
                        data="";
                        largestNum[count]=aNum;

                    }else if(data=="b"){
                        count=1;
                        bNum++;
                        cout<<"char b is = "<<data<<endl;
                        b+=data;
                        data="";
                        largestNum[count]=bNum;

                    }else if(data=="c"){
                        count=2;
                        cNum++;
                        cout<<"char c is = "<<data<<endl;
                        c+=data;
                        data="";
                        largestNum[count]=cNum;

                    }else if(data=="d"){
                        count=3;
                        dNum++;
                        cout<<"char d is = "<<data<<endl;
                        d+=data;
                        data="";
                        largestNum[count]=dNum;

                    }else if(data=="e"){
                        count=4;
                        eNum++;
                        cout<<"char e is = "<<data<<endl;
                        e+=data;
                        data="";
                        largestNum[count]=eNum;

                    }else if(data=="f"){
                        count=5;
                        fNum++;
                        cout<<"char f is = "<<data<<endl;
                        f+=data;
                        data="";
                        largestNum[count]=fNum;

                    }else if(data=="g"){
                        count=6;
                        gNum++;
                        cout<<"char g is = "<<data<<endl;
                        g+=data;
                        data="";
                        largestNum[count]=gNum;

                    }else if(data=="h"){
                        count=7;
                        hNum++;
                        cout<<"char h is = "<<data<<endl;
                        h+=data;
                        data="";
                        largestNum[count]=hNum;

                    }else if(data=="i"){
                        count=8;
                        iNum++;
                        cout<<"char i is = "<<data<<endl;
                        j+=data;
                        data="";
                        largestNum[count]=iNum;

                    }else if(data=="j"){
                        count=9;
                        jNum++;
                        cout<<"char j is = "<<data<<endl;
                        jj+=data;
                        data="";
                        largestNum[count]=jNum;

                    }else if(data=="k"){
                        count=10;
                        kNum++;
                        cout<<"char k is = "<<data<<endl;
                        k+=data;
                        data="";
                        largestNum[count]=kNum;

                    }else if(data=="l"){
                        count=11;
                        lNum++;
                        cout<<"char l is = "<<data<<endl;
                        l+=data;
                        data="";
                        largestNum[count]=lNum;

                    }else if(data=="m"){
                        count=12;
                        mNum++;
                        cout<<"char m is = "<<data<<endl;
                        m+=data;
                        data="";
                        largestNum[count]=mNum;

                    }else if(data=="n"){
                        count=13;
                        nNum++;
                        cout<<"char n is = "<<data<<endl;
                        n+=data;
                        data="";
                        largestNum[count]=nNum;

                    }else if(data=="o"){
                        count=14;
                        oNum++;
                        cout<<"char o is = "<<data<<endl;
                        o+=data;
                        data="";
                        largestNum[count]=oNum;

                    }else if(data=="p"){
                        count=15;
                        pNum++;
                        cout<<"char p is = "<<data<<endl;
                        p+=data;
                        data="";
                        largestNum[count]=pNum;

                    }else if(data=="q"){
                        count=16;
                        qNum++;
                        cout<<"char q is = "<<data<<endl;
                        q+=data;
                        data="";
                        largestNum[count]=qNum;

                    }else if(data=="r"){
                        count=17;
                        rNum++;
                        cout<<"char r is = "<<data<<endl;
                        r+=data;
                        data="";
                        largestNum[count]=rNum;

                    }else if(data=="s"){
                        count=18;
                        sNum++;
                        cout<<"char s is = "<<data<<endl;
                        s+=data;
                        data="";
                        largestNum[count]=sNum;

                    }else if(data=="t"){
                        count=19;
                        tNum++;
                        cout<<"char t is = "<<data<<endl;
                        t+=data;
                        data="";
                        largestNum[count]=tNum;

                    }else if(data=="u"){
                        count=20;
                        uNum++;
                        cout<<"char u is = "<<data<<endl;
                        u+=data;
                        data="";
                        largestNum[count]=uNum;

                    }else if(data=="v"){
                        count=21;
                        vNum++;
                        cout<<"char v is = "<<data<<endl;
                        v+=data;
                        data="";
                        largestNum[count]=vNum;

                    }else if(data=="w"){
                        count=22;
                        wNum++;
                        cout<<"char w is = "<<data<<endl;
                        w+=data;
                        data="";
                        largestNum[count]=wNum;

                    }else if(data=="x"){
                        count=23;
                        xNum++;
                        cout<<"char x is = "<<data<<endl;
                        x+=data;
                        data="";
                        largestNum[count]=xNum;

                    }else if(data=="y"){
                        count=24;
                        yNum++;
                        cout<<"char y is = "<<data<<endl;
                        y+=data;
                        data="";
                        largestNum[count]=yNum;

                    }else if(data=="z"){
                        count=25;
                        zNum++;
                        cout<<"char z is = "<<data<<endl;
                        z+=data;
                        data="";
                        largestNum[count]=zNum;

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
                tempArr[8]=j;
                tempArr[9]=jj;
                tempArr[10]=k;
                tempArr[11]=l;
                tempArr[12]=m;
                tempArr[13]=n;
                tempArr[14]=o;
                tempArr[15]=p;
                tempArr[16]=q;
                tempArr[17]=r;
                tempArr[18]=s;
                tempArr[19]=t;
                tempArr[20]=u;
                tempArr[21]=v;
                tempArr[22]=w;
                tempArr[23]=x;
                tempArr[24]=y;
                tempArr[25]=z;

            }

        }
        readFile.close();
    } else{
        cout<<"File cannot open"<<endl;
    }


    for(int i=0; i<=25; i++){
        cout<<"Number array is = "<<largestNum[i]<<" ";
        if(largestNum[0]< largestNum[i]){
            largestNum[0]= largestNum[i];
        }
    }

    cout<<"largest number is = "<<largestNum[0]<<endl;


    string mostResult;
    if(largestNum[0]==aNum){
        mostResult='a';
    } else if(largestNum[0]==bNum){
        mostResult='b';
    } else if(largestNum[0]==cNum){
        mostResult='c';
    } else if(largestNum[0]==dNum){
        mostResult='d';
    } else if(largestNum[0]==eNum){
        mostResult='e';
    } else if(largestNum[0]==fNum){
        mostResult='f';
    } else if(largestNum[0]==gNum){
        mostResult='g';
    } else if(largestNum[0]==hNum){
        mostResult='h';
    } else if(largestNum[0]==iNum){
        mostResult='i';
    } else if(largestNum[0]==jNum){
        mostResult='j';
    } else if(largestNum[0]==kNum){
        mostResult='k';
    } else if(largestNum[0]==lNum){
        mostResult='l';
    } else if(largestNum[0]==mNum){
        mostResult='m';
    } else if(largestNum[0]==nNum){
        mostResult='n';
    } else if(largestNum[0]==oNum){
        mostResult='o';
    } else if(largestNum[0]==pNum){
        mostResult='p';
    } else if(largestNum[0]==qNum){
        mostResult='q';
    } else if(largestNum[0]==rNum){
        mostResult='r';
    } else if(largestNum[0]==sNum){
        mostResult='s';
    } else if(largestNum[0]==tNum){
        mostResult='t';
    } else if(largestNum[0]==uNum){
        mostResult='u';
    } else if(largestNum[0]==vNum){
        mostResult='v';
    } else if(largestNum[0]==wNum){
        mostResult='w';
    } else if(largestNum[0]==xNum){
        mostResult='x';
    } else if(largestNum[0]==yNum){
        mostResult='y';
    } else if(largestNum[0]==zNum){
        mostResult='z';
    }

    cout<<"most result is = "<<mostResult<<endl;



    cout<<"temp arr a is "<<tempArr[0]<<endl;
    cout<<"temp arr b is "<<tempArr[1]<<endl;

    // writing character to final file
    string finalFile="finalfile.txt";
    ofstream finalCharFile;
    finalCharFile.open(finalFile);


 //   finalCharFile<<"A"<<"   "<<"B"<<"   "<<endl;

    char cha;

    for(int i=0; i<26; i++){

        cha = (65+i);
        finalCharFile<<cha<<"  =  ";
        finalCharFile<<tempArr[i]<<endl;

        cout << i+1 << " random char is = " << cha << endl;
    }

    finalCharFile<<endl;



//    finalCharFile<<tempArr[0]<<"   "<<tempArr[1]<<"   "<<tempArr[2]<<"   "<<endl;
//    finalCharFile<<a<<"    "<<b<<"    "<<c<<"    "<<d<<"    "<<e<<"    "<<f<<"    "<<g<<"    "<<h<<"    "<<j<<"    "<<endl;

//    for(int i=0; i<4; i++){
//        finalCharFile<<tempArr[i];
//    }


    finalCharFile<<"a = "<<aNum<<endl<<"b = "<<bNum<<endl<<"c = "<<cNum<<endl<<"d = "<<dNum<<endl<<"e = "<<eNum<<endl<<"f = "<<fNum<<endl<<"g = "<<gNum<<endl<<"h = "<<hNum<<endl<<"i = "<<iNum<<endl;
    finalCharFile<<"j = "<<jNum<<endl<<"k = "<<kNum<<endl<<"l = "<<lNum<<endl<<"m = "<<mNum<<endl<<"n = "<<nNum<<endl<<"o = "<<oNum<<endl<<"p = "<<pNum<<endl;
    finalCharFile<<"q = "<<qNum<<endl<<"r = "<<rNum<<endl<<"s = "<<sNum<<endl<<"t = "<<tNum<<endl<<"u = "<<uNum<<endl<<"v = "<<vNum<<endl;
    finalCharFile<<"w = "<<wNum<<endl<<"x = "<<xNum<<endl<<"y = "<<yNum<<endl<<"z = "<<zNum<<endl<<"most of char is = "<<mostResult<<"("<<largestNum[0]<<")"<<endl;
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
