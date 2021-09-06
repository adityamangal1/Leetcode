str = 'alic.e@leetcode.com'
local = str.split('@')[0]
print(local)
local = local[:local.index('+')].replace('.', '')
print(local)

