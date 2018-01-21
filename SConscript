from building import *

cwd = GetCurrentDir()

objs = []

objs += Glob('*.c')
objs += Glob('src/*.c')
objs += Glob('blockdev/rtthread/*.c')

CPPPATH = ['%s/include'%(cwd)]
CPPPATH += ['%s/blockdev/rtthread'%(cwd)]
CPPDEFINES = ['CONFIG_USE_DEFAULT_CFG']
CPPDEFINES+=['CONFIG_HAVE_OWN_OFLAGS=0']

group = DefineGroup('Filesystem', objs, 
            depend = ['RT_USING_DFS', 'RT_USING_DFS_LWEXT4'],
            CPPPATH = CPPPATH,
            CPPDEFINES = CPPDEFINES)

Return('group')
