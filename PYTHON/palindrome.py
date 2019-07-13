a =input()
a=a.casefold()
rev_a=reversed(a)
if list(a)==list(rev_a):
   print("It is palindrome")
else:
   print("It is not palindrome")
