name = input("Enter Name: ")
age = int(input("Enter Age: "))
college = input("Enter College: ")
m1 = float(input("Enter Mark 1: "))
m2 = float(input("Enter Mark 2: "))
m3 = float(input("Enter Mark 3: "))
attendance = float(input("Enter Attendance %: "))

total = m1 + m2 + m3
avg = total / 3
percentage = (total / 300) * 100

print("Name:", name)
print("Age:", age)
print("College:", college)
print("Total Marks:", total)
print("Average:", avg)
print("Percentage:", percentage)

print("\n--- Results ---")
print("Passed (>=40%):", percentage >= 40)
print("Good Attendance (>=75%):", attendance >= 75)
print("Distinction (>=80% AND Att >=75%):", (percentage >= 80) and (attendance >= 75))
print("Star Student (>=90% OR Att >=90%):", (percentage >= 90) or (attendance >= 90))