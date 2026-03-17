with open('example.txt','r') as file:
    chunk=file.read(100)
    print(chunk)
    next_chunk= file.read(100)
    print(next_chunk)
    
with open('example.txt','rb') as file:
    position=file.tell()
    print("current position:",position)
    content=file.read(10)
    print("Read:",content.decode())
    position=file.tell()
    print("new position",position)
    file.seek()
    print("position after seek")
    #do from pdf and correct
