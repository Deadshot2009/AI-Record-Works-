def calculate_bill(units):
    bill=0
    if units<=100:
        bill=units*1.50
    elif units<=200:
        bill=100*1.50+(units-100)*2.50
    elif units<=500:
        bill=100*1.50+100*2.5+(units-200)*4
    else:
        bill=100*1.5+100*2.5+300*4+(units-500)*6

    return bill

n=int(input("Enter Number Of Customers:"))
for i in range(1,n+1):
    print(f"\n Customers{i}")
    name=input("Enter Customer Name:")
    units=float(input("Enter Units Consumed"))
    bill=calculate_bill(units)

    print("Customer Name:",name)
    print("Units:",units)
    print("Bill Amount:",round(bill,2))