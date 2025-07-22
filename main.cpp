/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Aionnio
 *
 * Created on 2 Σεπτεμβρίου 2023, 2:04 μ.μ.
 */

#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include <unistd.h>
#include <chrono>
#include <atomic>
#include <thread>
#include <climits>
#include <limits>
#include <iomanip>
#include <vector>
#include <sstream>
#include <list>
#include <cstring>
#include <fstream>
#include <string>
#include <locale>
#include <cmath>
#include <math.h>
using namespace std;
/*
 * 
 */
int cdi=0;
int fl=0;
int mnu=0;
int m;
int xm=0;int xsum[100];
int dat_number[100];
int cnt=0;
int vrb=0;
long long int cd(long long int n,int ontbl,int vrbb){   
    cnt+=1;
    m=n%10;  
    cdi+=m;
    fl=-1;
    if(n/10==0){
        if(ontbl==1){dat_number[xm]=m;xsum[xm]=(m*10)+vrb; xm+=1;}
        fl=1;
               if(fl==1){}            
               return cdi;   //return 1;
    }
    else
    {
         if(ontbl==1){dat_number[xm]=m;xsum[xm]=(m*10)+vrb; xm+=1;}
        cd(n/10,ontbl,vrbb);
    }   
    return cdi;
}
int cld;
int cdis(long long int nn,int dkp)
{
    cdi=0;
         int cdl=cd(nn,0,0);
         if(dkp==1){
         cout<<"\n";
         cout<<"Initial sum = " << cdl <<"\n";
         cout<<"\n";}
         cld=cdl;
         if(cdl>9){
             if(dkp==1){
             cout<<"---------Internal Sum -----------\n";}
             cdi=0;
             while(cdl>9){cdi=0;cdl=cd(cdl,0,0);
             if(dkp==1){
             cout<<"|---> " << cdl <<"\n";}
             if(cdl<=9){
                 if(dkp==1){
                 cout<<"|---> Exiting with " << cdl <<"\n"; cout<<"--------End of Sum------------\n";}
             break;}
             }
         } 
         if(dkp==1){
         cout<<"\n";}
         return cdl;   
} 
void koulirized_them(){
    xm=0;cnt=0;cdi=0;
    for(int i=0;i<=100;i++){dat_number[i]=-1;xsum[i]=-1;}
}
long long int *ptr,arr[20],lk;
long long int str_to_int_sr(string st)
{
  //  cout<<"ur number to see " << st <<"\n";
  char k;
  ptr = (long long int*) malloc(sizeof(long long int)*st.size());  
  for(int i=0;i<=st.size()-1;i++) 
  {     
      k=st.at(i);
      lk=stoll(&k); 
     *(ptr+i)=stoll(&st.at(i)); 
     // *(ptr+i)=lk;

  }   
 // cout<<"\n";
     return *ptr;
}
int uniq(long long int pt){
    string k=to_string(pt);
    string fn;
    fn+=k.at(0);
    int kli=stoi(fn);
   // cout<<"kli " << kli <<"\n";
    return kli;
}
long long int mnb;
long long int sumof_sum;
long long int lmi;
string lmo,lsum;
int addth=0,la=0;
int lq;
long long int n_one;
long long int n_two;
long long int dfi;
long long int addt;
int main(int argc, char** argv) {
    cout<<"voyeristic behaviours and other have fun xD\n";
    cout<<"the default value for increase is 10 use [0] if u want to increase it use +=10;\n";
    vrb=0;
    vrb=stoi(argv[1]);
    if(vrb==0){vrb=0;cout<<"default value of increase is " << vrb <<"\n";}
    koulirized_them();
    cout<<"give me the number : " ; cin >> mnb ;
    cout<<"u give me : " << mnb;
    cdi=0;
    xm=0;
    lmi=cd(mnb,1,vrb);
    cout<<" with number size : " << cnt+1 <<"\n";
    cout<<"\n";
    int m=0;
    addth=0;la=0;
    lq=cnt+1;
    int mq=cnt;
    while(lq>=1){
        lmo.clear();
        lsum.clear();
        koulirized_them();
        addth=0;cdi=0;
        lmi=cd(mnb,1,vrb);       
        for(int i=mq;i>=la;i--){
            lmo+=to_string(dat_number[i]);
            lsum+=to_string(xsum[i]);
            addth=addth+xsum[i];
        }
        n_one=str_to_int_sr(lmo);
        n_two=str_to_int_sr(lsum);
        addt=n_one+n_two;
        cdi=0;cld=0;int mad=cdis(addt,0);
        cout<<"the number is " << lmo <<" + " << lsum << " ::= " << addt <<" sum of " << mad <<" and addth " << addth <<"\n";
        cout<<"  |\n";
        cout<<"  v\n";
        dfi=n_one-n_two;
        if(dfi<0){dfi=n_two-n_one;}
        cdi=0;
        cld=0;
        int mld=cdis(dfi,0);
        cout<<"  ----> with mld variable: " << n_one << " - " << n_two <<" ::= " << dfi << " sum of " <<mld <<"\n";
        dfi=n_one-addth;
        if(dfi<0){dfi=addth-n_one;}
        cdi=0;cld=0;
        int dlm=cdis(dfi,0);
        cout<<"  ----> with dlm variable: " << n_one << " - " << addth <<" ::= " << dfi << " sum of " <<dlm <<"\n";
        if(dlm==9){cout<<"  ----> we reach the 9\n";}else{cout<<"  ----> we dont reach the 9\n";}
        if(mld==dlm){cout<<"  ----> same\n";}else{cout<<"  ----> not the same\n";}       
        cout<<"\n";      
        lq=lq-1;
        addth=0;
        la=la+1;
    }
    return 0;
}

