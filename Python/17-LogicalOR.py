purchase_amount = float(input("Enter purchase amount: "))
is_premium = bool(int(input("Are you a premium member? (Enter 1 for True, 0 for False): ")))

discount_eligible = (purchase_amount >= 1000) or is_premium

print("Is eligible for discount?:", discount_eligible)