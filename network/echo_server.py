import socket
import sys

serv=socket.socket(socket.AF_INET, socket.SOCK_STREAM)
serv.bind((f'{sys.argv[1]}', int(sys.argv[2])))
serv.listen()
data_sock, clnt_address=serv.accept()

while True:
    recv_buf=data_sock.recv(4)
    if not recv_buf:
        data_sock.close()
        serv.close()
        break
    else:
        n=int.from_bytes(recv_buf, 'big')
        recv_buf=data_sock.recv(n)
        # msg=recv_buf.decode()
        print(recv_buf)

        send_buf=recv_buf
        data_sock.send(send_buf)