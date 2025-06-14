#include <iostream>
#include <string>


class Product {
public:
    std::string name;
    int id;
    float price;


    Product(std::string n, float p) {
        name = n;
        price = p;
    }


    Product() : name(""), id(0), price(0.0) {}


    void display() {
        std::cout << "Product: " << name << ", Price: Rs" << price << std::endl;
    }
};


class Security {
public:
    void monitor() {
        std::cout << "Security is monitoring the store." << std::endl;
    }
};

class StoreSection {
public:
    Security *sec;
    Product *p1;
    Product *p2;
    Product *p3;


    StoreSection() {
        p1 = NULL;
        p2 = NULL;
        p3 = NULL;
    }


    void setSecurity(Security *s) {
        sec = s;
    }


    void addProduct1(Product *p) {
        p1 = p;
    }

    void addProduct2(Product *p) {
        p2 = p;
    }

    void addProduct3(Product *p) {
        p3 = p;
    }


    void showProducts() {
        std::cout << "--- Products in this section ---" << std::endl;
        if (p1 != NULL) {
            p1->display();
        } else {
            std::cout << "Product 1 slot is empty." << std::endl;
        }

        if (p2 != NULL) {
            p2->display();
        } else {
            std::cout << "Product 2 slot is empty." << std::endl;
        }

        if (p3 != NULL) {
            p3->display();
        } else {
            std::cout << "Product 3 slot is empty." << std::endl;
        }
    }

    void callMon() {
        if (sec != NULL) {
            sec->monitor();
        } else {
            std::cout << "No security monitor assigned." << std::endl;
        }
    }
};



int main() {

    Security storeSecurity;


    Product productA("biscuit", 85.00);
    Product productB("bread", 95.00);
    Product productC("jelly", 75.75);


    StoreSection mainSection;

    mainSection.setSecurity(&storeSecurity);


    mainSection.addProduct1(&productA);
    mainSection.addProduct2(&productB);
    mainSection.addProduct3(&productC);


    mainSection.callMon();


    mainSection.showProducts();

    return 0;
}

