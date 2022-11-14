//
// Created by Htet Aung Khant on 11/14/2022.
//
// challenge1 Version 3 (final output)

#include "iostream"
#include "fstream"
#include "string"
using namespace std;

int main(){
    srand(time(NULL));
    string ch1;
    string randChar="randChar.txt";
    ofstream randFile(randChar);
    if(randFile.is_open()){
        for(int i=0; i<=1000; i++){
            ch1 = 97 + (rand() % 26);
            randFile<<ch1<<" ";
        }
        randFile.close();
    } else{
        cout<<"file cannot open"<<endl;
    }

    string a[100];
    string b[100];
    string c[100];
    string d[100];
    string e[100];
    string f[100];
    string g[100];
    string h[100];
    string ii[100];
    string j[100];
    string k[100];
    string l[100];
    string m[100];
    string n[100];
    string o[100];
    string p[100];
    string q[100];
    string r[100];
    string s[100];
    string t[100];
    string u[100];
    string v[100];
    string w[100];
    string x[100];
    string y[100];
    string z[100];

    for(int br=0; br<100; br++){
        a[br]=" ";
        b[br]=" ";
        c[br]=" ";
        d[br]=" ";
        e[br]=" ";
        f[br]=" ";
        g[br]=" ";
        h[br]=" ";
        ii[br]=" ";
        j[br]=" ";
        k[br]=" ";
        l[br]=" ";
        m[br]=" ";
        n[br]=" ";
        o[br]=" ";
        p[br]=" ";
        q[br]=" ";
        r[br]=" ";
        s[br]=" ";
        t[br]=" ";
        u[br]=" ";
        v[br]=" ";
        w[br]=" ";
        x[br]=" ";
        y[br]=" ";
        z[br]=" ";
    }

    int aIdx=0;
    int bIdx=0;
    int cIdx=0;
    int dIdx=0;
    int eIdx=0;
    int fIdx=0;
    int gIdx=0;
    int hIdx=0;
    int iIdx=0;
    int jIdx=0;
    int kIdx=0;
    int lIdx=0;
    int mIdx=0;
    int nIdx=0;
    int oIdx=0;
    int pIdx=0;
    int qIdx=0;
    int rIdx=0;
    int sIdx=0;
    int tIdx=0;
    int uIdx=0;
    int vIdx=0;
    int wIdx=0;
    int xIdx=0;
    int yIdx=0;
    int zIdx=0;

    string read="randChar.txt";
    string dataLine;
    string data;
    ifstream readFileTest(read);
    if(readFileTest.is_open()){
        while (getline(readFileTest,dataLine)){
            for(auto &ch : dataLine){
                if(ch==' '){
                    if(data=="a"){
                        a[aIdx]=data;
                        data="";
                        aIdx++;
                    }else if(data=="b"){
                        b[bIdx]=data;
                        data="";
                        bIdx++;
                    } else if(data=="c"){
                        c[cIdx]=data;
                        data="";
                        cIdx++;
                    } else if(data=="d"){
                        d[dIdx]=data;
                        data="";
                        dIdx++;
                    } else if(data=="e"){
                        e[eIdx]=data;
                        data="";
                        eIdx++;
                    }else if(data=="f"){
                        f[fIdx]=data;
                        data="";
                        fIdx++;
                    } else if(data=="g"){
                        g[gIdx]=data;
                        data="";
                        gIdx++;
                    } else if(data=="h"){
                        h[hIdx]=data;
                        data="";
                        hIdx++;
                    } else if(data=="i"){
                        ii[iIdx]=data;
                        data="";
                        iIdx++;
                    }else if(data=="j"){
                        j[jIdx]=data;
                        data="";
                        jIdx++;
                    } else if(data=="k"){
                        k[kIdx]=data;
                        data="";
                        kIdx++;
                    } else if(data=="l"){
                        l[lIdx]=data;
                        data="";
                        lIdx++;
                    } else if(data=="m"){
                        m[mIdx]=data;
                        data="";
                        mIdx++;
                    }else if(data=="n"){
                        n[nIdx]=data;
                        data="";
                        nIdx++;
                    } else if(data=="o"){
                        o[oIdx]=data;
                        data="";
                        oIdx++;
                    } else if(data=="p"){
                        p[pIdx]=data;
                        data="";
                        pIdx++;
                    } else if(data=="q"){
                        q[qIdx]=data;
                        data="";
                        qIdx++;
                    }else if(data=="r"){
                        r[rIdx]=data;
                        data="";
                        rIdx++;
                    } else if(data=="s"){
                        s[sIdx]=data;
                        data="";
                        sIdx++;
                    } else if(data=="t"){
                        t[tIdx]=data;
                        data="";
                        tIdx++;
                    } else if(data=="u"){
                        u[uIdx]=data;
                        data="";
                        uIdx++;
                    }else if(data=="v"){
                        v[vIdx]=data;
                        data="";
                        vIdx++;
                    } else if(data=="w"){
                        w[wIdx]=data;
                        data="";
                        wIdx++;
                    } else if(data=="x"){
                        x[xIdx]=data;
                        data="";
                        xIdx++;
                    } else if(data=="y"){
                        y[yIdx]=data;
                        data="";
                        yIdx++;
                    }else if(data=="z"){
                        z[zIdx]=data;
                        data="";
                        zIdx++;
                    } else{
                        data="";
                    }
                } else{
                    data = ch;
                }
            }
        }
        readFileTest.close();
    } else{
        cout<<"file cannot open";
    }

    int temp[26];
    for(int i=0; i<26; i++){
      temp[i]=0;
    }

    temp[0]=aIdx;
    temp[1]=bIdx;
    temp[2]=cIdx;
    temp[3]=dIdx;
    temp[4]=eIdx;
    temp[5]=fIdx;
    temp[6]=gIdx;
    temp[7]=hIdx;
    temp[8]=iIdx;
    temp[9]=jIdx;
    temp[10]=kIdx;
    temp[11]=lIdx;
    temp[12]=mIdx;
    temp[13]=nIdx;
    temp[14]=oIdx;
    temp[15]=pIdx;
    temp[16]=qIdx;
    temp[17]=rIdx;
    temp[18]=sIdx;
    temp[19]=tIdx;
    temp[20]=uIdx;
    temp[21]=vIdx;
    temp[22]=wIdx;
    temp[23]=xIdx;
    temp[24]=yIdx;
    temp[25]=zIdx;

    for(int i=1; i<=25; i++){
        if(temp[0] < temp[i]){
            temp[0] = temp[i];
        }
    }

    char mostResult;
    if(temp[0]==aIdx){
        mostResult='a';
    } else if(temp[0]==bIdx){
        mostResult='b';
    } else if(temp[0]==cIdx){
        mostResult='c';
    } else if(temp[0]==dIdx){
        mostResult='d';
    } else if(temp[0]==eIdx){
        mostResult='e';
    } else if(temp[0]==fIdx){
        mostResult='f';
    } else if(temp[0]==gIdx){
        mostResult='g';
    } else if(temp[0]==hIdx){
        mostResult='h';
    } else if(temp[0]==iIdx){
        mostResult='i';
    } else if(temp[0]==jIdx){
        mostResult='j';
    } else if(temp[0]==kIdx){
        mostResult='k';
    } else if(temp[0]==lIdx){
        mostResult='l';
    } else if(temp[0]==mIdx){
        mostResult='m';
    } else if(temp[0]==nIdx){
        mostResult='n';
    } else if(temp[0]==oIdx){
        mostResult='o';
    } else if(temp[0]==pIdx){
        mostResult='p';
    } else if(temp[0]==qIdx){
        mostResult='q';
    } else if(temp[0]==rIdx){
        mostResult='r';
    } else if(temp[0]==sIdx){
        mostResult='s';
    } else if(temp[0]==tIdx){
        mostResult='t';
    } else if(temp[0]==uIdx){
        mostResult='u';
    } else if(temp[0]==vIdx){
        mostResult='v';
    } else if(temp[0]==wIdx){
        mostResult='w';
    } else if(temp[0]==xIdx){
        mostResult='x';
    } else if(temp[0]==yIdx){
        mostResult='y';
    } else if(temp[0]==zIdx){
        mostResult='z';
    }
    char cha;
    string test="test.txt";
    ofstream testFile(test);
    if(testFile.is_open()){
        for(int i=0; i<26; i++){
            cha = 65 + i;
            testFile<<cha<<"    ";
        }
        testFile<<endl;
        for(int i=0; i<temp[0]; i++){
            testFile<<a[i]<<"    "<<b[i]<<"    "<<c[i]<<"    "<<d[i]<<"    "<<e[i]<<"    "<<f[i]<<"    "<<g[i]<<"    "<<h[i]<<"    "<<ii[i]<<"    "<<j[i]<<"    "<<k[i]<<"    "<<l[i]<<"    "<<m[i]<<"    "<<n[i]<<"    "<<o[i]<<"    "<<p[i]<<"    "<<q[i]<<"    "<<r[i]<<"    "<<s[i]<<"    "<<t[i]<<"    "<<u[i]<<"    "<<v[i]<<"    "<<w[i]<<"    "<<x[i]<<"    "<<y[i]<<"    "<<z[i]<<"    "<<endl;
        }
        testFile<<endl;
        testFile<<"a = "<<aIdx<<endl<<"b = "<<bIdx<<endl<<"c = "<<cIdx<<endl<<"d = "<<dIdx<<endl<<"e = "<<eIdx<<endl<<"f = "<<fIdx<<endl<<"g = "<<gIdx<<endl<<"h = "<<hIdx<<endl<<"i = "<<iIdx<<endl;
        testFile<<"j = "<<jIdx<<endl<<"k = "<<kIdx<<endl<<"l = "<<lIdx<<endl<<"m = "<<mIdx<<endl<<"n = "<<nIdx<<endl<<"o = "<<oIdx<<endl<<"p = "<<pIdx<<endl;
        testFile<<"q = "<<qIdx<<endl<<"r = "<<rIdx<<endl<<"s = "<<sIdx<<endl<<"t = "<<tIdx<<endl<<"u = "<<uIdx<<endl<<"v = "<<vIdx<<endl;
        testFile<<"w = "<<wIdx<<endl<<"x = "<<xIdx<<endl<<"y = "<<yIdx<<endl<<"z = "<<zIdx<<endl<<"most of char is = "<<mostResult<<"("<<temp[0]<<")"<<endl;
        testFile.close();
    } else{
        cout<<"file cannot open";
    }
    return 0;
}
