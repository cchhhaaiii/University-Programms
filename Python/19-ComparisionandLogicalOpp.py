age = int(input("Enter age: "))
marks = float(input("Enter marks: "))
attendance = float(input("Enter attendance percentage: "))

condition1 = (age >= 18) and (marks >= 40)
condition2 = (marks >= 80) or (attendance >= 90)

print("\n--- Results ---")
print("Age >= 18 AND Marks >= 40:", condition1)
print("Marks >= 80 OR Attendance >= 90:", condition2)