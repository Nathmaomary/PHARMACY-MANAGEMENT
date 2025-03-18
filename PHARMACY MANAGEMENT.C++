#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
using namespace std;

Product::Product(int id, string name, float price, int stock) {
    this->id = id;
    this->name = name;
    this->price = price;
    this->stock = stock;
}

int Product::getId() const { return id; }
string Product::getName() const { return name; }
float Product::getPrice() const { return price; }
int Product::getStock() const { return stock; }

void Product::setStock(int stock) { this->stock = stock; }

void Product::displayProduct() const {
    cout << "ID: " << id << ", Name: " << name << ", Price: " << price << ", Stock: " << stock << endl;
}
void displayProducts(Product products[], int size) {
    for (int i = 0; i < size; i++) {
        products[i].displayProduct();
    }
}

int main() {
    Product p1(1, "Paracetamol", 5.5, 100);
    Product p2(2, "Aspirin", 8.0, 200);

    Product products[] = {p1, p2};
    displayProducts(products, 2);

void addProduct(Product products[], int& size, int id, string name, float price, int stock) {
    Product newProduct(id, name, price, stock);
    products[size] = newProduct;
    size++;
}

int main() {
    Product products[100];
    int size = 0;
    
    addProduct(products, size, 3, "Ibuprofen", 10.0, 150);
    displayProducts(products, size);
    void removeProduct(Product products[], int& size, int id) {
    for (int i = 0; i < size; i++) {
        if (products[i].getId() == id) {
            for (int j = i; j < size - 1; j++) {
                products[j] = products[j + 1];
            }
            size--;
            break;
        }
    }
    void editProduct(Product products[], int size, int id, string newName, float newPrice, int newStock) {
    for (int i = 0; i < size; i++) {
        if (products[i].getId() == id) {
            products[i] = Product(id, newName, newPrice, newStock);
            break;
        }
    }
}
#ifndef SALE_H
#define SALE_H

#include "product.h"

class Sale {
private:
    int productId;
    int quantity;
    float totalPrice;
public:
    Sale(int productId, int quantity, float totalPrice);
    int getProductId() const;
    int getQuantity() const;
    float getTotalPrice() const;
    void displaySale() const;
};

#endif

#include "sale.h"
#include <iostream>
using namespace std;

Sale::Sale(int productId, int quantity, float totalPrice) {
    this->productId = productId;
    this->quantity = quantity;
    this->totalPrice = totalPrice;
}

int Sale::getProductId() const { return productId; }
int Sale::getQuantity() const { return quantity; }
float Sale::getTotalPrice() const { return totalPrice; }

void Sale::displaySale() const {
    cout << "Product ID: " << productId << ", Quantity: " << quantity << ", Total Price: " << totalPrice << endl;
}
void processSale(Product products[], int size, int productId, int quantity) {
    for (int i = 0; i < size; i++) {
        if (products[i].getId() == productId) {
            if (products[i].getStock() >= quantity) {
                products[i].setStock(products[i].getStock() - quantity);
                float totalPrice = products[i].getPrice() * quantity;
                Sale sale(productId, quantity, totalPrice);
                sale.displaySale();
            } else {
                cout << "Not enough stock!" << endl;
            }
            break;
        }
    }
}

#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

class User {
private:
    string username;
    string password;
public:
    User(string username, string password);
    bool authenticate(string username, string password) const;
};

#endif
