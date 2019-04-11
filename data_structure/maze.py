from lstack import LStack

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def empty(self):
        if not self.head:
            return True
        return False

    def add(self, data):
        new_node = Node(data)
        if not self.head:
            self.head = new_node
            return
        new_node.next =self.head
        self.head = new_node
    
    def traverse(self):
        cur = self.head
        while cur:
            yield cur
            cur = cur.next

class Position:
    def __init__(self, row, col, dir):
        self.row=row
        self.col=col
        self.dir=dir

class MazeSolver:
    direction=((-1, 0), (-1, 1), (0, 1), (1, 1), (1, 0), (1, -1), (0, -1), (-1, -1))
    def __init__(self, maze):
        '''
        maze: 이중 리스트
        '''
        self.maze=maze
        # 출구 행과 열을 나타냄
        self.EXIT_ROW=len(maze)
        self.EXIT_COL=len(maze[0])

        # to do : 가장자리 벽 넣기
        for row in maze:
            row.insert(0, 1)
            row.append(1)
        
        added_row = [1 for _ in range(self.EXIT_COL+2)]
        maze.insert(0, added_row)
        maze.append(added_row)
        
        self.path=LinkedList()

    def get_path(self):
        stack=LStack()
        mark=[]

        # mark를 0으로 가득 찬 실제 미로 크기의 리스트
        for _ in range(self.EXIT_ROW+2):
            mark.append([0 for _ in range(self.EXIT_COL+2)])

        row=None; col=None; dir=None
        next_row=None; next_col=None    
        found=None # 이동할 곳을 찾으면 True
        
        # 미로의 시작점 (1, 1)
        mark[1][1]=1
        # 첫 시작 위치를 스택에 push
        stack.push(Position(1, 1, 2))

        while not stack.empty() and not found: # stack이 비었다면
            # 스택 팝을 가져옴. 현재 위치 업뎃
            # row, col, dir
            p=stack.pop()
            row=p.row
            col=p.col
            dir=p.dir
            
            while dir<8 and not found: # dir이 7 이하라면
                next_row=MazeSolver.direction[dir][0]+row
                next_col=MazeSolver.direction[dir][1]+col
    
                if next_row==self.EXIT_ROW and next_col==self.EXIT_COL:
                    found=True
                    stack.push(Position(row, col, dir))
                    stack.push(Position(next_row, next_col, 0))
                    
                elif mark[next_row][next_col]==0 and self.maze[next_row][next_col]==0:
                    mark[next_row][next_col]=1
                    stack.push(Position(row, col, dir))
                    row=next_row
                    col=next_col
                    dir=0

                else: # 벽도 아니고 갔던 곳도 아니라면 이동
                    dir+=1
                    
        if found:
            while not stack.empty():
                self.path.add(stack.pop())
        else:
            print('no way')

    def print_path(self):
        g = self.path.traverse()
        for node in g:
            print("({}, {})".format(node.data.row, node.data.col))

    def show_maze(self):
        print('   ', end='')
        for i in range(self.EXIT_ROW+2):
            print(' ' + str(i) + ' ', end='')
        print()

        for i in range(self.EXIT_ROW+2):
            print(' ' + str(i) + ' ', end='')

            for j in range(self.EXIT_COL+2):
                if self.maze[i][j] == 0:
                    print(' O ', end='')
                else:
                    print(' # ', end='')
            print()
        print()

    def show_path(self):
        path_set = set()
        g=self.path.traverse()
        for node in g:
            path_set.add((node.data.row, node.data.col))
        
        print('   ', end='')
        for i in range(self.EXIT_ROW+2):
            print(' ' + str(i) + ' ', end='')
        print()

        for i in range(self.EXIT_ROW+2):
            print(' ' + str(i) + ' ', end='')

            for j in range(self.EXIT_COL+2):
                if (i, j) in path_set:
                    print(' P ', end='')
                elif self.maze[i][j] == 0:
                    print(' O ', end='')
                else:
                    print(' # ', end='')
            print()
        print()

if __name__ == "__main__":
    maze = [
		[0, 1, 1, 0, 0],
		[1, 0, 0, 1, 1],
		[0, 1, 1, 0, 1],
		[0, 1, 0, 1, 1],
		[1, 1, 0, 0, 0],
    ]

    maze_solver = MazeSolver(maze)
    maze_solver.show_maze()
    maze_solver.get_path()
    maze_solver.print_path()
    maze_solver.show_path()