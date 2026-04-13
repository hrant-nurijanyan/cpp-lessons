#include <iostream>
#include <string>
#include <stdexcept>

struct UserInfo
{
    int userAge;
    std::string name;
    std::string surname;
};

// Parameter types for a function can be copy - by - value, pointer, const pointer, reference, const reference
// Copy - by - value - when the copy is cheap(for instance its just a number) AND its not done frequently
// Pointer - Pointer when the copy of an object or a value if not that cheap AND the function call is done frequently,
// also there may be cases when your function may be called with nullptr
// Const Pointer - Same as pointer, BUT the value there CANNOT be changed
// Reference - Same as pointer, BUT there cannot be nullptr values, and there CANNOT be cases when your function is called with
// nullptr argument
// Const Reference - Same as reference, BUT the value CANNOT be changed

bool validateUserInfo(const UserInfo & info)
{
    return info.userAge > 0 && !info.name.empty() && !info.surname.empty();
}

int main() {
    UserInfo info { 10, "Hkob", "Arshakyan"};
    validateUserInfo(info);
}
