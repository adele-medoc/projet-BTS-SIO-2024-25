x = input("Saisir x : ")
y = input("Saisir y : ")
z = input("Saisir z : ")

if x>y and x>z:
    if y>z:
        nb3 = x
        nb2 = y
        nb1 = z
    else:
        nb3 = x
        nb2 = z
        nb1 = y
elif y>x and y>z:
    if x>z:
        nb3 = y
        nb2 = x
        nb1 = z
    else:
        nb3 = y
        nb2 = z
        nb1 = x
else:
    if x>y:
        nb3 = z
        nb2 = x
        nb1 = y
    else:
        nb3 = z
        nb2 = y
        nb1 = x
print("Voici le classement dans l'ordre croissant : " + str(nb1) + "," + str(nb2) + "," + str(nb3))