graph = {'5':['3','7'],'3':['2','4'],'2':[],'4':['8'],'8':[],'7':['8']}
visited = []
queue = []
def bfs(node):
	visited.append(node)
	queue.append(node)
	while(queue):
		m = queue.pop(0)
		print(m)
		for nei in graph[m]:
			if nei not in visited:
				visited.append(nei)
				queue.append(nei)