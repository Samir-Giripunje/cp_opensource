 #include<bits/stdc++.h>
using namespace std;
#define in(x)    int x; cin>>x;
#define all(x)     (x).begin(), (x).end()
#define TC(x)         int x;cin>>x; while(x --)
#define print(v)     for(int i=0;i<v.size();i++)

 bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int> mp;
        int temp=0;
            for(auto i=0;i<order.size();i++){
                mp[order[i]]=temp;
                temp++;
            }      
           string fs,sn;
         
            for(auto i=0;i<words.size()-1;i++){
            
                  fs=words[i];
           sn=words[i+1];
            
                bool check=false;
                if(sn.size()<fs.size()){
                    for(auto j=0;j<sn.size();j++){
                        if(mp[fs[j]]>mp[sn[j]])
                        return false;
                        else if(mp[sn[j]]>mp[fs[j]])
                        break;
                        else if(j==sn.size()-1)
                        check=true;

                    }
                    if(check)
                    return false;

                }
                else{
                    for(auto j=0;j<fs.size();j++){
                        if(mp[sn[j]]>mp[fs[j]])
                        break;
                        else if(mp[sn[j]]<mp[fs[j]])
                        return false;
                    }
                }
                
            }
    return true;}

int main(){
ios::sync_with_stdio(false);
vector<string> words={"ubg","kwh"};
string order="qcipyamwvdjtesbghlorufnkzx";
if(isAlienSorted(words,order))
cout<<"yes correct";
else
cout<<"wrong ";
return 0;
}