#include <iostream>
using namespace std;
 class sample {
private:
    int private_variable;
 protected:
    int protected_variable;
 public:
    sample()
    {
        private_variable = 10;
        protected_variable = 99;
    }
    friend class K;  // friend class declaration
};
class K {
public:
    void display(sample& t)
    {
        cout << "The value of Private Variable = "<< t.private_variable << endl;
        cout << "The value of Protected Variable = "<< t.protected_variable;
    }
};
int main()
{
    sample g;
    K kri;
    kri.display(g);
    return 0;
}

