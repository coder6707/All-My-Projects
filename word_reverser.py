i = 0
while i == 0:
    name= input("ENTER NAME: ")
    if name == "quit":
        print("thank you")
        break
    name_reversed = name[::-1]
    print(name_reversed)
    if name_reversed == name:
        print("IT IS A PALINDROME")
        
    
