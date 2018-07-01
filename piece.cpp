#include "piece.h"
#include <vector>

Piece::Piece(Color c, int x, int y, Type type, char letterCode)
{
    m_color = c;
    m_x = x;
    m_y = y;
    m_type = type;
    m_letterCode = letterCode;
}

Piece::~Piece()
{}

std::vector<Move> Piece::getLegalMoves()
{
    std::vector<Move> moves = getMoves();
    Game g = Game::getInstance();

    std::vector<Move> legalMoves = {};

    int x_orig = m_x;
    int y_orig = m_y;

    foreach(m, moves)
    {
        Piece temp = g.m_board.m_pieces[m.m_x][m.m_y];
        move(m.m_x, m.m_y);

        if(!(m_color == Color.WHITE ? g.wk : g.bk).isCheck())
        {
            legalMoves.push_back(m);
        }

        move(x_orig, y_orig);
        g.m_board.m_pieces[m.m_x][m.m_y] = temp;
    }

    return legalMoves;
}
