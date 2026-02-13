what = ["apple", "bananna", "orange", "cat", "BMW", 424]

print(what)

print(what[5], what[2])

what[0] = "Nasif"

print(what)

print(len(what))

print("type of the list : ", type(what))

if "al" in what:
    print("Yes, succeccful")
else:
    print("No, Failed")

# insert
what.insert( 6,"al")
print(what)

#append 
what.append("islam")
print(what)

who  = [2026, "New", "Year"]

what.extend(who)
print(what)

what.remove(2026)

print(what)

for i in what:
    print(i)
    
