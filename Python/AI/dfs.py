graph = {'5': ['3', '7'], '3': ['2', '4'], '2': [], '4': ['8'], '8': [], '7': ['8']}
visited = set()

def dfs(node):
    if node not in visited:
        print(node)
        visited.add(node)
        for neighbour in graph[node]:  
            dfs(neighbour)

print("DFS Traversal:")
dfs('5')
