#include<iostream> 
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> freqsort(vector<int> v1 , int size){
    unordered_map<int, int> mp;
    vector<int> res;
    for(int i = 0 ; i<size;i++){
        int temp = v1[i];
        if(mp.find(temp)==mp.end()){
            mp.insert({temp , 1});
        }
        else{
            mp[temp] = mp[temp]+1;
        }
    }
    int maxelement; 
    int maxcount=0;
    int temp = 0;
    while(temp<size){
         maxcount = 0;
    for(auto i = mp.begin(); i!=mp.end();i++){
        if((i->second)>maxcount){
            maxelement = i->first;
            maxcount = i->second;
        }}
        for(int i = 0 ; i<maxcount;i++){
            res.push_back(maxelement);
        }
         mp.erase(maxelement);
         temp+=maxcount;
    }
       
    return res;
}
int main(){
      int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> v;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    vector<int> result = freqsort(v, n);
    cout << "Frequency sorted output: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}