from building import *
import rtconfig

cwd = GetCurrentDir()

objs = []

objs += Glob('*.c')
objs += Glob('src/*.c')
objs += Glob('blockdev/rtthread/*.c')

CPPPATH = ['%s/include'%(cwd)]
CPPPATH += ['%s/blockdev/rtthread'%(cwd)]
CPPDEFINES = ['CONFIG_USE_DEFAULT_CFG']
CPPDEFINES+=['CONFIG_HAVE_OWN_OFLAGS=0']

LOCAL_CCFLAGS = ''

if rtconfig.CROSS_TOOL == 'gcc':
    LOCAL_CCFLAGS += ' -std=gnu99'


group = DefineGroup('Filesystem', objs, 
            depend = ['RT_USING_DFS', 'RT_USING_DFS_LWEXT4'],
            CPPPATH = CPPPATH,
            CPPDEFINES = CPPDEFINES,
            LOCAL_CCFLAGS = LOCAL_CCFLAGS)

Return('group')
