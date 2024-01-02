#include <bits/stdc++.h>
using namespace std;
string expandfromcenter(int left,int right,string s){
    while(left>=0 && right<s.length() && s[left]==s[right]){
        left--;
        right++;
    }
    return s.substr(left+1,right-left-1);
}
string longestPalindrome(string s) {
    if(s.length()<=1){
        return s;
    }
    string max = s.substr(0,1);
    for(int i=0;i<s.length()-1;i++){
        string odd = expandfromcenter(i,i,s);
        string even = expandfromcenter(i,i+1,s);
        if(odd.length()>max.length()){
            max=odd;
        }
        if(even.length()>max.length()){
            max=even;
        }
    }
    return max;
      
}