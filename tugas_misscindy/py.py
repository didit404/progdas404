nilai=90
match nilai:
    case n if n >= 90 :
        print("Nilai A")
    case n if n >= 80 and n < 89:
        print("Nilai B")
    case n if n >= 70 and n < 79:
        print("Nilai C")
    case n if n < 70:
        print("Nilai D")

  