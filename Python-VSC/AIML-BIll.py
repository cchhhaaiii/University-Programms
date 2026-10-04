units = int(input("Enter units consumed: "))
bill = 0.0

if units <= 100:
    bill = units * 5.0
elif units <= 200:
    bill = (100 * 5.0) + (units - 100) * 7.0
else:
    bill = (100 * 5.0) + (100 * 7.0) + (units - 200) * 10.0

print(f"Total Electricity Bill: Rs {bill}")