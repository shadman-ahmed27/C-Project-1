#include <iostream>

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

// int main (){
//     using namespace first;

//      std::cout << x;

//      return 0;
// }

int main (){
    using std::cout;
    using std::string;

    std::string name = "ayo";

    cout << "Hello " << name;

    return 0;
}
