#ifndef _SALES_ITEM_H
#define _SALES_ITEM_H

#include <iostream>
#include <string>

class Sales_item
{
	// These declarations are explained section 7.2.1, p. 270 and
	// in chapter 14, pages 557, 558, 561
	friend std::istream& operator>>(std::istream&, Sales_item&);
	friend std::ostream& operator<<(std::ostream&, const Sales_item&);
	friend bool operator<(const Sales_item&, const Sales_item&);
	friend bool operator==(const Sales_item&, const Sales_item&);

public:
	// Constructors are explained in section 7.1.4, pages 262 - 265
	// Default constructor needed to initialize members of built-in type
	Sales_item() = default;
	Sales_item(const std::string &book) : bookNo(book) { }
	Sales_item(std::istream &is)
	{
		is >> *this;
	}

public:
	// Operations on Sales_item objects
	// Member binary operator: left-hand operand bound to implicit this pointer
	Sales_item& operator+=(const Sales_item&);

	// Operations on Sales_item objects
	std::string isbn() const
	{
		return bookNo;
	}
	double avg_price() const;

private:
	std::string bookNo;  // implicitly initialized to the empty string
	unsigned units_sold = 0;  // explicitly initialized
	double revenue = 0.0;
};

#endif // !_SALES_ITEM_H