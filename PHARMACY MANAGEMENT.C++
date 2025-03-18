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