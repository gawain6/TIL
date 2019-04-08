from queue import Queue
import copy

# 너비 우선 탐색 알고리즘
def breadth_first_search(dic):
    q=Queue()
    q.enqueue(dic['you'])

    while not q.empty():
        person=q.dequeue()
        if person_is_seller(person):
            print(person+" is a mango seller!")
            return True
        else:
            q.enqueue(dic[person])
    return False

def person_is_seller(name):
    return name[-1]=='m'

if __name__ == "__main__":
    graph={}
    graph['you']=['alice', 'bob', 'peggy']
    graph['bob']=['anuj', 'peggy']
    graph['alice']=['peggy']
    graph['anuj']=['thom', 'jonny']
    graph['peggy']=[]
    graph['thom']=[]
    graph['jonny']=[]

    breadth_first_search(graph)