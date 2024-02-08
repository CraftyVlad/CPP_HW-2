//#include <iostream>
//#include <string>
//using namespace std;
//
//class UserValidator;
//
//class User
//{
//private:
//    string email;
//    string password;
//
//public:
//    void registeration(UserValidator userValidator);
//
//    friend UserValidator;
//};
//
//class UserValidator
//{
//private:
//    bool isValidEmail = false;
//    bool isValidPassword = false;
//
//    string errorValidateMessage;
//
//    UserValidator& validateEmail(const string& email);
//    UserValidator& validatePassword(const string& password);
//
//public:
//    bool operator()(const User& user);
//    explicit operator bool() const;
//};
//
//
//int main()
//{
//    User someUser;
//    someUser.registeration(UserValidator{});
//}
//
//void User::registeration(UserValidator userValidator)
//{
//    cout << "Enter the user email:";
//    std::getline(cin, email);
//
//    cout << "Enter the user password:";
//    std::getline(cin, password);
//
//    bool isValid = userValidator(*this);
//
//    if (isValid)
//    {
//        cout << "Registration Successfull!\n";
//        cout << "Your email: " << email << "\n";
//        cout << "Your password: " << password << "\n\n";
//    }
//}
//
//UserValidator& UserValidator::validateEmail(const string& email)
//{
//    if (email.empty())
//    {
//        errorValidateMessage += "Email is empty.\n";
//        isValidEmail = false;
//    }
//    else if (!email.find('@'))
//    {
//        errorValidateMessage += "Email does not contain '@'.\n";
//        isValidEmail = false;
//    }
//    else
//    {
//        isValidEmail = true;
//    }
//
//    return *this;
//}
//
//UserValidator& UserValidator::validatePassword(const string& password)
//{
//    if (password.empty())
//    {
//        errorValidateMessage += "Password is empty.\n";
//        isValidPassword = false;
//    }
//    else if (password.length() < 8)
//    {
//        errorValidateMessage += "Password must have at least eight symbols.\n";
//        isValidPassword = false;
//    }
//    else
//    {
//        isValidPassword = true;
//    }
//
//    return *this;
//}
//
//bool UserValidator::operator()(const User& user)
//{
//    bool validate = (bool)
//        validateEmail(user.email)
//        .validatePassword(user.password);
//
//    if (!validate)
//    {
//        cout << errorValidateMessage + "\n\n";
//    }
//
//    return validate;
//}
//
//UserValidator::operator bool() const
//{
//    return isValidEmail && isValidPassword;
//}
