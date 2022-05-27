#!/usr/bin/python3
from pwn import *

p = process("vuln")
input()

p.close()
