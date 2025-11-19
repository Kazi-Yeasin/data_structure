#include <iostream>
#include <stack>
using namespace std;

double postfixEvaluation(string str){
    stack<double> st;
    cout<<"Symbol scanned:     Stack's contents:"<<endl;
    for(char c : str){
    	
    	cout<< c <<endl;
        if(c == ' ') continue;

        if(isdigit(c)){
            st.push(c - '0');
        }
        else{
            double val2 = st.top(); st.pop();
            double val1 = st.top(); st.pop();
            cout<< st.top();
            double calculatedValue = 0;

            if(c == '+') calculatedValue = val1 + val2;
            if(c == '-') calculatedValue = val1 - val2;
            if(c == '*') calculatedValue = val1 * val2;
            if(c == '/') calculatedValue = val1 / val2;

            st.push(calculatedValue);
        }
    }

    return st.top();
}

int main() {
    string str;
    getline(cin, str);

    double result = postfixEvaluation(str);
    cout << "Final Result: " << result << endl;

    return 0;
}
