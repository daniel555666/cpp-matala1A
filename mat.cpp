#include<iostream>
#include<string>

using namespace std;

namespace ariel{

    string mat(int c,int r,char a,char b){
        if(c%2==0||r%2==0||c<0||r<0){
            throw runtime_error("worng input ");
        }
        string str1;

        for(int i=1;i<=(r/2)+1;i++){
            for(int j=1;j<=c;j++){
                if(j==1||j==c||i==1){
                    str1+=a;
                }
                else if(i%2==1&&(j%2==1||(j>=i&&j-1<=c-i))){
                    str1+=a;
                }
                else if(i%2==0&&j%2==1&&(j<i||j>c-i+1)){
                    str1+=a;
                }
                else{ str1+=b;
                }
            }
            str1+='\n';
        }
        for(int i=(r/2);i>=1;i--){
            for(int j=1;j<=c;j++){
                if(j==1||j==c||i==1){
                    str1+=a;
                }
                else if(i%2==1&&(j%2==1||(j>=i&&j-1<=c-i))){
                    str1+=a;
                }
                else if(i%2==0&&j%2==1&&(j<i||j>c-i+1)){
                    str1+=a;
                }
                else{ str1+=b;
                }
            }
                str1+='\n';
        }

    
    return str1;
    }
}
// int main(){
//     try{
//     cout<<ariel::mat(5, 5, '#', '-');
//     }catch(string s2){;
//     cout<<s2;
//     }
//     return 0;
// }

