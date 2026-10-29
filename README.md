# ChessCpp

An unfinished C++ and Qt port of the author's Java [Chess](https://github.com/MWJones96/Chess) game.

## Overview

ChessCpp re-implements an earlier Java chess game in C++ using the Qt Widgets framework. The project was created in Qt Creator in July 2018 and contains a single initial commit: the board user interface is laid out, and work had begun on translating the piece and move-generation logic from Java.

## What is implemented

- **Board window:** a fixed-size 512 x 512 `QMainWindow` containing an 8 x 8 grid of 64 x 64 `QPushButton` squares (`button_00` to `button_77`), each styled with a square colour in `mainwindow.ui`. The status bar and toolbar are hidden.
- **Starting position:** the 32 starting squares are given piece icons in `mainwindow.ui`, using the 64 x 64 PNG piece images bundled through the Qt resource file `res.qrc`.
- **Model types:** `Color` (`BLACK`, `WHITE`) and `Type` (`PAWN`, `ROOK`, `KNIGHT`, `BISHOP`, `QUEEN`, `KING`) enumerations.
- **Piece logic (in progress):**
  - `Piece` (`piece.h`, `piece.cpp`): an abstract base class holding position, colour, type and a letter code, with `getLegalMoves()` filtering pseudo-legal moves by trying each one and checking whether the side's king is left in check.
  - `Pawn` (`pawn.h`, `pawn.cpp`): pawn move generation, covering single and double advances and diagonal captures.
  - `Rook`, `Knight`, `Bishop`, `Queen` and `King` have empty header files only.

Clicking a square does nothing yet: no signals are connected to the board buttons and there is no game state, move input or turn handling.

## Tech stack

- C++
- Qt 5 (Core, GUI, Widgets); the Qt Creator configuration in the repository targets Qt 5.11.1 with MSVC 2015
- qmake

## Getting started

### Prerequisites

- Qt 5 with the Widgets module
- A C++ compiler supported by your Qt installation
- Optionally, Qt Creator

### Build

With Qt Creator, open `ChessCpp.pro` and build. From the command line:

```sh
qmake ChessCpp.pro
make            # or nmake / jom with MSVC
```

The project will not currently compile as committed; see [Status and limitations](#status-and-limitations).

## Project structure

```
.
├── ChessCpp.pro        # qmake project file
├── ChessCpp.pro.user   # Qt Creator per-user settings
├── main.cpp            # Creates the QApplication and shows the main window
├── mainwindow.h/.cpp   # Main window: sizes the board squares and their icons
├── mainwindow.ui       # Qt Designer layout of the 8 x 8 button grid
├── piece.h/.cpp        # Abstract piece base class and legal-move filtering
├── pawn.h/.cpp         # Pawn move generation
├── rook.h, knight.h, bishop.h, queen.h, king.h   # Empty placeholders
├── color.h, type.h     # Colour and piece-type enumerations
├── res.qrc             # Qt resource file listing the piece images
└── res/                # Black and white piece images (64 x 64 PNG)
```

## Status and limitations

The port is at an early stage and does not build as committed:

- `mainwindow.cpp` contains the statement `ui->button_grid->SetFixedSize;`, which is not valid C++.
- `piece.cpp` and `pawn.cpp` are still partly Java syntax (for example `this.m_y`, `Color.WHITE`, `moves.add(...)` and `foreach(m, moves)`), and refer to `Move`, `Game` and board types that do not exist yet. The headers are also missing the includes they depend on.
- Only pawn moves are written; the other pieces, the board model, check detection, turn handling and user input are not implemented.
- Special moves such as castling, en passant and promotion are not implemented.
