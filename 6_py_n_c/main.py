"""
Scrivi script che lancia sqr con anonymous pipe e comunicazione bidirezionale
- chiedi numero input a utente
- calcola quadrato con eseguibile C
- stampa output
- stampa return code dell'eseguibile C
"""

import subprocess


c_sqr = subprocess.Popen(
    ["./bin/sqr.exe"], stdin=subprocess.PIPE, stdout=subprocess.PIPE, text=True
)

user_in = input("Di quale numero vuoi sapere il quadrato? ")
c_sqr.stdin.write(user_in + "\n")
c_sqr.stdin.flush()

result = c_sqr.stdout.readline()
print(f"Il quadrato di {user_in} e' {result}")

c_sqr_exit_code = c_sqr.wait()
print(f"L'eseguibile C ha terminato con codice: {c_sqr_exit_code}")
