#include <iostream>
#include<iomanip>
#include<string>
using namespace std;
struct print_params {

    char in[32];//char *in;
    const  int width = 30;
    char pattern=' ';
    
}in1;
    void print_block( const print_params in1/* const  int width, const char pattern*/)
    {
        for (int i = 0; i < in1.width; i++) {
            cout << in1.pattern;
        }
        cout << "\n";
    }

    void print_in(/*const  char *in,*/ const print_params params/*char* in, const  int width, const char pattern*/)
    {
        print_block(params);
        cout << params.pattern << params.in << params.pattern << "\n";
        print_block(params);
    }
int main()
{       
        print_params params;
        char in[32];
        cin.get(params.in, 32);

        //params.in = in;
        params.pattern = '@';
        print_in(params);
        params.pattern = '#';
        print_in(params);
        params.pattern = '$';
        print_in(params);
        return 0;
}
