cmake_minimum_required(VERSION 3.15)
project(PokemonAIClone VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Définition des répertoires d'inclusion
include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Recherche automatique de tous les fichiers sources et d'en-tête
file(GLOB_RECURSE SOURCES "src/*.cpp")
file(GLOB_RECURSE HEADERS "include/*.hpp" "include/*.h")

# Ajout de l'exécutable principal
add_executable(PokemonAIClone ${SOURCES} ${HEADERS})

# Options de compilation (gestion des warnings selon le compilateur)
if(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    target_compile_options(PokemonAIClone PRIVATE /W4)
else()
    target_compile_options(PokemonAIClone PRIVATE -Wall -Wextra)
endif()