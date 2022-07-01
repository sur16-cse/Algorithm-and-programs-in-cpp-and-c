#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin>>t;
	cin.ignore();
	while(t--){
	    string p;
	    getline(cin,p);
		string temp;
		long long int ii;
		if( p.substr(6,2)=="AM"){
		    
		string ss=p.substr(0,2);
	long long int vev;
		if(ss=="12")
		 vev=stoi(ss)-12;
		else
		 vev=stoi(ss);
	    temp=to_string(vev)+p.substr(3,2);
		ii=stoi(temp);
		}
		else{
			string ss=p.substr(0,2);
		    long long int vev=stoi(ss)+12;	
	        temp=to_string(vev)+p.substr(3,2);
			ii=stoi(temp);
		}
		
	    long long int n;
	    cin>>n;
		cin.ignore();
	    while(n--){
	        string a;
	        getline(cin,a);
	        string m,v;

	        if(a.substr(6,2)=="AM" && a.substr(15,2)=="AM"){
				string sop=a.substr(0,2);
				long long int ve;
			   if(sop=="12")
		        ve=stoi(sop)-12;	
		       else
		        ve=stoi(sop);
	            m=to_string(ve)+a.substr(3,2);
				long long int mm=stoi(m);
	            string op=a.substr(9,2);
				long long int vm;
	           if(op=="12")
		        vm=stoi(op)-12;
		       else
		        vm=stoi(op);
	            v=to_string(vm)+a.substr(12,2);
				long long int nn=stoi(v);
		if(ii>=mm && ii<=nn)
		cout<<1;
		else
		cout<<0;
		}
		else if(a.substr(6,2)=="PM" && a.substr(15,2)=="PM"){
				string sop=a.substr(0,2);
				long long int ve;
		       if(sop=="12")
			   ve=stoi(sop);
			   else
		       ve=stoi(sop)+12;
	            m=to_string(ve)+a.substr(3,2);
				long long int mm=stoi(m);
	            string op=a.substr(9,2);
				long long int vm;
	           if(op=="12")
		        vm=stoi(op);
		       else
		        vm=stoi(op)+12;
	            v=to_string(vm)+a.substr(12,2);
				long long int nn=stoi(v);
			if(ii>=mm && ii<=nn)
		    cout<<1;
		    else
		    cout<<0;
		}
		else if(a.substr(6,2)=="AM" && a.substr(15,2)=="PM"){
				string sop=a.substr(0,2);
				long long int ve;
		       if(sop=="12")
		       ve=stoi(sop)-12;	
		       else
		       ve=stoi(sop);
	            m=to_string(ve)+a.substr(3,2);
				long long int mm=stoi(m);
	            string op=a.substr(9,2);
				long long int vm;
		       if(op=="12")
			   vm=stoi(op);
			   else
		       vm=stoi(op)+12;
	            v=to_string(vm)+a.substr(12,2);
				long long int nn=stoi(v);
			if(ii>=mm && ii<=nn)
		    cout<<1;
		    else
		    cout<<0;
		}
		else if(a.substr(6,2)=="PM" && a.substr(15,2)=="AM"){
				string sop=a.substr(0,2);
				long long int ve;
		       if(sop=="12")
			   ve=stoi(sop);
			   else
		       ve=stoi(sop)+12;
	            m=to_string(ve)+a.substr(3,2);
				long long int mm=stoi(m);
	            string op=a.substr(9,2);
				long long int vm;
	            if(op=="12")
		        vm=stoi(op)-12;
		       else
		        vm=stoi(op);
	            v=to_string(vm)+a.substr(12,2);
				long long int nn=stoi(v);
			if(ii>=mm && ii<=nn)
		    cout<<1;
		    else
		    cout<<0;
		}
		}
		cout<<endl;
	}
	return 0;
}
