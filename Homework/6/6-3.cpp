#include <iostream>
using namespace std;

int main(){
	char str1[64] = { 0 };
    int seat = 0,a,end = 0;
    cin.getline(str1,64);
    for (a = 0 ; str1[a] != '\0' ; a++ ){
        if ( (str1[seat]) < (str1[a]) )
            seat = a;//��¼����λ��
        end++;
    } 
    for (end += 2; a > seat ; a--,end--){
        str1[end] = str1[a];//������λ
    }
    str1[seat + 1] = 'a';//��ֵab
    str1[seat + 2] = 'b';
    cout<< str1 <<endl;
    return 0;
}