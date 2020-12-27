/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int ans = 0,count=0;
    
    int d1,v1,d2,v2,p;
    cin>> d1 >> v1 >> d2 >> v2 >> p;
    if(d1==d2){
        int p1 = d1-1;
        int p2 = d2-1;
        count = p2;
        while(ans<p){
            ans+=(v1+v2);
            count+=1;
        }
        
}else {
    int p1 = d1-1;
    int p2 = d2-1;
    int p_1  =0 ,p_2 = 0;
    if(p1>p2){
    count = p2;
    p_1=p1-p2;
    }else{
        count = p1;
        p_2 = p2-p1;
    }
    int v3 = v1;
    int v4=v2;
    
    while(ans<p){
        if(p_1>0){
            v1=0;
            p_1--;
        }else{
            v1=v3;
        }
        if(p_2>0){
            v2=0;
            p_2--;
        }else{
            v2=v4;
        }
        ans+=(v1+v2);
        count+=1;
        
        
    }
}
    cout << count;
    return 0;
}
