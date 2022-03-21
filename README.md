# Minitalk
42 Ecole project for understanding Unix signals.
Goal is make server and client app. Server app run ferst and print their PID.
Client run with two parameters: server PID and string of characters. The string encode by signals SIGUSR1 and SIGUSR2 bit per bit and send to server.
Server decode signals, print every byte and give response about success decode to client. If enother client start session before current copmlete, server processig that by send signal to current client to stop her sending.
