#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

int main()
{
    string postfix;
    stack<int> st;

    cout << "Enter Postfix Expression: ";
    cin >> postfix;

    for (char ch :postfix)
    {
        

        
        if (isdigit(ch))
        {
            st.push(ch - '0');   
        }
    
        else
        {
            int b = st.top();
            st.pop();

            int a = st.top();
            st.pop();

            switch (ch)
            {
                case '+':
                    st.push(a + b);
                    break;

                case '-':
                    st.push(a - b);
                    break;

                case '*':
                    st.push(a * b);
                    break;

                case '/':
                    st.push(a / b);
                    break;

                case '^':
                    st.push(pow(a, b));
                    break;
            }
        }
    }

    cout << "Result = " << st.top();

    return 0;
}