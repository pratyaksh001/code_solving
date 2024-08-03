// Boyer Moore Algorithm for Pattern Searching
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define NO_OF_CHARS 256

void badcharacterheuristic(string str, int size,int badchar[NO_OF_CHARS]){
    int i;
    for(int i=0;i<NO_OF_CHARS;i++){
        badchar[i]=-1;
    }
    
    for(int i=0;i<size;i++){
        badchar[(int) str[i]]=i;
    }
}

void search(string text, string pattern){
    int m=pattern.size();
    int n=text.size();
    int badchar[NO_OF_CHARS];
    badcharacterheuristic(pattern,m,badchar);
    int s=0;
    while(s<=(n-m)){
        int j=m-1;
        while(j>=0 && pattern[j]==text[s+j]){
            j--;
        }
        if(j<0){
            cout<<"PARTTERN occurs at shift: "<<s<<endl;
            s+=(s+m < n)? m-badchar[text[s+m]] : 1;
        }
        else{
            s+=max(1,j -badchar[text[s+j]]);
        }
        
    }
}
    

int main() {
    string text,pattern;
    cout<<"bad character heuristic(Boyer-Moore)"<<endl;
    cout<<"enter the text: "<<endl;
    cin>>text;
    cout<<"enter the pattern: "<<endl;
    cin>>pattern;
    search(text,pattern);
    
    return 0;
}
