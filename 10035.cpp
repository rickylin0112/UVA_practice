#include <bits/stdc++.h>

using namespace std;

int main (){
    string  a, b;
    while (cin >> a >> b) { 
        if (a == "0" && b == "0")
            {
                break ;
            }
        else {
            if (a.size() != b.size()){

                int c = abs((int)a.length() - (int)b.length());
                string add_zero (c, '0');
                if(a.size() > b.size()){
                    b = add_zero + b ;
                }
                else{
                    a = add_zero + a ;
                }
            }

            int carry = 0;
            int sum = 0;
            for (int i = a.size()-1  ;i >=0 ; i-- ){
                if (a[i] - '0' + b[i] - '0'+ carry > 9 ){
                    sum++;
                    carry= 1;
                }
                else {
                    carry = 0;
                }
            }
            if (sum == 0)
            {
                printf("No carry operation.\n");
            }
            else if (sum == 1)
            {
                printf("1 carry operation.\n");
            }
            else {
                printf("%d carry operations.\n", sum);
            }
            

        }
    } 
    return 0; 
}
#include <bits/stdc++.h>

using namespace std;

int main (){
    string  a, b;
    while (cin >> a >> b) { 
        if (a == "0" && b == "0")
            {
                break ;
            }
        else {
            if (a.size() != b.size()){

                int c = abs((int)a.length() - (int)b.length());
                string add_zero (c, '0');
                if(a.size() > b.size()){
                    b = add_zero + b ;
                }
                else{
                    a = add_zero + a ;
                }
            }

            int carry = 0;
            int sum = 0;
            for (int i = a.size()-1  ;i >=0 ; i-- ){
                if (a[i] - '0' + b[i] - '0'+ carry > 9 ){
                    sum++;
                    carry= 1;
                }
                else {
                    carry = 0;
                }
            }
            if (sum == 0)
            {
                printf("No carry operation.\n");
            }
            else if (sum == 1)
            {
                printf("1 carry operation.\n");
            }
            else {
                printf("%d carry operations.\n", sum);
            }
            

        }
    } 
    return 0; 
}
