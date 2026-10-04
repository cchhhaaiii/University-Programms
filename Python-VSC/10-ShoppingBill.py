#Take the price and quantity of 3 products from the user and calculate total cost of each product and grand total
product1_price = float(input("Enter the price of product 1: "))
product1_quantity = int(input("Enter the quantity of product 1: "))
product2_price = float(input("Enter the price of product 2: "))
product2_quantity = int(input("Enter the quantity of product 2: "))
product3_price = float(input("Enter the price of product 3: "))
product3_quantity = int(input("Enter the quantity of product 3: "))
product1_total = product1_price * product1_quantity
product2_total = product2_price * product2_quantity
product3_total = product3_price * product3_quantity
grand_total = product1_total + product2_total + product3_total
print("Total cost of product 1:", product1_total)
print("Total cost of product 2:", product2_total)
print("Total cost of product 3:", product3_total)
print("Grand Total:", grand_total)