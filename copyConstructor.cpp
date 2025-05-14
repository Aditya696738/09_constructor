#include <iostream>
#include <vector>
#include <string>
class Person{
    public:
        std::string* userName;
        int userAge;
        std:: string emailID;
        std::vector<std::string>personSkill;
    Person(std::string name, int age, std::string email , std::vector<std::string>skill){
         userName = new std::string(name);
         userAge = age;
         emailID = email;
         personSkill = skill;
    }
    // copy constructor
    Person(const Person & other){
        userName = new std::string(*other.userName);
        userAge = other.userAge;
        emailID = other.emailID;
        personSkill = other.personSkill;
    }
    ~Person(){
        delete userName;
        std::cout<<"dynamci memory is free" <<std::endl;
    }
    void personDetails(){
        std:: cout << "Name of user is - " << *userName << std::endl;
        std:: cout << "Email ID of user - " << emailID << std::endl;
        std:: cout << "Age of user - " << userAge << std::endl;
        std::cout << "Ingredeints of tea : " << "\n";
        for (std:: string skill : personSkill)
        {
           std:: cout << skill << " ";
         }
        std::cout <<std:: endl;
    }
};
int main(){
    Person user("Aditya kumar", 21, "aditya12322kumar@gmail.com", {"DSA, ", "REACT, ", "JAVASCRIPT, ", "C++"});
    user.personDetails();
    Person copiedUser = user;
    std::cout << "Details of copied user which made from original user 'user'" << "\n";
    copiedUser.personDetails();
    return 0;
}