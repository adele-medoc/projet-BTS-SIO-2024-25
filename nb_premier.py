# Programme pour dire si un nombre saisi est premier
n = int(input("Saisir n : "))

if n % 2 == 0 or n % 3 == 0 or n % 4 == 0 or n % 5 == 0:
    print("Le nombre " + str(n) + " n'est pas premier")
else:
    print("Le nombre " + str(n) + " est premier")