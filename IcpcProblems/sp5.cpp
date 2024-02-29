 #include<bits/stdc++.h>
 using namespace std;
 string maximumFrequency(string s){
         istringstream S(s);
        string word,maxword;
        int max=0;
        unordered_map<string,int>map;
        while(S>>word){
            map[word]++;
            if(map[word]>max){
                maxword=word;
                max=map[word];
            }
        }
        string r=maxword +to_string(max);
        return r;
}

 
 int main(){
    map<int ,int> sequence;
    int t;
    cin>>t;
    while (t--)
    {
        int x;
        cin>>x;
        sequence[x]++;
    }
    int cnt=0;
    for (auto i : sequence)
    {
        if (i.first<=i.second)
        {
            cnt=i.second-i.first;
        }else
        cnt+=i.second;
    }
    
    cout<<cnt<<endl;
    
    
 }
