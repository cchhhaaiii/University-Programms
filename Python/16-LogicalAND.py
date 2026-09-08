age = int(input("Enter age: "))
attendance = float(input("Enter attendance percentage: "))

eligible = (age >= 18) and (attendance >= 75)

print("Is student eligible? (Age >= 18 AND Attendance >= 75):", eligible)