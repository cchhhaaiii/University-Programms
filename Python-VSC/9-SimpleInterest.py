#Take principal, rate of interest and time from the user and calculate simple interest and Total amount
principal = float(input("Enter the principal amount: "))
rate = float(input("Enter the rate of interest (in %): "))
time = float(input("Enter the time (in years): "))
simple_interest = (principal * rate * time) / 100
total_amount = principal + simple_interest
print("Simple Interest:", simple_interest)
print("Total Amount:", total_amount)