# S’assure que la version de make est suffisamment récente
cmake_minimum_required(VERSION 3.7.1)

# Spécifie le nom du projet et le langage utilisé
project(POO_C++ LANGUAGES CXX)

# Affecte à CMAKE_RUNTIME_OUTPUT_DIRECTORY le répertoire de création des fichiers exécutables
# Remarque: CMAKE_BINARY_DIR correspond au répertoire d'où est lancée la commande "cmake ..", 
# à savoir le répertoire "build" dans notre cas
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)

# Affecte à CMAKE_CURRENT_SOURCE_DIR le répertoire des fichiers source .cpp
set(CMAKE_CURRENT_SOURCE_DIR ${CMAKE_BINARY_DIR}/../src)

# Ajoute le répertoire include des fichiers .h au chemin de recherche des #include "xx.h" 
include_directories(${CMAKE_BINARY_DIR}/../include)

# Impose la compilation en mode Debug avec certaines options supplémentaires
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall -Wextra")
   
# Affiche des informations relatives au compilateur qui sera utilisé pour générer les cibles
message(STATUS "   Compiler            : ${CMAKE_CXX_COMPILER}")
message(STATUS "   Compiler build mode : ${CMAKE_BUILD_TYPE}")
message(STATUS "   Compiler flags      : ${CMAKE_CXX_FLAGS_DEBUG}")

# Génère la liste des fichiers .cpp devant être compilés
file(
   GLOB_RECURSE
   srcFiles
   ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

# Crée l'exécutable monExe à partir de la liste des fichiers .cpp
add_executable(
   monExe
   ${srcFiles}
)

