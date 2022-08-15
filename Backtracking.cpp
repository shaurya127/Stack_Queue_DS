
#include <bits/stdc++.h>
using namespace std;


void solve(string str,string asf,int count,int pos){
    if(pos==str.size()){
        if(count==0){
            cout<<asf<<endl;
        }
        else{
            cout<<asf+to_string(count)<<endl;
        }
        
        return;
    }
    
    // yes ki call
    if(count>0){
        string cnts=to_string(count);
        solve(str,asf+cnts+str[pos],0,pos+1);
    }
    else{
        solve(str,asf+str[pos],0,pos+1);
    }
    
    solve(str,asf,count+1,pos+1);
}

// driver function
int main()
{
	string str = "GFG";
    string asf="";
	solve(str,asf,0,0);
	return 0;
}
