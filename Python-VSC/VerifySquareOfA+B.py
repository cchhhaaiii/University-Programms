def verify_square_of_sum(a, b):
	"""Verify that (a + b)^2 equals a^2 + 2ab + b^2."""
	left_side = (a + b) ** 2
	right_side = a ** 2 + 2 * a * b + b ** 2
	return left_side == right_side


if __name__ == "__main__":
	a = float(input("Enter a: "))
	b = float(input("Enter b: "))
	print("Verified" if verify_square_of_sum(a, b) else "Not verified")
