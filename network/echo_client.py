import socket
import sys

clnt=socket.socket(socket.AF_INET, socket.SOCK_STREAM)
clnt.connect((f'{sys.argv[1]}', int(sys.argv[2])))

while True:
    msg=input('# ')
    if msg=='0':
        clnt.close()
        break
    else:
        send_buf=msg.encode()
        n=len(send_buf)

        bnum=n.to_bytes(4, 'big')
        clnt.send(bnum)
        clnt.send(send_buf)

        recv_buf=clnt.recv(n)
        msg=recv_buf.decode()
        print(msg)