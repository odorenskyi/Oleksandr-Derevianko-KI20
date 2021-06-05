set(FIND_MODULES_DEREVIANKO_PATHS C:\\Code\\C++\\Oleksandr-Derevianko-KI20\\lab08\\prj\\ModulesDerevianko )

find_path(MODULES_DEREVIANKO_DIR ModulesDerevianko.h
        PATHS ${FIND_MODULES_DEREVIANKO_PATHS} )
find_library(MODULES_DEREVIANKO_LIBRARY NAMES ModulesDerevianko
        PATH_SUFFIXES build
        PATHS ${FIND_MODULES_DEREVIANKO_PATHS})