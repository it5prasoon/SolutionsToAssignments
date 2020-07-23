#include<iostream>
#include <string>



using namespace std;


class Item
{
    private:
        int itemId;
        double price;
        int quantity;

    public:
        Item();
        Item(int, double, int);

        ~Item();

	    void setId(int);
        void setPrice(double);
        void setQuantity(int);

        int getId();
        double getPrice();
        int getQuantity();
};

Item::Item()
{
	itemId = 0;
	price = 0.0;
	quantity = 0;
};

//constructor w/parameters
Item::Item(int idIn, double priceIn, int quantityIn)
{
	setId(idIn);
	setPrice(priceIn);
	setQuantity(quantityIn);
};

//deconstructor
Item::~Item()
{
	//cout << "Deconstructor has run" << endl;
	//system("pause");
};

void Item::setId(int idIn)
{
	itemId = idIn;
};

void Item::setPrice(double priceIn)
{
	price = priceIn;
};

void Item::setQuantity(int quantityIn)
{
	quantity = quantityIn;
};

int Item::getId()
{
	return itemId;
};

double Item::getPrice()
{
	return price;
};

int Item::getQuantity()
{
	return quantity;
};

class ShoppingCart
{
    private:
        Item* Items[100];  
        int arrayEnd;

    public:
        ShoppingCart();

        ~ShoppingCart();

        void addItem(Item*);
        void deleteItem(Item*);

        double totalPrice();
};

ShoppingCart::ShoppingCart()
{
	arrayEnd = 0;
	for (int counter = 0; counter < 100; counter++)
	{
		Items[counter] = NULL;
	}
}

ShoppingCart::~ShoppingCart()
{
	//cout << "Deconstructor has run" << endl;
	//system("pause");
};

void ShoppingCart::addItem(Item *itemToAdd)
{
	Items[arrayEnd] = itemToAdd;
	arrayEnd++;
	cout << "The item added is: " << itemToAdd << endl;
	// system("pause");
}

void ShoppingCart::deleteItem(Item *itemToDelete)
{
	Items[arrayEnd] = itemToDelete;
	arrayEnd--;
	cout << "The item deleted is: " << itemToDelete << endl;
	// system("pause");
}


double ShoppingCart::totalPrice()
{
	double total = 0.0;
	for (int i = 0; i < arrayEnd; i++)
	{
		double LineItemTotal = 0.0;
		Item currentLineItem = *Items[i];
		LineItemTotal = currentLineItem.getPrice() * currentLineItem.getQuantity();
		total = total + LineItemTotal;

		// cout << "Line Item Total is: " << LineItemTotal << endl;
		// cout << "Running Total is: " << total << endl;
	}
	return total;
}

int main()
{
	Item a(1, 179.99, 12);
	Item b(2, 0.7, 20);
	Item c(3, 4.5, 6);
	Item d(4, 0.05, 16);

	ShoppingCart sc1;

	sc1.addItem(&a);
	sc1.addItem(&b);
	sc1.addItem(&c);
	sc1.deleteItem(&c);
	sc1.addItem(&d);

	double diff = sc1.totalPrice();
	cout << "The total price is: " << diff << endl;

	return 0;
}