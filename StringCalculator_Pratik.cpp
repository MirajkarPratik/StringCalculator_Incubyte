#include<bits/stdc++.h>
using namespace std;

class StringCalculator{
    public :
    int sum(string numbers){
        int s = numbers.size();
        if(s == 0) return 0;
        int Plus =0;
        vector<string> str;

        int i=0;
        while(i<s){
            string a = "";
            while(i<s && numbers[i] != ','){
                a += numbers[i];
                i++;
            }


            try {
                if (a[0] == '-')
                {
                    throw a;
                }
                if(isalpha(a[0])){
                    char c = a[0];
                    Plus += c-'a'+1;
                }
                else{
                    int c = stoi(a);
                    if(c>1000) Plus+= 0;
                    else Plus += c;
                }
            }
            catch (string b ) {
                str.push_back(b);
            }
            i++;
        }
        if(str.size() == 0) return Plus;

        cout<<"Negatives not Allowed : ";
        for(auto it: str){
            cout<<it<<" ";
        }
        cout<<endl;

        return -1;
    }
};

int main(){
    while(1){
        string input;
        cout<<"Enter string which you want to calculate:";
        cin>>input;

        StringCalculator obj;
        int ans = obj.sum(input);

        if(ans >= 0) cout<<"Answer for above input is:"<<ans<<endl;
    }
    return 0;
}

int main(){
    while(1){
        string input;
        cout<<"Enter string : ";
        cin>>input;

        StringCalculator obj;
        int ans = obj.add(input);

        if(ans >= 0) cout<<"Answer  is:"<<ans<<endl;
    }
    return 0;
}
