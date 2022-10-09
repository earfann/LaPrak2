import math
alas, tinggi = 5, 12
miring = math.sqrt((alas ** 2) + (tinggi ** 2))
print("Diketahui :")
print("Alas = {} cm" .format(alas))
print("Tinggi = {} cm\n" .format(tinggi))
print("Jawab :")
print("Sisi A = {} cm" .format(tinggi))
print("Sisi B = {} cm" .format(round(miring)))
print("Sisi C = {} cm" .format(alas))
print("Keliling = {} cm" .format(round(alas+tinggi+miring)))
print("Luas = {} cm" .format(round((alas*tinggi)/2)))