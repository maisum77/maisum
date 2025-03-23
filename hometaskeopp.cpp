#include<iostream>
#include<string>
using namespace std ;
class Product
{
    private:
    string name="amazon";
    int quantity=10;
    public:
    void show()
    {
        cout<<"stocks= "<<quantity<<endl;
    }
    void updatestock()
    {
        quantity--;
    }
    
};
int main()
{
    Product obj;
    Product obj1(obj);
    obj1.updatestock();
    obj1.show();
    obj.show();
    
    
    return 0;
    
}