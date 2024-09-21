project('Project1', 'cpp', default_options : ['cpp_std=c++23'])

win = import('windows')
cc = meson.get_compiler('cpp')

includes = include_directories()
src = []
src += win.compile_resources('Project1.rc', [])

executable('Project1', src, include_directories : includes, win_subsystem: 'windows', install : true, install_dir : meson.current_source_dir() + '/bin')
