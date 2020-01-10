#include <bits/stdc++.h>
using namespace std;
int main(){
    string name1,name2,flames="flames";
    cin>>name1>>name2;
    int hash1[26]={0},hash2[26]={0},count1=0,index=0;
    for(int itr=0;itr<name1.size();itr++){
        hash1[name1[itr]-'a']++;
    }
    for(int itr=0;itr<name2.size();itr++){
        hash2[name2[itr]-'a']++;
    }
    for(int itr=0;itr<26;itr++){
        count1+=abs(hash1[itr]-hash2[itr]);
       
    }
    int count;
    while(flames.size()!=1){
        count=count1%flames.size();
        if(count==0){
            if(index==0){
                flames.erase((flames.size()-1),1);
                index=flames.size()-1;  
            }
            else{
                  flames.erase(index-1,1);
                  index=index-1;
                }
            }
        else{
            flames.erase((index+(count-1))%flames.size(),1);
            index=(index+(count-1))%flames.size();
        }
        
    }
    cout<<flames;
    
    return 0;
}
