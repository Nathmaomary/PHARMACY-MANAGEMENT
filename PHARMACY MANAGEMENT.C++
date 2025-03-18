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