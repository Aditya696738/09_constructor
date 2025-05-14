#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Chai{
    private:
        int servings;
        vector<string> ingredients;
        string teaName;

    public:
    //default constructor
        Chai(){
            teaName = "normal tea";
            servings = 1;
            ingredients = {"water , " , "milk , " , "tea leaves , " , "sugar"};
        }
        // parametric constructor
        Chai(string name , int serve , vector<string>ingr){
            teaName = name;
            servings = serve;
            ingredients = ingr;
        }
        // getter
        string getTeaName(){
            return teaName;
        }
        //setter
        void setTeaName(string name){
            teaName = name;
        }
        int getServing(){
            return servings;
        }
        void setServings(int serve){
            servings = serve;
        }
        void ChaiDetails(){
            std::cout << "Tea Name : " << teaName <<std:: endl;
            std::cout << "Serving : " << servings << std::endl;
            std::cout << "Ingredeints of tea : " << "\n";
         for (std:: string ingredeint : ingredients)
         {
            std:: cout << ingredeint;
         }
            std::cout <<std:: endl;
        }
};
int main(){
    Chai chai;
    chai.setTeaName("green tea");
    chai.ChaiDetails();
    return 0;
}