#include<bits/stdc++.h>
using namespace std;

int longestunisub(string str)
{
    int count[256]={0};
    int i=0;
    int j=0;
    int ans=0;
    while(j<str.length()){
        count[str[j]]++;
        while(count[str[j]]>1){
            count[str[i]]--;
            i++;
        }
        ans=max(ans,j-i+1);
        j++;
    }
    return ans;
}



int main(){
   string str="geeksforgeeks" ;
   int len= longestunisub(str);
   cout<<len;
}