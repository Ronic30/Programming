e = set() # this is a empty set

set1 = {1, 2, 3,101, 4, "BMW"}
set2 = {101, 201,2,  301, 401, "PORCHE"}
# print(set1)

# set1.add("VALO")
# print(set1)

# set1.remove(3)
# print(set1)

# p = set1.pop()
# print(p)
# print(set1)

union_set = set1 | set2
print(union_set)

intersec_set = set1 & set2
print(intersec_set)

diff_set = set1 - set2
print(diff_set)