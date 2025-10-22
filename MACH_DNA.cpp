#include <bits/stdc++.h>
using ll = long long;
using namespace std;
string DNA(char x){
	if(x=='A'){
		return "T";
	}
	if(x=='T'){
		return "A";
	}
	if(x=='C'){
		return "G";
	}
	if(x=='G'){
		return "C";
	}
}
int main(){
	freopen("MACHDNA.inp","r",stdin);
//	freopen("MACHDNA.out","w",stdout);
	string s;
	cin >> s;
	string machgoc="";
/*	for(int i=0;i<s.size();i++){
		if (isdigit(s[i])){
			int num=0;
			while(i<s.size() && isdigit(s[i])){
				num =num*10+(s[i]-48);
				i++;				
			}
			for(int j=1;j<num;j++){
				dayDNA+=lastchar;
			}
			i--;
		}else{
			dayDNA+=s[i];
			lastchar=s[i];
		}
	}*/
	int n=s.size();
	int i=0;
	string machbosung="";
	while(i<n){
		ll so = 0;
		while (isdigit(s[i])) {
			so = so * 10 + (s[i]-48);
			i++;
		}
		char nu = s[i++];
		machgoc.append(so,nu);
	}
	for(auto ch:machgoc){
		machbosung+= DNA(ch);
	}
	cout << machbosung;
	return 0;
}
