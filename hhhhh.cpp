#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream file;

    struct hitung{
    char cek[26] = {'a','b','c','d','e','f','g','h','i','j','k',
    'l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int jumlah[26]={0};
    };
    hitung alphabeth;

    char x;
    file.open("kalimat.txt");

    int i=0;
    while( ! file.eof()){
        file.get(x);
        for(int a=0; a<26; a++){
            if(x == alphabeth.cek[a]){
                alphabeth.jumlah[a]++;
            }
        }
        i++;
    }

    for(int i=0; i<26; i++){
        if(alphabeth.jumlah[i]!=0){
            cout<<"jumlah"<<alphabeth.cek[i]<<"="<<alphabeth.jumlah[i]<<endl;
        }
    }

    return 0;
}
