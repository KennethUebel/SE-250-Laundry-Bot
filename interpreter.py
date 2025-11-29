#declaration
n = 0
c = "h"
dorm = []
washer = []
dryer = []
selection = ""
building = ""
endoffile = False

#dict of dorms and their respective laundry machines
L = {
    "wash": [],
    "dry":  []
}
M = {
    "wash": [],
    "dry":  []
}
S = {
    "wash": [],
    "dry":  []
}
C = {
    "wash": [],
    "dry":  []
}

#welcome statement
print("welcome oh laundryitus ones, for we have your laundry status right here ")

#reads file into string
#when implimenting it the only thing that might need to change is the filepath
filepath = r'C:\Users\Daniel\Documents\GitHub\project1-MinusculeBrain\SE\laundry.txt'
with open(filepath) as laundry:

    #turns file string into list
    while not endoffile:
        if c == "":
            endoffile = True
        c = laundry.read(1)
        dorm.append(c)
    print()

    #sorts string into each dorm
    for p in dorm:
        #sign characters for printing to dorm building sublists
        if dorm[n] == "M":
            building = "M"
        if dorm[n] == "L":
            building = "L"
        if dorm[n] == "S":
            building = "S"
        if dorm[n] == "C":
            building = "C"
        #washer, dryer and don't care sign characters
        if dorm[n] == "W":
            selection = "W"
        if dorm[n] == 'D':
            selection = "D"
        if dorm[n] == "P":
            selection = "P"
        
        #appends appropraite data to coresponding dicts
        #shoe dictionary apppender
        if building == "S":
            if selection == "W":
                if dorm[n] == "W":
                    washer.clear()
                else:
                    S["wash"].append(dorm[n])
            if selection == "D":
                if dorm[n] == "D":
                    dryer.clear()
                else:
                    S["dry"].append(dorm[n])

        #lawrence dict appender
        if building == "L":
            if selection == "W":
                if dorm[n] == "W":
                    washer.clear()
                else:
                    L["wash"].append(dorm[n])
            if selection == "D":
                if dorm[n] == "D":
                    dryer.clear()
                else:
                    L["dry"].append(dorm[n])

        #mitchell dict appender
        if building == "M":
            if selection == "W":
                if dorm[n] == "W":
                    washer.clear()
                else:
                    M["wash"].append(dorm[n])
            if selection == "D":
                if dorm[n] == "D":
                    dryer.clear()
                else:
                    M["dry"].append(dorm[n])

        #casehill dict appender  
        if building == "C":
            if selection == "W":
                if dorm[n] == "W":
                    washer.clear()
                else:
                    C["wash"].append(dorm[n])
            if selection == "D":
                if dorm[n] == "D":
                    dryer.clear()
                else:
                    C["dry"].append(dorm[n])

        #incriments counter in big list to parse through
        n += 1

#print statement hell
print("given file contents")
print(dorm)
print()

print("shoe machines")
print (S["wash"]) 
print (S["dry"])
print()

print("lawrence machines")
print(L["wash"])
print(L["dry"])
print()

print("mitchell machines")
print(M["wash"])
print(M["dry"])
print()

print("casehill machines")
print(C["wash"])
print(C["dry"])

laundry.close()
print("done")
