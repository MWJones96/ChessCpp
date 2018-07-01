#include "pawn.h"
#include <vector>

std::vector<Move> Pawn::getMoves()
{
    std::vector<Move> moves = {};
    Game g = Game::getInstance();

    //Starting position of pawn determined by colour
    int startingPos = this->m_color == Color.WHITE ? g.m_board.m_size - 2 : 1;
    //Direction pawn moves up or down the board
    int dir = this->m_color == Color.WHITE ? -1 : 1;

    if(g.m_board.m_pieces[this->m_x][this->m_y + dir] == NULL)
        moves.push_back(Move(this->m_x, this->m_y + dir));

    //Determines if the pawn double move is available
    if(this.m_y == startingPos && g.m_board.m_pieces[this->m_x][this->m_y + dir] == NULL &&
            g.m_board.m_pieces[this->m_x][this->m_y + 2*dir] == NULL)
        moves.push_back(Move(this.m_x, this.m_y + 2*dir));

    //Capture right
    if(this->m_x + 1 < g.m_board.m_size)
    {
        if(g.m_board.m_pieces[this->m_x + 1][this->m_y + dir] != NULL)
        {
            if(g.m_board.m_pieces[this->m_x + 1][this->m_y + dir].m_color != this.m_color)
                moves.add(Move(this->m_x + 1, this->m_y + dir));
        }
    }

    //Capture left
    if(this->m_x - 1 >= 0)
    {
        if(g.m_board.m_pieces[this->m_x - 1][this->m_y + dir] != NULL)
        {
            if(g.m_board.m_pieces[this->m_x - 1][this->m_y + dir].m_color != this->m_color)
                moves.add(Move(this->m_x - 1, this->m_y + dir));
        }
    }

    return moves;
}

void Pawn::move(int x, int y)
{
    Game g = Game::getInstance();
    g.m_board.move_piece(this->m_x, this->m_y, x, y);
}
