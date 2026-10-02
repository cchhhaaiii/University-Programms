char = input("Enter an Alphabet or a Number or a Special character: ")

if ('a' <= char <= 'z') or ('A' <= char <= 'Z'):
    print(f"Output : {char} --> Alpha")
elif '0' <= char <= '9':
    print(f"Output : {char} --> num")
else:
    print(f"Output : {char} --> spl")