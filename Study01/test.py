#!/usr/bin/python3
from pwn import *

p = process("/bin/cat")

p.send(b"hello")
print(p.recv())

p.send(p64(1234))
print(p.recv())

p.interactive()

p.close()
