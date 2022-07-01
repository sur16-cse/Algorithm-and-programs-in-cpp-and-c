#include<iostream>
using namespace std;
//read a sentence/paragraph and store it
//cin.get() reads a single chracter
//put a loop to read characters till you get a new
//line '\n'
void readline(char a[],int maxlen){
    int i=0;
    char ch=cin.get();
    while(ch!='\n'){
        a[i]=ch;
        i++;
        if(i==(maxlen-1)){
            break;
        }
        ch=cin.get();//update current charcter from
       // next charcter from the line
    }
a[i]='\0';
return;
}
//using delimater means stop at which position
void read(char b[],int maxlen,char delim='\n'){
    int i=0;
    char ch=cin.get();
    while(ch!=delim){
        b[i]=ch;
        i++;
        if(i==(maxlen-1)){
            break;
        }
        ch=cin.get();//update current charcter from
       // next charcter from the line
    }
b[i]='\0';
return;
}
//using delimater means stop at which position
void line(char c[],int maxlen,char delim){
    int i=0;
    char ch=cin.get();
    while(ch!=delim){
        c[i]=ch;
        i++;
        if(i==(maxlen-1)){
            break;
        }
        ch=cin.get();//update current charcter from
       // next charcter from the line
    }
c[i]='\0';
return;
}
int main(){
//sentence not encountered in this case
char a[1000];
//cin>>a;
//cout<<a<<endl;
//cin.get() reads a single character at a time
readline(a,1000);
cout<<a<<endl;
char b[1000];
read(b,1000);
cout<<b<<endl;
char c[1000];
line(c,1000,'%');
cout<<c<<endl;
//inbuilt getline function with delimater
char d[1000];
cin.getline(d,1000,'*');
cout<<d<<endl;
}