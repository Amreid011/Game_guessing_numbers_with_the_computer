#include<bits/stdc++.h>
#include<iostream>    
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
#include<cmath>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;
//by : Amr Eid

int main(){
    srand(time(0));
    long long x,n,a,co=0,t=1;
    do{
        t=1;
        co=0;
        a=rand()%100;
        while(t){
            cout<<"Entur your number : ";
            cin>>x;
            if(a==x){
                t=0;
                cout<<"Bravo , this is the right number\nIt took "<<co<<" times to guess \n\nHow do you feel about playing again?\n";
            }
            else if(a>x){
                cout<<"plz enter again number > "<<x<<endl;
                co++;
            }
            else if(a<x){
                cout<<"plz enter again number < "<<x<<endl;
                co++;
            }
        }
        cout<<"(1)  play \n(-1)  end\n";
        cin>>n;
    }while (n!=-1);
    
    return 0;
    //exit(1);
}
