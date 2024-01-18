

def getTime(weight):
    time = 0
    level=""
    if weight == 0:
        time = 0
        print(str(time)+"min")
    elif weight>0 and weight<=2000:
        level = "low level"
        time = 25
        print(str(time)+"min")
    elif weight >=2001 and weight<=4000:
        time = 35
        level = "medium level"
        print(str(time)+"min")
    elif weight >=4001 and weight<=7000:
        time= 45
        level = "High level"
        print(str(time)+"min")
    elif weight>7000:
        print("OVERLOADED")
    else:
        print("INVALID INPUT")



weight = int(input())

getTime(weight)


