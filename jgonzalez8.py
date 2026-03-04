# Number between 0 and 9 ask for da number

#If user guess is lower than the number let them by displaying a message
# if user guesses correctly display a win message, if not then print a lose message



name_input = str(input("Enter your name:"))

print("Hello", name_input ,"Welcome to the Number Guessing Game. If you can guess what number I'm thinking of between the ranges of 0 or 9 You win!") 
user_input = int(input("Please Enter your Number"))

if (user_input == 4):
    print("Congratulations! You won!")
else:
    print("Aww... sorry my number was 4 Better luck next Time!")

for joke in range(10):
    print("Why did the Chicken Cross the Road? Because there was a KFC across the other side")

food = 1
while (food < 15):
    print("Carne Asada Burritos and Tacos are amazing")
    food = food + 1
