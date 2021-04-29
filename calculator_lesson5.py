from tkinter import *

#to import everything
root = Tk()
root.title("simple calculator")                 #Giving Title


root.iconbitmap("C:/Users/Akshat/Desktop/calculator.ico")                 #giving icon


e = Entry(root, width = 35, borderwidth = 5, bg = "#FFFF00", fg="#FF0000" )
e.grid(row= 0,column = 0 , columnspan=3, padx=10, pady=10)
#e.insert(0, "enter your name")


def button_click(number):
    #e.delete(0,END)
    current = e.get()
    e.delete(0,END)
    e.insert(0, str(current) + str(number))


def button_clear():
    e.delete(0, END)


def button_add():
    first_num = e.get()
    global f_num
    global math
    math = "addition"
    f_num= int(first_num)
    e.delete(0, END)


def button_equal():
    second_num = e.get()
    e.delete(0, END )

    if math == "addition":
        e.insert(0, f_num + int(second_num))

    if math == "subtraction":
        e.insert(0, f_num - int(second_num))

    if math == "multiplication":
        e.insert(0, f_num * int(second_num))

    if math == "division":
        e.insert(0, f_num / int(second_num))

    if math == "square":
        e.insert(0, f_num ** 2)
    

    if math == "cube":
        e.insert(0, f_num ** 3)

    if math == "power":
        e.insert(0, f_num ** int(second_num) )
    
    
    


def button_subtract():
    first_num = e.get()
    global f_num
    global math
    math = "subtraction"
    f_num= int(first_num)
    e.delete(0, END)


def button_multiply():
    first_num = e.get()
    global f_num
    global math
    math = "multiplication"
    f_num= int(first_num)
    e.delete(0, END)


   
def button_divide():
    first_num = e.get()
    global f_num
    global math
    math = "division"
    f_num= int(first_num)
    e.delete(0, END)


def button_square():
    first_num = e.get()
    global f_num
    global math
    math = "square"
    f_num= int(first_num)
    e.delete(0, END)

def button_cube():
    first_num = e.get()
    global f_num
    global math
    math = "cube"
    f_num= int(first_num)
    e.delete(0, END)


def button_power():
    first_num = e.get()
    global f_num
    global math
    math = "power"
    f_num= int(first_num)
    e.delete(0, END)



#defining buttons
button_1 = Button(root, text="1", padx=40, pady=20, command=lambda : button_click(1), bg = "#40E0D0" )
button_2 = Button(root, text="2", padx=40, pady=20, command=lambda : button_click(2), bg = "#40E0D0")
button_3 = Button(root, text="3", padx=40, pady=20, command=lambda : button_click(3), bg = "#40E0D0")
button_4 = Button(root, text="4", padx=40, pady=20, command=lambda : button_click(4), bg = "#40E0D0")
button_5 = Button(root, text="5", padx=40, pady=20, command=lambda : button_click(5), bg = "#40E0D0")
button_6 = Button(root, text="6", padx=40, pady=20, command=lambda : button_click(6), bg = "#40E0D0")
button_7 = Button(root, text="7", padx=40, pady=20, command=lambda : button_click(7), bg = "#40E0D0")
button_8 = Button(root, text="8", padx=40, pady=20, command=lambda : button_click(8), bg = "#40E0D0")
button_9 = Button(root, text="9", padx=40, pady=20, command=lambda : button_click(9), bg = "#40E0D0")
button_0 = Button(root, text="0", padx=40, pady=20, command=lambda : button_click(0), bg = "#40E0D0")

button_equal = Button(root, text="=", padx=91, pady=20, command= button_equal,bg = "#00FF00")
button_clear = Button(root, text="Clear", padx=79, pady=20, command= button_clear,bg = "#00FF00")

button_add = Button(root, text="+", padx=39, pady=20, command= button_add, bg = "#FFA500")
button_subtract= Button(root, text="-", padx=41, pady=20, command= button_subtract, bg = "#FFA500")
button_multiply = Button(root, text="X", padx=40, pady=20, command= button_multiply, bg = "#FFA500")
button_divide = Button(root, text="÷", padx=41, pady=20, command= button_divide, bg = "#FFA500")


button_square = Button(root, text="x²", padx=40, pady=20, command= button_square, bg = "#FF0000")
button_cube = Button(root, text="x³", padx=40, pady=20, command= button_cube, bg = "#FF0000")
button_power = Button(root, text="",  padx=42, pady=20, command= button_power, bg = "#FF0000")



    



#putting them on screen
button_1.grid(row=3, column=0)
button_2.grid(row=3, column=1)
button_3.grid(row=3, column=2)

button_4.grid(row=2, column=0)
button_5.grid(row=2, column=1)
button_6.grid(row=2, column=2)

button_7.grid(row=1, column=0)
button_8.grid(row=1, column=1)
button_9.grid(row=1, column=2)

button_0.grid(row=4, column=0)
button_clear.grid(row=4, column=1, columnspan=2)
button_equal.grid(row=5, column=1, columnspan=2)

button_add.grid(row=5, column=0)
button_subtract.grid(row=6, column=0)
button_multiply.grid(row=6, column=1)
button_divide.grid(row=6, column=2)


button_square.grid(row=7, column=0 )
button_cube.grid(row=7, column=1 )
button_power.grid(row=7, column=2 )


root.mainloop()


