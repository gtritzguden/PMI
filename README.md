# PMI — Chess game in C++ (object-oriented programming project)

![C++](https://img.shields.io/badge/C++-00599C?style=flat&logo=cplusplus&logoColor=white)
![CMake](https://img.shields.io/badge/CMake-064F8C?style=flat&logo=cmake&logoColor=white)
![Status](https://img.shields.io/badge/status-unfinished-lightgrey?style=flat)

Team course project at Télécom Physique Strasbourg: building the core of a chess game in C++ to practise object-oriented design (classes, inheritance, references, manual memory management).

> **Status:** unfinished academic project. Piece representation, board display and part of the movement rules are implemented; captures, check detection and the game loop are not. It is kept here as a record of my C++ / OOP coursework.

## Design

**Board encoding.** The board is an 8×8 integer grid (`plateau`). Each square holds `0` (empty) or a signed code:

| Tens digit | Piece |
|:---:|---|
| 1 | Pawn (`pion`) |
| 2 | Rook (`tour`) |
| 3 | Queen (`dame`) |
| 4 | King (`roi`) |

- The **units digit** tells apart pieces of the same type: two pawns are `11` and `12`, a third is `13`, and so on.
- The **sign** encodes the colour: positive for white, negative for black.

**Control map.** `occupation` inherits from `plateau` and stores, for one colour, which squares are attacked by the opponent. Move validation (whether a path is blocked, whether the king is in check) reads this map.

**Pieces.** Each piece type is a class (`pion`, `tour`, `dame`, `roi`). It stores its position and colour and implements `seDeplacer()` (move) and its own movement rules.

## Project structure

```
.
├── CMakeLists.txt
├── include/          # class and function declarations
│   ├── plateau.h     # 8x8 board, add/remove pieces, display
│   ├── occupation.h  # control map (inherits plateau)
│   ├── pion.h  tour.h  dame.h  roi.h
│   ├── fonctions.h   # helpers (occupancy test, distance...)
│   └── NicoFonction.h# square-control detection (rook/queen lines, diagonals)
└── src/              # implementations + main.cpp (test scenario)
```

## Build and run

Requirements: a C++ compiler (g++ or clang++) and CMake ≥ 3.7.

```bash
cmake -S . -B build
cmake --build build
./bin/monExe
```

`main.cpp` runs a small test scenario: it prints an empty board, places a pawn, then builds the white control map.

## Known limitations

- Square-control detection reads outside the board on edge squares, so the test scenario crashes when it builds the control map.
- Captures, check / checkmate, castling, en passant and promotion are not implemented.
- Bishops and knights are not modelled.
- There is no interactive game loop; the game is only exercised through `main.cpp`.
